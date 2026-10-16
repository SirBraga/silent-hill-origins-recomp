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

// Function: sub_002625E0
// Address: 0x2625e0 - 0x2626b8
void sub_002625E0_0x2625e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002625E0_0x2625e0");
#endif

    switch (ctx->pc) {
        case 0x262620u: goto label_262620;
        default: break;
    }

    ctx->pc = 0x2625e0u;

    // 0x2625e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2625e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2625e4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2625e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2625e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2625ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2625ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2625f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2625f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2625f4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2625f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2625f8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2625f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2625fc: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x2625fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x730FC8u));
    // 0x262600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262604: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x262604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x262608: 0x8c634170  lw          $v1, 0x4170($v1)
    ctx->pc = 0x262608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4170u));
    // 0x26260c: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x26260cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x262610: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x262614: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x262614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x262618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26261c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x26261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_262620:
    // 0x262620: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x262620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x262624: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x262628: 0x484818  mult        $t1, $v0, $t0
    ctx->pc = 0x262628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x26262c: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x26262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x262630: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x262630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262634: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x262634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x262638: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x262638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x26263c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x26263cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x262640: 0x484818  mult        $t1, $v0, $t0
    ctx->pc = 0x262640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x262644: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x262644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x262648: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x262648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26264c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x26264cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x262650: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x262650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x262654: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x262658: 0x484818  mult        $t1, $v0, $t0
    ctx->pc = 0x262658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x26265c: 0x12a1021  addu        $v0, $t1, $t2
    ctx->pc = 0x26265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x262660: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x262660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262664: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x262664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x262668: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x262668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26266c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x26266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x262670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262674: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x262674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262678: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x262678u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x26267c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x26267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262680: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x262680u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x262684: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x262684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x262688: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x262688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26268c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26268cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x262690: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x262690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262694: 0x0  nop
    ctx->pc = 0x262694u;
    // NOP
    // 0x262698: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x262698u;
    {
        const bool branch_taken_0x262698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x262698) {
            ctx->pc = 0x26269Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262698u;
            // 0x26269c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2626A8u;
            goto label_2626a8;
        }
    }
    ctx->pc = 0x2626A0u;
    // 0x2626a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2626A0u;
    {
        const bool branch_taken_0x2626a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626A0u;
        // 0x2626a4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626a0) {
            ctx->pc = 0x2626B0u;
            goto label_2626b0;
        }
    }
    ctx->pc = 0x2626A8u;
label_2626a8:
    // 0x2626a8: 0x14e4ffdd  bne         $a3, $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2626A8u;
    {
        const bool branch_taken_0x2626a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2626ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626A8u;
        // 0x2626ac: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626a8) {
            ctx->pc = 0x262620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262620;
        }
    }
    ctx->pc = 0x2626B0u;
label_2626b0:
    // 0x2626b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2626B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2626B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626B0u;
        // 0x2626b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2626B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2626B8u;
}
