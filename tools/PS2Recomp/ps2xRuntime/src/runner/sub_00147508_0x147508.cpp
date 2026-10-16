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

// Function: sub_00147508
// Address: 0x147508 - 0x147648
void sub_00147508_0x147508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147508_0x147508");
#endif

    switch (ctx->pc) {
        case 0x147524u: goto label_147524;
        case 0x147538u: goto label_147538;
        case 0x147550u: goto label_147550;
        case 0x147590u: goto label_147590;
        case 0x1475a0u: goto label_1475a0;
        case 0x1475b0u: goto label_1475b0;
        case 0x1475c0u: goto label_1475c0;
        case 0x1475d0u: goto label_1475d0;
        case 0x147620u: goto label_147620;
        default: break;
    }

    ctx->pc = 0x147508u;

    // 0x147508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14750c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147510: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x147514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x147514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14751c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x14751Cu;
    SET_GPR_U32(ctx, 31, 0x147524u);
    ctx->pc = 0x147520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14751Cu;
    // 0x147520: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x14751Cu, 0x147524u)) {
        return;
    }
    ctx->pc = 0x147524u;
label_147524:
    // 0x147524: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x147524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x147528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14752c: 0x8c46ee50  lw          $a2, -0x11B0($v0)
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE50u));
    // 0x147530: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x147530u;
    SET_GPR_U32(ctx, 31, 0x147538u);
    ctx->pc = 0x147534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147530u;
    // 0x147534: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x147530u, 0x147538u)) {
        return;
    }
    ctx->pc = 0x147538u;
label_147538:
    // 0x147538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14753c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147540: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x147540u;
    {
        const bool branch_taken_0x147540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147540u;
        // 0x147544: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147540) {
            ctx->pc = 0x147634u;
            goto label_147634;
        }
    }
    ctx->pc = 0x147548u;
    // 0x147548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14754c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_147550:
    // 0x147550: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x147550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x147554: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x147554u;
    {
        const bool branch_taken_0x147554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147554u;
        // 0x147558: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147554) {
            ctx->pc = 0x147604u;
            goto label_147604;
        }
    }
    ctx->pc = 0x14755Cu;
    // 0x14755c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14755cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147560: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x147560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x147564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14756c: 0x800008  jr          $a0
    ctx->pc = 0x14756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147574u: goto label_147574;
            case 0x147598u: goto label_147598;
            case 0x1475B8u: goto label_1475b8;
            case 0x1475D8u: goto label_1475d8;
            case 0x1475E8u: goto label_1475e8;
            case 0x1475F8u: goto label_1475f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14756Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147574u;
label_147574:
    // 0x147574: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147578: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x14757c: 0x24e710a0  addiu       $a3, $a3, 0x10A0
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4256));
    // 0x147580: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x147584: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x147588: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x147588u;
    SET_GPR_U32(ctx, 31, 0x147590u);
    ctx->pc = 0x14758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147588u;
    // 0x14758c: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x147588u, 0x147590u)) {
        return;
    }
    ctx->pc = 0x147590u;
label_147590:
    // 0x147590: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x147590u;
    {
        const bool branch_taken_0x147590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147590u;
        // 0x147594: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147590) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x147598u;
label_147598:
    // 0x147598: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x147598u;
    SET_GPR_U32(ctx, 31, 0x1475A0u);
    ctx->pc = 0x14759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147598u;
    // 0x14759c: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x147598u, 0x1475A0u)) {
        return;
    }
    ctx->pc = 0x1475A0u;
label_1475a0:
    // 0x1475a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1475a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1475a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1475a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475a8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1475A8u;
    SET_GPR_U32(ctx, 31, 0x1475B0u);
    ctx->pc = 0x1475ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475A8u;
    // 0x1475ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1475A8u, 0x1475B0u)) {
        return;
    }
    ctx->pc = 0x1475B0u;
label_1475b0:
    // 0x1475b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1475B0u;
    {
        const bool branch_taken_0x1475b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475B0u;
        // 0x1475b4: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475b0) {
            ctx->pc = 0x147604u;
            goto label_147604;
        }
    }
    ctx->pc = 0x1475B8u;
label_1475b8:
    // 0x1475b8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1475B8u;
    SET_GPR_U32(ctx, 31, 0x1475C0u);
    ctx->pc = 0x1475BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475B8u;
    // 0x1475bc: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1475B8u, 0x1475C0u)) {
        return;
    }
    ctx->pc = 0x1475C0u;
label_1475c0:
    // 0x1475c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1475c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1475c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1475c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475c8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1475C8u;
    SET_GPR_U32(ctx, 31, 0x1475D0u);
    ctx->pc = 0x1475CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475C8u;
    // 0x1475cc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1475C8u, 0x1475D0u)) {
        return;
    }
    ctx->pc = 0x1475D0u;
label_1475d0:
    // 0x1475d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1475D0u;
    {
        const bool branch_taken_0x1475d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475D0u;
        // 0x1475d4: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475d0) {
            ctx->pc = 0x147604u;
            goto label_147604;
        }
    }
    ctx->pc = 0x1475D8u;
label_1475d8:
    // 0x1475d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1475dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1475dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1475e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1475E0u;
    {
        const bool branch_taken_0x1475e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475E0u;
        // 0x1475e4: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475e0) {
            ctx->pc = 0x147604u;
            goto label_147604;
        }
    }
    ctx->pc = 0x1475E8u;
label_1475e8:
    // 0x1475e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1475e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1475ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1475ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1475f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1475F0u;
    {
        const bool branch_taken_0x1475f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475F0u;
        // 0x1475f4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475f0) {
            ctx->pc = 0x147604u;
            goto label_147604;
        }
    }
    ctx->pc = 0x1475F8u;
label_1475f8:
    // 0x1475f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1475fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1475fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147600: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x147600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_147604:
    // 0x147604: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x147604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_147608:
    // 0x147608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x147608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14760c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147618: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x147618u;
    SET_GPR_U32(ctx, 31, 0x147620u);
    ctx->pc = 0x14761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147618u;
    // 0x14761c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x147618u, 0x147620u)) {
        return;
    }
    ctx->pc = 0x147620u;
label_147620:
    // 0x147620: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147628: 0x5460ffc9  bnel        $v1, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x147628u;
    {
        const bool branch_taken_0x147628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147628) {
            ctx->pc = 0x14762Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147628u;
            // 0x14762c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147550;
        }
    }
    ctx->pc = 0x147630u;
    // 0x147630: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x147630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_147634:
    // 0x147634: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14763c: 0x3e00008  jr          $ra
    ctx->pc = 0x14763Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14763Cu;
        // 0x147640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14763Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147644u;
    // 0x147644: 0x0  nop
    ctx->pc = 0x147644u;
    // NOP
    ctx->pc = 0x147648u;
}
