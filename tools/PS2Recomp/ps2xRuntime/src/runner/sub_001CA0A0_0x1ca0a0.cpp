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

// Function: sub_001CA0A0
// Address: 0x1ca0a0 - 0x1ca198
void sub_001CA0A0_0x1ca0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA0A0_0x1ca0a0");
#endif

    switch (ctx->pc) {
        case 0x1ca0a0u: goto label_1ca0a0;
        case 0x1ca0a4u: goto label_1ca0a4;
        case 0x1ca0a8u: goto label_1ca0a8;
        case 0x1ca0acu: goto label_1ca0ac;
        case 0x1ca0b0u: goto label_1ca0b0;
        case 0x1ca0b4u: goto label_1ca0b4;
        case 0x1ca0b8u: goto label_1ca0b8;
        case 0x1ca0bcu: goto label_1ca0bc;
        case 0x1ca0c0u: goto label_1ca0c0;
        case 0x1ca0c4u: goto label_1ca0c4;
        case 0x1ca0c8u: goto label_1ca0c8;
        case 0x1ca0ccu: goto label_1ca0cc;
        case 0x1ca0d0u: goto label_1ca0d0;
        case 0x1ca0d4u: goto label_1ca0d4;
        case 0x1ca0d8u: goto label_1ca0d8;
        case 0x1ca0dcu: goto label_1ca0dc;
        case 0x1ca0e0u: goto label_1ca0e0;
        case 0x1ca0e4u: goto label_1ca0e4;
        case 0x1ca0e8u: goto label_1ca0e8;
        case 0x1ca0ecu: goto label_1ca0ec;
        case 0x1ca0f0u: goto label_1ca0f0;
        case 0x1ca0f4u: goto label_1ca0f4;
        case 0x1ca0f8u: goto label_1ca0f8;
        case 0x1ca0fcu: goto label_1ca0fc;
        case 0x1ca100u: goto label_1ca100;
        case 0x1ca104u: goto label_1ca104;
        case 0x1ca108u: goto label_1ca108;
        case 0x1ca10cu: goto label_1ca10c;
        case 0x1ca110u: goto label_1ca110;
        case 0x1ca114u: goto label_1ca114;
        case 0x1ca118u: goto label_1ca118;
        case 0x1ca11cu: goto label_1ca11c;
        case 0x1ca120u: goto label_1ca120;
        case 0x1ca124u: goto label_1ca124;
        case 0x1ca128u: goto label_1ca128;
        case 0x1ca12cu: goto label_1ca12c;
        case 0x1ca130u: goto label_1ca130;
        case 0x1ca134u: goto label_1ca134;
        case 0x1ca138u: goto label_1ca138;
        case 0x1ca13cu: goto label_1ca13c;
        case 0x1ca140u: goto label_1ca140;
        case 0x1ca144u: goto label_1ca144;
        case 0x1ca148u: goto label_1ca148;
        case 0x1ca14cu: goto label_1ca14c;
        case 0x1ca150u: goto label_1ca150;
        case 0x1ca154u: goto label_1ca154;
        case 0x1ca158u: goto label_1ca158;
        case 0x1ca15cu: goto label_1ca15c;
        case 0x1ca160u: goto label_1ca160;
        case 0x1ca164u: goto label_1ca164;
        case 0x1ca168u: goto label_1ca168;
        case 0x1ca16cu: goto label_1ca16c;
        case 0x1ca170u: goto label_1ca170;
        case 0x1ca174u: goto label_1ca174;
        case 0x1ca178u: goto label_1ca178;
        case 0x1ca17cu: goto label_1ca17c;
        case 0x1ca180u: goto label_1ca180;
        case 0x1ca184u: goto label_1ca184;
        case 0x1ca188u: goto label_1ca188;
        case 0x1ca18cu: goto label_1ca18c;
        case 0x1ca190u: goto label_1ca190;
        case 0x1ca194u: goto label_1ca194;
        default: break;
    }

    ctx->pc = 0x1ca0a0u;

label_1ca0a0:
    // 0x1ca0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ca0a4:
    // 0x1ca0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ca0a8:
    // 0x1ca0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca0ac:
    // 0x1ca0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca0b0:
    // 0x1ca0b0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1ca0b4:
    if (ctx->pc == 0x1CA0B4u) {
        ctx->pc = 0x1CA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0B0u;
        // 0x1ca0b4: 0xae0503c4  sw          $a1, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0B8u;
        goto label_1ca0b8;
    }
    ctx->pc = 0x1CA0B0u;
    {
        const bool branch_taken_0x1ca0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0B0u;
        // 0x1ca0b4: 0xae0503c4  sw          $a1, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0b0) {
            ctx->pc = 0x1CA0CCu;
            goto label_1ca0cc;
        }
    }
    ctx->pc = 0x1CA0B8u;
label_1ca0b8:
    // 0x1ca0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca0bc:
    // 0x1ca0bc: 0x50a20013  beql        $a1, $v0, . + 4 + (0x13 << 2)
label_1ca0c0:
    if (ctx->pc == 0x1CA0C0u) {
        ctx->pc = 0x1CA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0BCu;
        // 0x1ca0c0: 0x8e060290  lw          $a2, 0x290($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0C4u;
        goto label_1ca0c4;
    }
    ctx->pc = 0x1CA0BCu;
    {
        const bool branch_taken_0x1ca0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca0bc) {
            ctx->pc = 0x1CA0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0BCu;
            // 0x1ca0c0: 0x8e060290  lw          $a2, 0x290($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA10Cu;
            goto label_1ca10c;
        }
    }
    ctx->pc = 0x1CA0C4u;
label_1ca0c4:
    // 0x1ca0c4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1ca0c8:
    if (ctx->pc == 0x1CA0C8u) {
        ctx->pc = 0x1CA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0C4u;
        // 0x1ca0c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0CCu;
        goto label_1ca0cc;
    }
    ctx->pc = 0x1CA0C4u;
    {
        const bool branch_taken_0x1ca0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0C4u;
        // 0x1ca0c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0c4) {
            ctx->pc = 0x1CA188u;
            goto label_1ca188;
        }
    }
    ctx->pc = 0x1CA0CCu;
label_1ca0cc:
    // 0x1ca0cc: 0x8e060290  lw          $a2, 0x290($s0)
    ctx->pc = 0x1ca0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1ca0d0:
    // 0x1ca0d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca0d4:
    // 0x1ca0d4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ca0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ca0d8:
    // 0x1ca0d8: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ca0d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ca0dc:
    // 0x1ca0dc: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ca0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ca0e0:
    // 0x1ca0e0: 0x60f809  jalr        $v1
label_1ca0e4:
    if (ctx->pc == 0x1CA0E4u) {
        ctx->pc = 0x1CA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0E0u;
        // 0x1ca0e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0E8u;
        goto label_1ca0e8;
    }
    ctx->pc = 0x1CA0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA0E8u);
        ctx->pc = 0x1CA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0E0u;
        // 0x1ca0e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA0E0u, 0x1CA0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA0E8u;
label_1ca0e8:
    // 0x1ca0e8: 0x8e060294  lw          $a2, 0x294($s0)
    ctx->pc = 0x1ca0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1ca0ec:
    // 0x1ca0ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca0f0:
    // 0x1ca0f0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ca0f4:
    // 0x1ca0f4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ca0f8:
    // 0x1ca0f8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ca0fc:
    // 0x1ca0fc: 0x60f809  jalr        $v1
label_1ca100:
    if (ctx->pc == 0x1CA100u) {
        ctx->pc = 0x1CA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0FCu;
        // 0x1ca100: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA104u;
        goto label_1ca104;
    }
    ctx->pc = 0x1CA0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA104u);
        ctx->pc = 0x1CA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0FCu;
        // 0x1ca100: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA0FCu, 0x1CA104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA104u;
label_1ca104:
    // 0x1ca104: 0x10000020  b           . + 4 + (0x20 << 2)
label_1ca108:
    if (ctx->pc == 0x1CA108u) {
        ctx->pc = 0x1CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA104u;
        // 0x1ca108: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA10Cu;
        goto label_1ca10c;
    }
    ctx->pc = 0x1CA104u;
    {
        const bool branch_taken_0x1ca104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA104u;
        // 0x1ca108: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca104) {
            ctx->pc = 0x1CA188u;
            goto label_1ca188;
        }
    }
    ctx->pc = 0x1CA10Cu;
label_1ca10c:
    // 0x1ca10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca110:
    // 0x1ca110: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ca110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ca114:
    // 0x1ca114: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ca114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ca118:
    // 0x1ca118: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ca11c:
    // 0x1ca11c: 0x60f809  jalr        $v1
label_1ca120:
    if (ctx->pc == 0x1CA120u) {
        ctx->pc = 0x1CA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA11Cu;
        // 0x1ca120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA124u;
        goto label_1ca124;
    }
    ctx->pc = 0x1CA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA124u);
        ctx->pc = 0x1CA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA11Cu;
        // 0x1ca120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA11Cu, 0x1CA124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA124u;
label_1ca124:
    // 0x1ca124: 0x8e060294  lw          $a2, 0x294($s0)
    ctx->pc = 0x1ca124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1ca128:
    // 0x1ca128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca12c:
    // 0x1ca12c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ca130:
    // 0x1ca130: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ca130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ca134:
    // 0x1ca134: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ca134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ca138:
    // 0x1ca138: 0x60f809  jalr        $v1
label_1ca13c:
    if (ctx->pc == 0x1CA13Cu) {
        ctx->pc = 0x1CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA138u;
        // 0x1ca13c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA140u;
        goto label_1ca140;
    }
    ctx->pc = 0x1CA138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA140u);
        ctx->pc = 0x1CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA138u;
        // 0x1ca13c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA138u, 0x1CA140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA140u;
label_1ca140:
    // 0x1ca140: 0x8e060298  lw          $a2, 0x298($s0)
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1ca144:
    // 0x1ca144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca148:
    // 0x1ca148: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ca148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ca14c:
    // 0x1ca14c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ca14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ca150:
    // 0x1ca150: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ca154:
    // 0x1ca154: 0x60f809  jalr        $v1
label_1ca158:
    if (ctx->pc == 0x1CA158u) {
        ctx->pc = 0x1CA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA154u;
        // 0x1ca158: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA15Cu;
        goto label_1ca15c;
    }
    ctx->pc = 0x1CA154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA15Cu);
        ctx->pc = 0x1CA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA154u;
        // 0x1ca158: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA154u, 0x1CA15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA15Cu;
label_1ca15c:
    // 0x1ca15c: 0x8e06029c  lw          $a2, 0x29C($s0)
    ctx->pc = 0x1ca15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1ca160:
    // 0x1ca160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca164:
    // 0x1ca164: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ca164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ca168:
    // 0x1ca168: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1ca16c:
    // 0x1ca16c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1ca16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1ca170:
    // 0x1ca170: 0x60f809  jalr        $v1
label_1ca174:
    if (ctx->pc == 0x1CA174u) {
        ctx->pc = 0x1CA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA170u;
        // 0x1ca174: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA178u;
        goto label_1ca178;
    }
    ctx->pc = 0x1CA170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA178u);
        ctx->pc = 0x1CA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA170u;
        // 0x1ca174: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA170u, 0x1CA178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA178u;
label_1ca178:
    // 0x1ca178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca17c:
    // 0x1ca17c: 0xc072ab0  jal         func_1CAAC0
label_1ca180:
    if (ctx->pc == 0x1CA180u) {
        ctx->pc = 0x1CA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA17Cu;
        // 0x1ca180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA184u;
        goto label_1ca184;
    }
    ctx->pc = 0x1CA17Cu;
    SET_GPR_U32(ctx, 31, 0x1CA184u);
    ctx->pc = 0x1CA180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA17Cu;
    // 0x1ca180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CAAC0u, 0x1CA17Cu, 0x1CA184u)) {
        return;
    }
    ctx->pc = 0x1CA184u;
label_1ca184:
    // 0x1ca184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca188:
    // 0x1ca188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca18c:
    // 0x1ca18c: 0x3e00008  jr          $ra
label_1ca190:
    if (ctx->pc == 0x1CA190u) {
        ctx->pc = 0x1CA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA18Cu;
        // 0x1ca190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA194u;
        goto label_1ca194;
    }
    ctx->pc = 0x1CA18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA18Cu;
        // 0x1ca190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA194u;
label_1ca194:
    // 0x1ca194: 0x0  nop
    ctx->pc = 0x1ca194u;
    // NOP
    ctx->pc = 0x1ca198u;
}
