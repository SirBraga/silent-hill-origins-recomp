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

// Function: sub_00111670
// Address: 0x111670 - 0x111800
void sub_00111670_0x111670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111670_0x111670");
#endif

    switch (ctx->pc) {
        case 0x11168cu: goto label_11168c;
        case 0x1116a0u: goto label_1116a0;
        case 0x1116b8u: goto label_1116b8;
        case 0x111714u: goto label_111714;
        case 0x11172cu: goto label_11172c;
        case 0x1117dcu: goto label_1117dc;
        default: break;
    }

    ctx->pc = 0x111670u;

    // 0x111670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111674: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x111674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x111678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x111678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11167c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11167cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111684: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x111684u;
    SET_GPR_U32(ctx, 31, 0x11168Cu);
    ctx->pc = 0x111688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111684u;
    // 0x111688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x111684u, 0x11168Cu)) {
        return;
    }
    ctx->pc = 0x11168Cu;
label_11168c:
    // 0x11168c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x111690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111694: 0x8c4644a8  lw          $a2, 0x44A8($v0)
    ctx->pc = 0x111694u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B44A8u));
    // 0x111698: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x111698u;
    SET_GPR_U32(ctx, 31, 0x1116A0u);
    ctx->pc = 0x11169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111698u;
    // 0x11169c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x111698u, 0x1116A0u)) {
        return;
    }
    ctx->pc = 0x1116A0u;
label_1116a0:
    // 0x1116a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1116a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1116a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1116a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1116a8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1116A8u;
    {
        const bool branch_taken_0x1116a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116A8u;
        // 0x1116ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116a8) {
            ctx->pc = 0x1117F0u;
            goto label_1117f0;
        }
    }
    ctx->pc = 0x1116B0u;
    // 0x1116b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1116b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1116b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1116b8:
    // 0x1116b8: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1116b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1116bc: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1116BCu;
    {
        const bool branch_taken_0x1116bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116BCu;
        // 0x1116c0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116bc) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x1116C4u;
    // 0x1116c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1116c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1116c8: 0x2442a7d0  addiu       $v0, $v0, -0x5830
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944720));
    // 0x1116cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1116ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1116d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1116d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1116d4: 0x800008  jr          $a0
    ctx->pc = 0x1116D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1116DCu: goto label_1116dc;
            case 0x1116ECu: goto label_1116ec;
            case 0x1116FCu: goto label_1116fc;
            case 0x11171Cu: goto label_11171c;
            case 0x111734u: goto label_111734;
            case 0x111744u: goto label_111744;
            case 0x111764u: goto label_111764;
            case 0x111774u: goto label_111774;
            case 0x111784u: goto label_111784;
            case 0x1117A4u: goto label_1117a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1116D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1116DCu;
label_1116dc:
    // 0x1116dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1116dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1116e0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1116e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1116e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1116E4u;
    {
        const bool branch_taken_0x1116e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116E4u;
        // 0x1116e8: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116e4) {
            ctx->pc = 0x111708u;
            goto label_111708;
        }
    }
    ctx->pc = 0x1116ECu;
label_1116ec:
    // 0x1116ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1116ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1116f0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1116f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1116f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1116F4u;
    {
        const bool branch_taken_0x1116f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116F4u;
        // 0x1116f8: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116f4) {
            ctx->pc = 0x111708u;
            goto label_111708;
        }
    }
    ctx->pc = 0x1116FCu;
label_1116fc:
    // 0x1116fc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1116fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111700: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x111704: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x111704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_111708:
    // 0x111708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11170c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x11170Cu;
    SET_GPR_U32(ctx, 31, 0x111714u);
    ctx->pc = 0x111710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11170Cu;
    // 0x111710: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x11170Cu, 0x111714u)) {
        return;
    }
    ctx->pc = 0x111714u;
label_111714:
    // 0x111714: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x111714u;
    {
        const bool branch_taken_0x111714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111714u;
        // 0x111718: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111714) {
            ctx->pc = 0x1117C4u;
            goto label_1117c4;
        }
    }
    ctx->pc = 0x11171Cu;
label_11171c:
    // 0x11171c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111724: 0xc0446c6  jal         func_111B18
    ctx->pc = 0x111724u;
    SET_GPR_U32(ctx, 31, 0x11172Cu);
    ctx->pc = 0x111728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111724u;
    // 0x111728: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B18u, 0x111724u, 0x11172Cu)) {
        return;
    }
    ctx->pc = 0x11172Cu;
label_11172c:
    // 0x11172c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11172Cu;
    {
        const bool branch_taken_0x11172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11172Cu;
        // 0x111730: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11172c) {
            ctx->pc = 0x1117C4u;
            goto label_1117c4;
        }
    }
    ctx->pc = 0x111734u;
label_111734:
    // 0x111734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111738: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x111738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11173c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11173Cu;
    {
        const bool branch_taken_0x11173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11173Cu;
        // 0x111740: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11173c) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x111744u;
label_111744:
    // 0x111744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111748: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11174c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11174Cu;
    {
        const bool branch_taken_0x11174c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11174Cu;
        // 0x111750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11174c) {
            ctx->pc = 0x11175Cu;
            goto label_11175c;
        }
    }
    ctx->pc = 0x111754u;
    // 0x111754: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x111754u;
    {
        const bool branch_taken_0x111754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111754u;
        // 0x111758: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111754) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x11175Cu;
label_11175c:
    // 0x11175c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11175Cu;
    {
        const bool branch_taken_0x11175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11175Cu;
        // 0x111760: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11175c) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x111764u;
label_111764:
    // 0x111764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111768: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x111768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11176c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11176Cu;
    {
        const bool branch_taken_0x11176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11176Cu;
        // 0x111770: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11176c) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x111774u;
label_111774:
    // 0x111774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111778: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x111778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11177c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11177Cu;
    {
        const bool branch_taken_0x11177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11177Cu;
        // 0x111780: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11177c) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x111784u;
label_111784:
    // 0x111784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111788: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x111788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11178c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11178Cu;
    {
        const bool branch_taken_0x11178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11178Cu;
        // 0x111790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11178c) {
            ctx->pc = 0x11179Cu;
            goto label_11179c;
        }
    }
    ctx->pc = 0x111794u;
    // 0x111794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111794u;
    {
        const bool branch_taken_0x111794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111794u;
        // 0x111798: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111794) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x11179Cu;
label_11179c:
    // 0x11179c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11179Cu;
    {
        const bool branch_taken_0x11179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11179Cu;
        // 0x1117a0: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11179c) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x1117A4u;
label_1117a4:
    // 0x1117a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1117a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1117a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1117ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1117ACu;
    {
        const bool branch_taken_0x1117ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117ACu;
        // 0x1117b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117ac) {
            ctx->pc = 0x1117BCu;
            goto label_1117bc;
        }
    }
    ctx->pc = 0x1117B4u;
    // 0x1117b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1117B4u;
    {
        const bool branch_taken_0x1117b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117B4u;
        // 0x1117b8: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117b4) {
            ctx->pc = 0x1117C0u;
            goto label_1117c0;
        }
    }
    ctx->pc = 0x1117BCu;
label_1117bc:
    // 0x1117bc: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x1117bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_1117c0:
    // 0x1117c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1117c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1117c4:
    // 0x1117c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1117c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1117c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1117cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1117ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1117d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1117d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1117d4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1117D4u;
    SET_GPR_U32(ctx, 31, 0x1117DCu);
    ctx->pc = 0x1117D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117D4u;
    // 0x1117d8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1117D4u, 0x1117DCu)) {
        return;
    }
    ctx->pc = 0x1117DCu;
label_1117dc:
    // 0x1117dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1117dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1117e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1117e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117e4: 0x5460ffb4  bnel        $v1, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1117E4u;
    {
        const bool branch_taken_0x1117e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1117e4) {
            ctx->pc = 0x1117E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117E4u;
            // 0x1117e8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1116B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1116b8;
        }
    }
    ctx->pc = 0x1117ECu;
    // 0x1117ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1117ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1117f0:
    // 0x1117f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1117f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1117f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1117f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1117f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1117F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1117FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117F8u;
        // 0x1117fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1117F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111800u;
}
