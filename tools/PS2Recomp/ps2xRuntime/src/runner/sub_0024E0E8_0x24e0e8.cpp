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

// Function: sub_0024E0E8
// Address: 0x24e0e8 - 0x24e228
void sub_0024E0E8_0x24e0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E0E8_0x24e0e8");
#endif

    switch (ctx->pc) {
        case 0x24e0e8u: goto label_24e0e8;
        case 0x24e0ecu: goto label_24e0ec;
        case 0x24e0f0u: goto label_24e0f0;
        case 0x24e0f4u: goto label_24e0f4;
        case 0x24e0f8u: goto label_24e0f8;
        case 0x24e0fcu: goto label_24e0fc;
        case 0x24e100u: goto label_24e100;
        case 0x24e104u: goto label_24e104;
        case 0x24e108u: goto label_24e108;
        case 0x24e10cu: goto label_24e10c;
        case 0x24e110u: goto label_24e110;
        case 0x24e114u: goto label_24e114;
        case 0x24e118u: goto label_24e118;
        case 0x24e11cu: goto label_24e11c;
        case 0x24e120u: goto label_24e120;
        case 0x24e124u: goto label_24e124;
        case 0x24e128u: goto label_24e128;
        case 0x24e12cu: goto label_24e12c;
        case 0x24e130u: goto label_24e130;
        case 0x24e134u: goto label_24e134;
        case 0x24e138u: goto label_24e138;
        case 0x24e13cu: goto label_24e13c;
        case 0x24e140u: goto label_24e140;
        case 0x24e144u: goto label_24e144;
        case 0x24e148u: goto label_24e148;
        case 0x24e14cu: goto label_24e14c;
        case 0x24e150u: goto label_24e150;
        case 0x24e154u: goto label_24e154;
        case 0x24e158u: goto label_24e158;
        case 0x24e15cu: goto label_24e15c;
        case 0x24e160u: goto label_24e160;
        case 0x24e164u: goto label_24e164;
        case 0x24e168u: goto label_24e168;
        case 0x24e16cu: goto label_24e16c;
        case 0x24e170u: goto label_24e170;
        case 0x24e174u: goto label_24e174;
        case 0x24e178u: goto label_24e178;
        case 0x24e17cu: goto label_24e17c;
        case 0x24e180u: goto label_24e180;
        case 0x24e184u: goto label_24e184;
        case 0x24e188u: goto label_24e188;
        case 0x24e18cu: goto label_24e18c;
        case 0x24e190u: goto label_24e190;
        case 0x24e194u: goto label_24e194;
        case 0x24e198u: goto label_24e198;
        case 0x24e19cu: goto label_24e19c;
        case 0x24e1a0u: goto label_24e1a0;
        case 0x24e1a4u: goto label_24e1a4;
        case 0x24e1a8u: goto label_24e1a8;
        case 0x24e1acu: goto label_24e1ac;
        case 0x24e1b0u: goto label_24e1b0;
        case 0x24e1b4u: goto label_24e1b4;
        case 0x24e1b8u: goto label_24e1b8;
        case 0x24e1bcu: goto label_24e1bc;
        case 0x24e1c0u: goto label_24e1c0;
        case 0x24e1c4u: goto label_24e1c4;
        case 0x24e1c8u: goto label_24e1c8;
        case 0x24e1ccu: goto label_24e1cc;
        case 0x24e1d0u: goto label_24e1d0;
        case 0x24e1d4u: goto label_24e1d4;
        case 0x24e1d8u: goto label_24e1d8;
        case 0x24e1dcu: goto label_24e1dc;
        case 0x24e1e0u: goto label_24e1e0;
        case 0x24e1e4u: goto label_24e1e4;
        case 0x24e1e8u: goto label_24e1e8;
        case 0x24e1ecu: goto label_24e1ec;
        case 0x24e1f0u: goto label_24e1f0;
        case 0x24e1f4u: goto label_24e1f4;
        case 0x24e1f8u: goto label_24e1f8;
        case 0x24e1fcu: goto label_24e1fc;
        case 0x24e200u: goto label_24e200;
        case 0x24e204u: goto label_24e204;
        case 0x24e208u: goto label_24e208;
        case 0x24e20cu: goto label_24e20c;
        case 0x24e210u: goto label_24e210;
        case 0x24e214u: goto label_24e214;
        case 0x24e218u: goto label_24e218;
        case 0x24e21cu: goto label_24e21c;
        case 0x24e220u: goto label_24e220;
        case 0x24e224u: goto label_24e224;
        default: break;
    }

    ctx->pc = 0x24e0e8u;

label_24e0e8:
    // 0x24e0e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24e0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24e0ec:
    // 0x24e0ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_24e0f0:
    // 0x24e0f0: 0x8c843f78  lw          $a0, 0x3F78($a0)
    ctx->pc = 0x24e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16248)));
label_24e0f4:
    // 0x24e0f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x24e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_24e0f8:
    // 0x24e0f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x24e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_24e0fc:
    // 0x24e0fc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x24e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_24e100:
    // 0x24e100: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24e104:
    // 0x24e104: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x24e104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_24e108:
    // 0x24e108: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x24e108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_24e10c:
    // 0x24e10c: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
label_24e110:
    if (ctx->pc == 0x24E110u) {
        ctx->pc = 0x24E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E10Cu;
        // 0x24e110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E114u;
        goto label_24e114;
    }
    ctx->pc = 0x24E10Cu;
    {
        const bool branch_taken_0x24e10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E10Cu;
        // 0x24e110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e10c) {
            ctx->pc = 0x24E1FCu;
            goto label_24e1fc;
        }
    }
    ctx->pc = 0x24E114u;
label_24e114:
    // 0x24e114: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24e114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_24e118:
    // 0x24e118: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24e118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e11c:
    // 0x24e11c: 0xc093210  jal         func_24C840
label_24e120:
    if (ctx->pc == 0x24E120u) {
        ctx->pc = 0x24E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E11Cu;
        // 0x24e120: 0x24a5e098  addiu       $a1, $a1, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E124u;
        goto label_24e124;
    }
    ctx->pc = 0x24E11Cu;
    SET_GPR_U32(ctx, 31, 0x24E124u);
    ctx->pc = 0x24E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E11Cu;
    // 0x24e120: 0x24a5e098  addiu       $a1, $a1, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C840u, 0x24E11Cu, 0x24E124u)) {
        return;
    }
    ctx->pc = 0x24E124u;
label_24e124:
    // 0x24e124: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24e124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24e128:
    // 0x24e128: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_24e12c:
    // 0x24e12c: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x24e12cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24e130:
    // 0x24e130: 0x2442c458  addiu       $v0, $v0, -0x3BA8
    ctx->pc = 0x24e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952024));
label_24e134:
    // 0x24e134: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_24e138:
    // 0x24e138: 0x8c640118  lw          $a0, 0x118($v1)
    ctx->pc = 0x24e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_24e13c:
    // 0x24e13c: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
label_24e140:
    if (ctx->pc == 0x24E140u) {
        ctx->pc = 0x24E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E13Cu;
        // 0x24e140: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E144u;
        goto label_24e144;
    }
    ctx->pc = 0x24E13Cu;
    {
        const bool branch_taken_0x24e13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E13Cu;
        // 0x24e140: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e13c) {
            ctx->pc = 0x24E1ECu;
            goto label_24e1ec;
        }
    }
    ctx->pc = 0x24E144u;
label_24e144:
    // 0x24e144: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_24e148:
    if (ctx->pc == 0x24E148u) {
        ctx->pc = 0x24E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E144u;
        // 0x24e148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E14Cu;
        goto label_24e14c;
    }
    ctx->pc = 0x24E144u;
    {
        const bool branch_taken_0x24e144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E144u;
        // 0x24e148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e144) {
            ctx->pc = 0x24E1D0u;
            goto label_24e1d0;
        }
    }
    ctx->pc = 0x24E14Cu;
label_24e14c:
    // 0x24e14c: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x24e14cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24e150:
    // 0x24e150: 0x8f848568  lw          $a0, -0x7A98($gp)
    ctx->pc = 0x24e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
label_24e154:
    // 0x24e154: 0x0  nop
    ctx->pc = 0x24e154u;
    // NOP
label_24e158:
    // 0x24e158: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x24e158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24e15c:
    // 0x24e15c: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x24e15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24e160:
    // 0x24e160: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24e164:
    // 0x24e164: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e168:
    // 0x24e168: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x24e168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_24e16c:
    // 0x24e16c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_24e170:
    if (ctx->pc == 0x24E170u) {
        ctx->pc = 0x24E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E16Cu;
        // 0x24e170: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E174u;
        goto label_24e174;
    }
    ctx->pc = 0x24E16Cu;
    {
        const bool branch_taken_0x24e16c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E16Cu;
        // 0x24e170: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e16c) {
            ctx->pc = 0x24E198u;
            goto label_24e198;
        }
    }
    ctx->pc = 0x24E174u;
label_24e174:
    // 0x24e174: 0x8e110038  lw          $s1, 0x38($s0)
    ctx->pc = 0x24e174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_24e178:
    // 0x24e178: 0x26920fc8  addiu       $s2, $s4, 0xFC8
    ctx->pc = 0x24e178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_24e17c:
    // 0x24e17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24e17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e180:
    // 0x24e180: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x24e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_24e184:
    // 0x24e184: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x24e184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24e188:
    // 0x24e188: 0x40f809  jalr        $v0
label_24e18c:
    if (ctx->pc == 0x24E18Cu) {
        ctx->pc = 0x24E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E188u;
        // 0x24e18c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E190u;
        goto label_24e190;
    }
    ctx->pc = 0x24E188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E190u);
        ctx->pc = 0x24E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E188u;
        // 0x24e18c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E188u, 0x24E190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E190u;
label_24e190:
    // 0x24e190: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_24e194:
    if (ctx->pc == 0x24E194u) {
        ctx->pc = 0x24E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E190u;
        // 0x24e194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E198u;
        goto label_24e198;
    }
    ctx->pc = 0x24E190u;
    {
        const bool branch_taken_0x24e190 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E190u;
        // 0x24e194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e190) {
            ctx->pc = 0x24E180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e180;
        }
    }
    ctx->pc = 0x24E198u;
label_24e198:
    // 0x24e198: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_24e19c:
    if (ctx->pc == 0x24E19Cu) {
        ctx->pc = 0x24E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E198u;
        // 0x24e19c: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1A0u;
        goto label_24e1a0;
    }
    ctx->pc = 0x24E198u;
    {
        const bool branch_taken_0x24e198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E198u;
        // 0x24e19c: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e198) {
            ctx->pc = 0x24E1C0u;
            goto label_24e1c0;
        }
    }
    ctx->pc = 0x24E1A0u;
label_24e1a0:
    // 0x24e1a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24e1a4:
    // 0x24e1a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24e1a8:
    if (ctx->pc == 0x24E1A8u) {
        ctx->pc = 0x24E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1A4u;
        // 0x24e1a8: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1ACu;
        goto label_24e1ac;
    }
    ctx->pc = 0x24E1A4u;
    {
        const bool branch_taken_0x24e1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1A4u;
        // 0x24e1a8: 0x8f82856c  lw          $v0, -0x7A94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1a4) {
            ctx->pc = 0x24E1C0u;
            goto label_24e1c0;
        }
    }
    ctx->pc = 0x24E1ACu;
label_24e1ac:
    // 0x24e1ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24e1b0:
    // 0x24e1b0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x24e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_24e1b4:
    // 0x24e1b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_24e1b8:
    // 0x24e1b8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x24e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_24e1bc:
    // 0x24e1bc: 0x8f82856c  lw          $v0, -0x7A94($gp)
    ctx->pc = 0x24e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935916)));
label_24e1c0:
    // 0x24e1c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24e1c4:
    // 0x24e1c4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x24e1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24e1c8:
    // 0x24e1c8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_24e1cc:
    if (ctx->pc == 0x24E1CCu) {
        ctx->pc = 0x24E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1C8u;
        // 0x24e1cc: 0x8f848568  lw          $a0, -0x7A98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1D0u;
        goto label_24e1d0;
    }
    ctx->pc = 0x24E1C8u;
    {
        const bool branch_taken_0x24e1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1C8u;
        // 0x24e1cc: 0x8f848568  lw          $a0, -0x7A98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1c8) {
            ctx->pc = 0x24E158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e158;
        }
    }
    ctx->pc = 0x24E1D0u;
label_24e1d0:
    // 0x24e1d0: 0x8f848568  lw          $a0, -0x7A98($gp)
    ctx->pc = 0x24e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
label_24e1d4:
    // 0x24e1d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_24e1d8:
    if (ctx->pc == 0x24E1D8u) {
        ctx->pc = 0x24E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1D4u;
        // 0x24e1d8: 0x26a30fc8  addiu       $v1, $s5, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1DCu;
        goto label_24e1dc;
    }
    ctx->pc = 0x24E1D4u;
    {
        const bool branch_taken_0x24e1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1D4u;
        // 0x24e1d8: 0x26a30fc8  addiu       $v1, $s5, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1d4) {
            ctx->pc = 0x24E1ECu;
            goto label_24e1ec;
        }
    }
    ctx->pc = 0x24E1DCu;
label_24e1dc:
    // 0x24e1dc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x24e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_24e1e0:
    // 0x24e1e0: 0x40f809  jalr        $v0
label_24e1e4:
    if (ctx->pc == 0x24E1E4u) {
        ctx->pc = 0x24E1E8u;
        goto label_24e1e8;
    }
    ctx->pc = 0x24E1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E1E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E1E0u, 0x24E1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E1E8u;
label_24e1e8:
    // 0x24e1e8: 0xaf808568  sw          $zero, -0x7A98($gp)
    ctx->pc = 0x24e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 0));
label_24e1ec:
    // 0x24e1ec: 0xc093106  jal         func_24C418
label_24e1f0:
    if (ctx->pc == 0x24E1F0u) {
        ctx->pc = 0x24E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1ECu;
        // 0x24e1f0: 0x8f848f08  lw          $a0, -0x70F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1F4u;
        goto label_24e1f4;
    }
    ctx->pc = 0x24E1ECu;
    SET_GPR_U32(ctx, 31, 0x24E1F4u);
    ctx->pc = 0x24E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1ECu;
    // 0x24e1f0: 0x8f848f08  lw          $a0, -0x70F8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24E1ECu, 0x24E1F4u)) {
        return;
    }
    ctx->pc = 0x24E1F4u;
label_24e1f4:
    // 0x24e1f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_24e1f8:
    // 0x24e1f8: 0xac203f78  sw          $zero, 0x3F78($at)
    ctx->pc = 0x24e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16248), GPR_U32(ctx, 0));
label_24e1fc:
    // 0x24e1fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x24e1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24e200:
    // 0x24e200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e204:
    // 0x24e204: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x24e204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24e208:
    // 0x24e208: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x24e208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24e20c:
    // 0x24e20c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24e20cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24e210:
    // 0x24e210: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x24e210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e214:
    // 0x24e214: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x24e214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24e218:
    // 0x24e218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e21c:
    // 0x24e21c: 0x3e00008  jr          $ra
label_24e220:
    if (ctx->pc == 0x24E220u) {
        ctx->pc = 0x24E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E21Cu;
        // 0x24e220: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E224u;
        goto label_24e224;
    }
    ctx->pc = 0x24E21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E21Cu;
        // 0x24e220: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E224u;
label_24e224:
    // 0x24e224: 0x0  nop
    ctx->pc = 0x24e224u;
    // NOP
    ctx->pc = 0x24e228u;
}
