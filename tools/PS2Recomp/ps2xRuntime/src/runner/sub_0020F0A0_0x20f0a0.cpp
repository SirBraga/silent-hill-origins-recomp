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

// Function: sub_0020F0A0
// Address: 0x20f0a0 - 0x20f1e0
void sub_0020F0A0_0x20f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F0A0_0x20f0a0");
#endif

    switch (ctx->pc) {
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        case 0x20f148u: goto label_20f148;
        case 0x20f14cu: goto label_20f14c;
        case 0x20f150u: goto label_20f150;
        case 0x20f154u: goto label_20f154;
        case 0x20f158u: goto label_20f158;
        case 0x20f15cu: goto label_20f15c;
        case 0x20f160u: goto label_20f160;
        case 0x20f164u: goto label_20f164;
        case 0x20f168u: goto label_20f168;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f170u: goto label_20f170;
        case 0x20f174u: goto label_20f174;
        case 0x20f178u: goto label_20f178;
        case 0x20f17cu: goto label_20f17c;
        case 0x20f180u: goto label_20f180;
        case 0x20f184u: goto label_20f184;
        case 0x20f188u: goto label_20f188;
        case 0x20f18cu: goto label_20f18c;
        case 0x20f190u: goto label_20f190;
        case 0x20f194u: goto label_20f194;
        case 0x20f198u: goto label_20f198;
        case 0x20f19cu: goto label_20f19c;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1a4u: goto label_20f1a4;
        case 0x20f1a8u: goto label_20f1a8;
        case 0x20f1acu: goto label_20f1ac;
        case 0x20f1b0u: goto label_20f1b0;
        case 0x20f1b4u: goto label_20f1b4;
        case 0x20f1b8u: goto label_20f1b8;
        case 0x20f1bcu: goto label_20f1bc;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        default: break;
    }

    ctx->pc = 0x20f0a0u;

label_20f0a0:
    // 0x20f0a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20f0a4:
    // 0x20f0a4: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
label_20f0a8:
    // 0x20f0a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_20f0ac:
    // 0x20f0ac: 0x3442c9f0  ori         $v0, $v0, 0xC9F0
    ctx->pc = 0x20f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51696);
label_20f0b0:
    // 0x20f0b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20f0b4:
    // 0x20f0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f0b8:
    // 0x20f0b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_20f0bc:
    // 0x20f0bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20f0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f0c0:
    // 0x20f0c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20f0c4:
    // 0x20f0c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20f0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f0c8:
    // 0x20f0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20f0cc:
    // 0x20f0cc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x20f0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_20f0d0:
    // 0x20f0d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x20f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_20f0d4:
    // 0x20f0d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20f0d8:
    if (ctx->pc == 0x20F0D8u) {
        ctx->pc = 0x20F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0D4u;
        // 0x20f0d8: 0x8e140004  lw          $s4, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0DCu;
        goto label_20f0dc;
    }
    ctx->pc = 0x20F0D4u;
    {
        const bool branch_taken_0x20f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0D4u;
        // 0x20f0d8: 0x8e140004  lw          $s4, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0d4) {
            ctx->pc = 0x20F104u;
            goto label_20f104;
        }
    }
    ctx->pc = 0x20F0DCu;
label_20f0dc:
    // 0x20f0dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f0e0:
    // 0x20f0e0: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x20f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20f0e4:
    // 0x20f0e4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20f0e8:
    // 0x20f0e8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20f0ec:
    // 0x20f0ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f0f0:
    // 0x20f0f0: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_20f0f4:
    // 0x20f0f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f0f8:
    // 0x20f0f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f0fc:
    // 0x20f0fc: 0x40f809  jalr        $v0
label_20f100:
    if (ctx->pc == 0x20F100u) {
        ctx->pc = 0x20F104u;
        goto label_20f104;
    }
    ctx->pc = 0x20F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F0FCu, 0x20F104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F104u;
label_20f104:
    // 0x20f104: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x20f104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_20f108:
    // 0x20f108: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20f10c:
    if (ctx->pc == 0x20F10Cu) {
        ctx->pc = 0x20F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F108u;
        // 0x20f10c: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F110u;
        goto label_20f110;
    }
    ctx->pc = 0x20F108u;
    {
        const bool branch_taken_0x20f108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F108u;
        // 0x20f10c: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f108) {
            ctx->pc = 0x20F114u;
            goto label_20f114;
        }
    }
    ctx->pc = 0x20F110u;
label_20f110:
    // 0x20f110: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x20f110u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20f114:
    // 0x20f114: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x20f114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20f118:
    // 0x20f118: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_20f11c:
    if (ctx->pc == 0x20F11Cu) {
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F118u;
        // 0x20f11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F120u;
        goto label_20f120;
    }
    ctx->pc = 0x20F118u;
    {
        const bool branch_taken_0x20f118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F118u;
        // 0x20f11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f118) {
            ctx->pc = 0x20F148u;
            goto label_20f148;
        }
    }
    ctx->pc = 0x20F120u;
label_20f120:
    // 0x20f120: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20f120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f124:
    // 0x20f124: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20f128:
    // 0x20f128: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20f128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20f12c:
    // 0x20f12c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f130:
    // 0x20f130: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x20f130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
label_20f134:
    // 0x20f134: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f138:
    // 0x20f138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f13c:
    // 0x20f13c: 0x40f809  jalr        $v0
label_20f140:
    if (ctx->pc == 0x20F140u) {
        ctx->pc = 0x20F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F13Cu;
        // 0x20f140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F144u;
        goto label_20f144;
    }
    ctx->pc = 0x20F13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F144u);
        ctx->pc = 0x20F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F13Cu;
        // 0x20f140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F13Cu, 0x20F144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F144u;
label_20f144:
    // 0x20f144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f148:
    // 0x20f148: 0xc083d0a  jal         func_20F428
label_20f14c:
    if (ctx->pc == 0x20F14Cu) {
        ctx->pc = 0x20F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F148u;
        // 0x20f14c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F150u;
        goto label_20f150;
    }
    ctx->pc = 0x20F148u;
    SET_GPR_U32(ctx, 31, 0x20F150u);
    ctx->pc = 0x20F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F148u;
    // 0x20f14c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F428u, 0x20F148u, 0x20F150u)) {
        return;
    }
    ctx->pc = 0x20F150u;
label_20f150:
    // 0x20f150: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20f150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f154:
    // 0x20f154: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
label_20f158:
    if (ctx->pc == 0x20F158u) {
        ctx->pc = 0x20F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F154u;
        // 0x20f158: 0xde830058  ld          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F15Cu;
        goto label_20f15c;
    }
    ctx->pc = 0x20F154u;
    {
        const bool branch_taken_0x20f154 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f154) {
            ctx->pc = 0x20F158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F154u;
            // 0x20f158: 0xde830058  ld          $v1, 0x58($s4) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F188u;
            goto label_20f188;
        }
    }
    ctx->pc = 0x20F15Cu;
label_20f15c:
    // 0x20f15c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f160:
    // 0x20f160: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20f164:
    // 0x20f164: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20f164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f168:
    // 0x20f168: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20f168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20f16c:
    // 0x20f16c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f170:
    // 0x20f170: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20f170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_20f174:
    // 0x20f174: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f178:
    // 0x20f178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f17c:
    // 0x20f17c: 0x40f809  jalr        $v0
label_20f180:
    if (ctx->pc == 0x20F180u) {
        ctx->pc = 0x20F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F17Cu;
        // 0x20f180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F184u;
        goto label_20f184;
    }
    ctx->pc = 0x20F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F184u);
        ctx->pc = 0x20F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F17Cu;
        // 0x20f180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F17Cu, 0x20F184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F184u;
label_20f184:
    // 0x20f184: 0xde830058  ld          $v1, 0x58($s4)
    ctx->pc = 0x20f184u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 88)));
label_20f188:
    // 0x20f188: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20f18c:
    // 0x20f18c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20f190:
    // 0x20f190: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20f194:
    // 0x20f194: 0x64630010  daddiu      $v1, $v1, 0x10
    ctx->pc = 0x20f194u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)16);
label_20f198:
    // 0x20f198: 0x26840048  addiu       $a0, $s4, 0x48
    ctx->pc = 0x20f198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
label_20f19c:
    // 0x20f19c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x20f19cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_20f1a0:
    // 0x20f1a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20f1a4:
    // 0x20f1a4: 0xfe830058  sd          $v1, 0x58($s4)
    ctx->pc = 0x20f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 3));
label_20f1a8:
    // 0x20f1a8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_20f1ac:
    // 0x20f1ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20f1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20f1b0:
    // 0x20f1b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20f1b4:
    // 0x20f1b4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x20f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_20f1b8:
    // 0x20f1b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_20f1bc:
    // 0x20f1bc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20f1c0:
    // 0x20f1c0: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x20f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_20f1c4:
    // 0x20f1c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20f1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20f1c8:
    // 0x20f1c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20f1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f1cc:
    // 0x20f1cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20f1ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f1d0:
    // 0x20f1d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x20f1d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f1d4:
    // 0x20f1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f1d8:
    // 0x20f1d8: 0x3e00008  jr          $ra
label_20f1dc:
    if (ctx->pc == 0x20F1DCu) {
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1E0u;
        goto label_fallthrough_0x20f1d8;
    }
    ctx->pc = 0x20F1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20f1d8:
    ctx->pc = 0x20F1E0u;
}
