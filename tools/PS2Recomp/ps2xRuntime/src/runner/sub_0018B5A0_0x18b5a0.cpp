#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B5A0
// Address: 0x18b5a0 - 0x18b6c8
void sub_0018B5A0_0x18b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B5A0_0x18b5a0");
#endif

    switch (ctx->pc) {
        case 0x18b5c0u: goto label_18b5c0;
        case 0x18b5d0u: goto label_18b5d0;
        case 0x18b65cu: goto label_18b65c;
        default: break;
    }

    ctx->pc = 0x18b5a0u;

    // 0x18b5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18b5a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18b5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18b5ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18b5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18b5b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b5b8: 0xc0628e2  jal         func_18A388
    ctx->pc = 0x18B5B8u;
    SET_GPR_U32(ctx, 31, 0x18B5C0u);
    ctx->pc = 0x18B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5B8u;
    // 0x18b5bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A388u, 0x18B5B8u, 0x18B5C0u)) {
        return;
    }
    ctx->pc = 0x18B5C0u;
label_18b5c0:
    // 0x18b5c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18b5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5c8: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x18B5C8u;
    SET_GPR_U32(ctx, 31, 0x18B5D0u);
    ctx->pc = 0x18B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5C8u;
    // 0x18b5cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x18B5C8u, 0x18B5D0u)) {
        return;
    }
    ctx->pc = 0x18B5D0u;
label_18b5d0:
    // 0x18b5d0: 0x0  nop
    ctx->pc = 0x18b5d0u;
    // NOP
    // 0x18b5d4: 0x0  nop
    ctx->pc = 0x18b5d4u;
    // NOP
    // 0x18b5d8: 0x46000044  c1          0x44
    ctx->pc = 0x18b5d8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5e0: 0x0  nop
    ctx->pc = 0x18b5e0u;
    // NOP
    // 0x18b5e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18b5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b5e8: 0x0  nop
    ctx->pc = 0x18b5e8u;
    // NOP
    // 0x18b5ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18B5ECu;
    {
        const bool branch_taken_0x18b5ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5ECu;
        // 0x18b5f0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5ec) {
            ctx->pc = 0x18B610u;
            goto label_18b610;
        }
    }
    ctx->pc = 0x18B5F4u;
    // 0x18b5f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b5f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5fc: 0x0  nop
    ctx->pc = 0x18b5fcu;
    // NOP
    // 0x18b600: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x18b600u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x18b604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B604u;
    {
        const bool branch_taken_0x18b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B604u;
        // 0x18b608: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b604) {
            ctx->pc = 0x18B618u;
            goto label_18b618;
        }
    }
    ctx->pc = 0x18B60Cu;
    // 0x18b60c: 0x0  nop
    ctx->pc = 0x18b60cu;
    // NOP
label_18b610:
    // 0x18b610: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x18b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b614: 0x0  nop
    ctx->pc = 0x18b614u;
    // NOP
label_18b618:
    // 0x18b618: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x18b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b61c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x18b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b620: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x18b620u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x18b624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18b624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18b628: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18b628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18b62c: 0xe60c0000  swc1        $f12, 0x0($s0)
    ctx->pc = 0x18b62cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18b630: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x18b630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x18b634: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x18b634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x18b638: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b63c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x18b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b640: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x18b640u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x18b644: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x18b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b648: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x18b648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x18b64c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x18b64cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18b650: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x18b650u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x18b654: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x18B654u;
    SET_GPR_U32(ctx, 31, 0x18B65Cu);
    ctx->pc = 0x18B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B654u;
    // 0x18b658: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x18B654u, 0x18B65Cu)) {
        return;
    }
    ctx->pc = 0x18B65Cu;
label_18b65c:
    // 0x18b65c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x18b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b660: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x18b660u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x18b664: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x18b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b668: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x18b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b66c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x18b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b670: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x18b670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x18b674: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x18b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b678: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x18b678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18b67c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x18b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b680: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x18b680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18b684: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x18b684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x18b688: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18b688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18b68c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18b68cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b690: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x18b690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b694: 0x0  nop
    ctx->pc = 0x18b694u;
    // NOP
    // 0x18b698: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18B698u;
    {
        const bool branch_taken_0x18b698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B698u;
        // 0x18b69c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b698) {
            ctx->pc = 0x18B6B4u;
            goto label_18b6b4;
        }
    }
    ctx->pc = 0x18B6A0u;
    // 0x18b6a0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x18b6a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x18b6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x18b6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6ac: 0x0  nop
    ctx->pc = 0x18b6acu;
    // NOP
    // 0x18b6b0: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x18b6b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_18b6b4:
    // 0x18b6b4: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x18b6b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x18b6b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6BCu;
        // 0x18b6c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B6C4u;
    // 0x18b6c4: 0x0  nop
    ctx->pc = 0x18b6c4u;
    // NOP
    ctx->pc = 0x18b6c8u;
}
