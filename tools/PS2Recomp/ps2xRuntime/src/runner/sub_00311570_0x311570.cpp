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

// Function: sub_00311570
// Address: 0x311570 - 0x311680
void sub_00311570_0x311570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311570_0x311570");
#endif

    switch (ctx->pc) {
        case 0x3115e8u: goto label_3115e8;
        default: break;
    }

    ctx->pc = 0x311570u;

    // 0x311570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x311574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31157c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x311580: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x311580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x311584: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x311584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311588: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x311588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31158c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x31158cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311590: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x311594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311598: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x311598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31159c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x31159cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3115a0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3115a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3115a4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3115a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3115a8: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x3115a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3115ac: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3115acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3115b0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3115b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3115b4: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x3115b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3115b8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3115b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3115bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3115bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3115c0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3115c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3115c4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3115c4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x3115c8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3115c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3115cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3115ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3115d0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x3115d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3115d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3115d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3115d8: 0xc64c004c  lwc1        $f12, 0x4C($s2)
    ctx->pc = 0x3115d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3115dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3115dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3115e0: 0xc0aaa3a  jal         func_2AA8E8
    ctx->pc = 0x3115E0u;
    SET_GPR_U32(ctx, 31, 0x3115E8u);
    ctx->pc = 0x3115E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3115E0u;
    // 0x3115e4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA8E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA8E8u, 0x3115E0u, 0x3115E8u)) {
        return;
    }
    ctx->pc = 0x3115E8u;
label_3115e8:
    // 0x3115e8: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3115E8u;
    {
        const bool branch_taken_0x3115e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3115ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115E8u;
        // 0x3115ec: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115e8) {
            ctx->pc = 0x311660u;
            goto label_311660;
        }
    }
    ctx->pc = 0x3115F0u;
    // 0x3115f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3115f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3115f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3115f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3115f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3115f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x3115fc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3115fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x311600: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x311600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x311604: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x311604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x311608: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x311608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x31160c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x31160cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x311610: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x311610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x311614: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x311614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311618: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x311618u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x31161c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31161cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x311620: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x311620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x311624: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x311624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311628: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x311628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x31162c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x31162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x311630: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x311630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311634: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x311634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x311638: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x311638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x31163c: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x31163cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x311640: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x311640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x311644: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x311644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x311648: 0xb2230017  sdl         $v1, 0x17($s1)
    ctx->pc = 0x311648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31164c: 0xb6230010  sdr         $v1, 0x10($s1)
    ctx->pc = 0x31164cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x311650: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x311650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x311654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x311654u;
    {
        const bool branch_taken_0x311654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311654u;
        // 0x311658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311654) {
            ctx->pc = 0x311668u;
            goto label_311668;
        }
    }
    ctx->pc = 0x31165Cu;
    // 0x31165c: 0x0  nop
    ctx->pc = 0x31165cu;
    // NOP
label_311660:
    // 0x311660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x311660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311664: 0x0  nop
    ctx->pc = 0x311664u;
    // NOP
label_311668:
    // 0x311668: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x311668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31166c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31166cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311670: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x311670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311674: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x311674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311678: 0x3e00008  jr          $ra
    ctx->pc = 0x311678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311678u;
        // 0x31167c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311680u;
}
