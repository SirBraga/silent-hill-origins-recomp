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

// Function: sub_00141328
// Address: 0x141328 - 0x141480
void sub_00141328_0x141328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141328_0x141328");
#endif

    switch (ctx->pc) {
        case 0x141390u: goto label_141390;
        case 0x1413d0u: goto label_1413d0;
        case 0x1413e0u: goto label_1413e0;
        case 0x1413ecu: goto label_1413ec;
        case 0x1413f4u: goto label_1413f4;
        case 0x1413fcu: goto label_1413fc;
        case 0x141404u: goto label_141404;
        case 0x141424u: goto label_141424;
        case 0x141430u: goto label_141430;
        case 0x14143cu: goto label_14143c;
        case 0x141448u: goto label_141448;
        case 0x141454u: goto label_141454;
        default: break;
    }

    ctx->pc = 0x141328u;

    // 0x141328: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14132c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x141330: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x141330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x141334: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x141338: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x141338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14133c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14133cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141340: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x141340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x141344: 0x24420bd0  addiu       $v0, $v0, 0xBD0
    ctx->pc = 0x141344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x141348: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x141348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14134c: 0x24630b88  addiu       $v1, $v1, 0xB88
    ctx->pc = 0x14134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2952));
    // 0x141350: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x141350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x141354: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x141354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141358: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x141358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14135c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x14135cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x141360: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x141360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x141364: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x141368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14136c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x14136cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x141370: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x141370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x141374: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x141374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x141378: 0x8c448468  lw          $a0, -0x7B98($v0)
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338468u));
    // 0x14137c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14137Cu;
    {
        const bool branch_taken_0x14137c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14137Cu;
        // 0x141380: 0xac408468  sw          $zero, -0x7B98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14137c) {
            ctx->pc = 0x1413ACu;
            goto label_1413ac;
        }
    }
    ctx->pc = 0x141384u;
    // 0x141384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x141384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141388: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x141388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14138c: 0x0  nop
    ctx->pc = 0x14138cu;
    // NOP
label_141390:
    // 0x141390: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141390u;
    {
        const bool branch_taken_0x141390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x141394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141390u;
        // 0x141394: 0x8c8400b4  lw          $a0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141390) {
            ctx->pc = 0x1413A4u;
            goto label_1413a4;
        }
    }
    ctx->pc = 0x141398u;
    // 0x141398: 0x8ca28468  lw          $v0, -0x7B98($a1)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294935656)));
    // 0x14139c: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x14139cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
    // 0x1413a0: 0xaca38468  sw          $v1, -0x7B98($a1)
    ctx->pc = 0x1413a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294935656), GPR_U32(ctx, 3));
label_1413a4:
    // 0x1413a4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1413A4u;
    {
        const bool branch_taken_0x1413a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1413A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413A4u;
        // 0x1413a8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413a4) {
            ctx->pc = 0x141390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141390;
        }
    }
    ctx->pc = 0x1413ACu;
label_1413ac:
    // 0x1413ac: 0x8cc28470  lw          $v0, -0x7B90($a2)
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294935664)));
    // 0x1413b0: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1413b4: 0x261400b8  addiu       $s4, $s0, 0xB8
    ctx->pc = 0x1413b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x1413b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1413b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1413c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1413c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413c4: 0xacc28470  sw          $v0, -0x7B90($a2)
    ctx->pc = 0x1413c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294935664), GPR_U32(ctx, 2));
    // 0x1413c8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1413C8u;
    SET_GPR_U32(ctx, 31, 0x1413D0u);
    ctx->pc = 0x1413CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413C8u;
    // 0x1413cc: 0x261300c0  addiu       $s3, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1413C8u, 0x1413D0u)) {
        return;
    }
    ctx->pc = 0x1413D0u;
label_1413d0:
    // 0x1413d0: 0x261200c8  addiu       $s2, $s0, 0xC8
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x1413d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1413d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413d8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1413D8u;
    SET_GPR_U32(ctx, 31, 0x1413E0u);
    ctx->pc = 0x1413DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413D8u;
    // 0x1413dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1413D8u, 0x1413E0u)) {
        return;
    }
    ctx->pc = 0x1413E0u;
label_1413e0:
    // 0x1413e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1413e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1413E4u;
    SET_GPR_U32(ctx, 31, 0x1413ECu);
    ctx->pc = 0x1413E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413E4u;
    // 0x1413e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1413E4u, 0x1413ECu)) {
        return;
    }
    ctx->pc = 0x1413ECu;
label_1413ec:
    // 0x1413ec: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1413ECu;
    SET_GPR_U32(ctx, 31, 0x1413F4u);
    ctx->pc = 0x1413F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413ECu;
    // 0x1413f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1413ECu, 0x1413F4u)) {
        return;
    }
    ctx->pc = 0x1413F4u;
label_1413f4:
    // 0x1413f4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1413F4u;
    SET_GPR_U32(ctx, 31, 0x1413FCu);
    ctx->pc = 0x1413F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413F4u;
    // 0x1413f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1413F4u, 0x1413FCu)) {
        return;
    }
    ctx->pc = 0x1413FCu;
label_1413fc:
    // 0x1413fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1413FCu;
    SET_GPR_U32(ctx, 31, 0x141404u);
    ctx->pc = 0x141400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413FCu;
    // 0x141400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1413FCu, 0x141404u)) {
        return;
    }
    ctx->pc = 0x141404u;
label_141404:
    // 0x141404: 0x8ea2846c  lw          $v0, -0x7B94($s5)
    ctx->pc = 0x141404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935660)));
    // 0x141408: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141408u;
    {
        const bool branch_taken_0x141408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x14140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141408u;
        // 0x14140c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141408) {
            ctx->pc = 0x141428u;
            goto label_141428;
        }
    }
    ctx->pc = 0x141410u;
    // 0x141410: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x141410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x141414: 0xaea0846c  sw          $zero, -0x7B94($s5)
    ctx->pc = 0x141414u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294935660), GPR_U32(ctx, 0));
    // 0x141418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14141c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14141Cu;
    SET_GPR_U32(ctx, 31, 0x141424u);
    ctx->pc = 0x141420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14141Cu;
    // 0x141420: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14141Cu, 0x141424u)) {
        return;
    }
    ctx->pc = 0x141424u;
label_141424:
    // 0x141424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_141428:
    // 0x141428: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x141428u;
    SET_GPR_U32(ctx, 31, 0x141430u);
    ctx->pc = 0x14142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141428u;
    // 0x14142c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x141428u, 0x141430u)) {
        return;
    }
    ctx->pc = 0x141430u;
label_141430:
    // 0x141430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141434: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x141434u;
    SET_GPR_U32(ctx, 31, 0x14143Cu);
    ctx->pc = 0x141438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141434u;
    // 0x141438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x141434u, 0x14143Cu)) {
        return;
    }
    ctx->pc = 0x14143Cu;
label_14143c:
    // 0x14143c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141440: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x141440u;
    SET_GPR_U32(ctx, 31, 0x141448u);
    ctx->pc = 0x141444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141440u;
    // 0x141444: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x141440u, 0x141448u)) {
        return;
    }
    ctx->pc = 0x141448u;
label_141448:
    // 0x141448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14144c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x14144Cu;
    SET_GPR_U32(ctx, 31, 0x141454u);
    ctx->pc = 0x141450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14144Cu;
    // 0x141450: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x14144Cu, 0x141454u)) {
        return;
    }
    ctx->pc = 0x141454u;
label_141454:
    // 0x141454: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x141454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141458: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x141458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14145c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14145cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141460: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x141460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141464: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x141464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141468: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x141468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14146c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14146cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141474: 0x3e00008  jr          $ra
    ctx->pc = 0x141474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141474u;
        // 0x141478: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14147Cu;
    // 0x14147c: 0x0  nop
    ctx->pc = 0x14147cu;
    // NOP
    ctx->pc = 0x141480u;
}
