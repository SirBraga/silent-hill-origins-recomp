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

// Function: sub_00126518
// Address: 0x126518 - 0x1265c8
void sub_00126518_0x126518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126518_0x126518");
#endif

    switch (ctx->pc) {
        case 0x126518u: goto label_126518;
        case 0x12651cu: goto label_12651c;
        case 0x126520u: goto label_126520;
        case 0x126524u: goto label_126524;
        case 0x126528u: goto label_126528;
        case 0x12652cu: goto label_12652c;
        case 0x126530u: goto label_126530;
        case 0x126534u: goto label_126534;
        case 0x126538u: goto label_126538;
        case 0x12653cu: goto label_12653c;
        case 0x126540u: goto label_126540;
        case 0x126544u: goto label_126544;
        case 0x126548u: goto label_126548;
        case 0x12654cu: goto label_12654c;
        case 0x126550u: goto label_126550;
        case 0x126554u: goto label_126554;
        case 0x126558u: goto label_126558;
        case 0x12655cu: goto label_12655c;
        case 0x126560u: goto label_126560;
        case 0x126564u: goto label_126564;
        case 0x126568u: goto label_126568;
        case 0x12656cu: goto label_12656c;
        case 0x126570u: goto label_126570;
        case 0x126574u: goto label_126574;
        case 0x126578u: goto label_126578;
        case 0x12657cu: goto label_12657c;
        case 0x126580u: goto label_126580;
        case 0x126584u: goto label_126584;
        case 0x126588u: goto label_126588;
        case 0x12658cu: goto label_12658c;
        case 0x126590u: goto label_126590;
        case 0x126594u: goto label_126594;
        case 0x126598u: goto label_126598;
        case 0x12659cu: goto label_12659c;
        case 0x1265a0u: goto label_1265a0;
        case 0x1265a4u: goto label_1265a4;
        case 0x1265a8u: goto label_1265a8;
        case 0x1265acu: goto label_1265ac;
        case 0x1265b0u: goto label_1265b0;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265b8u: goto label_1265b8;
        case 0x1265bcu: goto label_1265bc;
        case 0x1265c0u: goto label_1265c0;
        case 0x1265c4u: goto label_1265c4;
        default: break;
    }

    ctx->pc = 0x126518u;

label_126518:
    // 0x126518: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x126518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_12651c:
    // 0x12651c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_126520:
    // 0x126520: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x126520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_126524:
    // 0x126524: 0x24b0ffbc  addiu       $s0, $a1, -0x44
    ctx->pc = 0x126524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967228));
label_126528:
    // 0x126528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12652c:
    // 0x12652c: 0x5800a  movz        $s0, $zero, $a1
    ctx->pc = 0x12652cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_126530:
    // 0x126530: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x126530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_126534:
    // 0x126534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126538:
    // 0x126538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x126538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_12653c:
    // 0x12653c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12653cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_126540:
    // 0x126540: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x126540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_126544:
    // 0x126544: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x126544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_126548:
    // 0x126548: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x126548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_12654c:
    // 0x12654c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12654cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_126550:
    // 0x126550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_126554:
    // 0x126554: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x126554u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_126558:
    // 0x126558: 0xc04f0c2  jal         func_13C308
label_12655c:
    if (ctx->pc == 0x12655Cu) {
        ctx->pc = 0x12655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126558u;
        // 0x12655c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126560u;
        goto label_126560;
    }
    ctx->pc = 0x126558u;
    SET_GPR_U32(ctx, 31, 0x126560u);
    ctx->pc = 0x12655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126558u;
    // 0x12655c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x126558u, 0x126560u)) {
        return;
    }
    ctx->pc = 0x126560u;
label_126560:
    // 0x126560: 0xae320e10  sw          $s2, 0xE10($s1)
    ctx->pc = 0x126560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3600), GPR_U32(ctx, 18));
label_126564:
    // 0x126564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126568:
    // 0x126568: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x126568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12656c:
    // 0x12656c: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x12656cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_126570:
    // 0x126570: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x126570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_126574:
    // 0x126574: 0xb2220e07  sdl         $v0, 0xE07($s1)
    ctx->pc = 0x126574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_126578:
    // 0x126578: 0xb6220e00  sdr         $v0, 0xE00($s1)
    ctx->pc = 0x126578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12657c:
    // 0x12657c: 0xae230e08  sw          $v1, 0xE08($s1)
    ctx->pc = 0x12657cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3592), GPR_U32(ctx, 3));
label_126580:
    // 0x126580: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x126580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_126584:
    // 0x126584: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x126584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126588:
    // 0x126588: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x126588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12658c:
    // 0x12658c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x12658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_126590:
    // 0x126590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126594:
    // 0x126594: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x126594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_126598:
    // 0x126598: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x126598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_12659c:
    // 0x12659c: 0x60f809  jalr        $v1
label_1265a0:
    if (ctx->pc == 0x1265A0u) {
        ctx->pc = 0x1265A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12659Cu;
        // 0x1265a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265A4u;
        goto label_1265a4;
    }
    ctx->pc = 0x12659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1265A4u);
        ctx->pc = 0x1265A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12659Cu;
        // 0x1265a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12659Cu, 0x1265A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1265A4u;
label_1265a4:
    // 0x1265a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1265a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1265a8:
    // 0x1265a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1265a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1265ac:
    // 0x1265ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1265acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1265b0:
    // 0x1265b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1265b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1265b4:
    // 0x1265b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1265b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1265b8:
    // 0x1265b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1265b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1265bc:
    // 0x1265bc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1265bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1265c0:
    // 0x1265c0: 0x3e00008  jr          $ra
label_1265c4:
    if (ctx->pc == 0x1265C4u) {
        ctx->pc = 0x1265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C0u;
        // 0x1265c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1265C8u;
        goto label_fallthrough_0x1265c0;
    }
    ctx->pc = 0x1265C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C0u;
        // 0x1265c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1265c0:
    ctx->pc = 0x1265C8u;
}
