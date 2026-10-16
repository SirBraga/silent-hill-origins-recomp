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

// Function: sub_002F9480
// Address: 0x2f9480 - 0x2f95f0
void sub_002F9480_0x2f9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9480_0x2f9480");
#endif

    switch (ctx->pc) {
        case 0x2f9480u: goto label_2f9480;
        case 0x2f9484u: goto label_2f9484;
        case 0x2f9488u: goto label_2f9488;
        case 0x2f948cu: goto label_2f948c;
        case 0x2f9490u: goto label_2f9490;
        case 0x2f9494u: goto label_2f9494;
        case 0x2f9498u: goto label_2f9498;
        case 0x2f949cu: goto label_2f949c;
        case 0x2f94a0u: goto label_2f94a0;
        case 0x2f94a4u: goto label_2f94a4;
        case 0x2f94a8u: goto label_2f94a8;
        case 0x2f94acu: goto label_2f94ac;
        case 0x2f94b0u: goto label_2f94b0;
        case 0x2f94b4u: goto label_2f94b4;
        case 0x2f94b8u: goto label_2f94b8;
        case 0x2f94bcu: goto label_2f94bc;
        case 0x2f94c0u: goto label_2f94c0;
        case 0x2f94c4u: goto label_2f94c4;
        case 0x2f94c8u: goto label_2f94c8;
        case 0x2f94ccu: goto label_2f94cc;
        case 0x2f94d0u: goto label_2f94d0;
        case 0x2f94d4u: goto label_2f94d4;
        case 0x2f94d8u: goto label_2f94d8;
        case 0x2f94dcu: goto label_2f94dc;
        case 0x2f94e0u: goto label_2f94e0;
        case 0x2f94e4u: goto label_2f94e4;
        case 0x2f94e8u: goto label_2f94e8;
        case 0x2f94ecu: goto label_2f94ec;
        case 0x2f94f0u: goto label_2f94f0;
        case 0x2f94f4u: goto label_2f94f4;
        case 0x2f94f8u: goto label_2f94f8;
        case 0x2f94fcu: goto label_2f94fc;
        case 0x2f9500u: goto label_2f9500;
        case 0x2f9504u: goto label_2f9504;
        case 0x2f9508u: goto label_2f9508;
        case 0x2f950cu: goto label_2f950c;
        case 0x2f9510u: goto label_2f9510;
        case 0x2f9514u: goto label_2f9514;
        case 0x2f9518u: goto label_2f9518;
        case 0x2f951cu: goto label_2f951c;
        case 0x2f9520u: goto label_2f9520;
        case 0x2f9524u: goto label_2f9524;
        case 0x2f9528u: goto label_2f9528;
        case 0x2f952cu: goto label_2f952c;
        case 0x2f9530u: goto label_2f9530;
        case 0x2f9534u: goto label_2f9534;
        case 0x2f9538u: goto label_2f9538;
        case 0x2f953cu: goto label_2f953c;
        case 0x2f9540u: goto label_2f9540;
        case 0x2f9544u: goto label_2f9544;
        case 0x2f9548u: goto label_2f9548;
        case 0x2f954cu: goto label_2f954c;
        case 0x2f9550u: goto label_2f9550;
        case 0x2f9554u: goto label_2f9554;
        case 0x2f9558u: goto label_2f9558;
        case 0x2f955cu: goto label_2f955c;
        case 0x2f9560u: goto label_2f9560;
        case 0x2f9564u: goto label_2f9564;
        case 0x2f9568u: goto label_2f9568;
        case 0x2f956cu: goto label_2f956c;
        case 0x2f9570u: goto label_2f9570;
        case 0x2f9574u: goto label_2f9574;
        case 0x2f9578u: goto label_2f9578;
        case 0x2f957cu: goto label_2f957c;
        case 0x2f9580u: goto label_2f9580;
        case 0x2f9584u: goto label_2f9584;
        case 0x2f9588u: goto label_2f9588;
        case 0x2f958cu: goto label_2f958c;
        case 0x2f9590u: goto label_2f9590;
        case 0x2f9594u: goto label_2f9594;
        case 0x2f9598u: goto label_2f9598;
        case 0x2f959cu: goto label_2f959c;
        case 0x2f95a0u: goto label_2f95a0;
        case 0x2f95a4u: goto label_2f95a4;
        case 0x2f95a8u: goto label_2f95a8;
        case 0x2f95acu: goto label_2f95ac;
        case 0x2f95b0u: goto label_2f95b0;
        case 0x2f95b4u: goto label_2f95b4;
        case 0x2f95b8u: goto label_2f95b8;
        case 0x2f95bcu: goto label_2f95bc;
        case 0x2f95c0u: goto label_2f95c0;
        case 0x2f95c4u: goto label_2f95c4;
        case 0x2f95c8u: goto label_2f95c8;
        case 0x2f95ccu: goto label_2f95cc;
        case 0x2f95d0u: goto label_2f95d0;
        case 0x2f95d4u: goto label_2f95d4;
        case 0x2f95d8u: goto label_2f95d8;
        case 0x2f95dcu: goto label_2f95dc;
        case 0x2f95e0u: goto label_2f95e0;
        case 0x2f95e4u: goto label_2f95e4;
        case 0x2f95e8u: goto label_2f95e8;
        case 0x2f95ecu: goto label_2f95ec;
        default: break;
    }

    ctx->pc = 0x2f9480u;

label_2f9480:
    // 0x2f9480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f9484:
    // 0x2f9484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f9484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f9488:
    // 0x2f9488: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2f948c:
    // 0x2f948c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f9490:
    // 0x2f9490: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f9490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9494:
    // 0x2f9494: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f9498:
    // 0x2f9498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f9498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f949c:
    // 0x2f949c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2f94a0:
    // 0x2f94a0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f94a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2f94a4:
    // 0x2f94a4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_2f94a8:
    if (ctx->pc == 0x2F94A8u) {
        ctx->pc = 0x2F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94A4u;
        // 0x2f94a8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94ACu;
        goto label_2f94ac;
    }
    ctx->pc = 0x2F94A4u;
    {
        const bool branch_taken_0x2f94a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94A4u;
        // 0x2f94a8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94a4) {
            ctx->pc = 0x2F94B8u;
            goto label_2f94b8;
        }
    }
    ctx->pc = 0x2F94ACu;
label_2f94ac:
    // 0x2f94ac: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2f94acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2f94b0:
    // 0x2f94b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2f94b4:
    if (ctx->pc == 0x2F94B4u) {
        ctx->pc = 0x2F94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94B0u;
        // 0x2f94b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94B8u;
        goto label_2f94b8;
    }
    ctx->pc = 0x2F94B0u;
    {
        const bool branch_taken_0x2f94b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94B0u;
        // 0x2f94b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94b0) {
            ctx->pc = 0x2F94F4u;
            goto label_2f94f4;
        }
    }
    ctx->pc = 0x2F94B8u;
label_2f94b8:
    // 0x2f94b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2f94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2f94bc:
    // 0x2f94bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f94c0:
    if (ctx->pc == 0x2F94C0u) {
        ctx->pc = 0x2F94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94BCu;
        // 0x2f94c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94C4u;
        goto label_2f94c4;
    }
    ctx->pc = 0x2F94BCu;
    {
        const bool branch_taken_0x2f94bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94BCu;
        // 0x2f94c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94bc) {
            ctx->pc = 0x2F94D0u;
            goto label_2f94d0;
        }
    }
    ctx->pc = 0x2F94C4u;
label_2f94c4:
    // 0x2f94c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2f94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_2f94c8:
    // 0x2f94c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f94cc:
    // 0x2f94cc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2f94d0:
    // 0x2f94d0: 0xc0be472  jal         func_2F91C8
label_2f94d4:
    if (ctx->pc == 0x2F94D4u) {
        ctx->pc = 0x2F94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94D0u;
        // 0x2f94d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94D8u;
        goto label_2f94d8;
    }
    ctx->pc = 0x2F94D0u;
    SET_GPR_U32(ctx, 31, 0x2F94D8u);
    ctx->pc = 0x2F94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94D0u;
    // 0x2f94d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F91C8u, 0x2F94D0u, 0x2F94D8u)) {
        return;
    }
    ctx->pc = 0x2F94D8u;
label_2f94d8:
    // 0x2f94d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f94dc:
    if (ctx->pc == 0x2F94DCu) {
        ctx->pc = 0x2F94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94D8u;
        // 0x2f94dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94E0u;
        goto label_2f94e0;
    }
    ctx->pc = 0x2F94D8u;
    {
        const bool branch_taken_0x2f94d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94D8u;
        // 0x2f94dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94d8) {
            ctx->pc = 0x2F94ECu;
            goto label_2f94ec;
        }
    }
    ctx->pc = 0x2F94E0u;
label_2f94e0:
    // 0x2f94e0: 0xc0be6d8  jal         func_2F9B60
label_2f94e4:
    if (ctx->pc == 0x2F94E4u) {
        ctx->pc = 0x2F94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94E0u;
        // 0x2f94e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94E8u;
        goto label_2f94e8;
    }
    ctx->pc = 0x2F94E0u;
    SET_GPR_U32(ctx, 31, 0x2F94E8u);
    ctx->pc = 0x2F94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94E0u;
    // 0x2f94e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9B60u, 0x2F94E0u, 0x2F94E8u)) {
        return;
    }
    ctx->pc = 0x2F94E8u;
label_2f94e8:
    // 0x2f94e8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2f94e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f94ec:
    // 0x2f94ec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2f94f0:
    if (ctx->pc == 0x2F94F0u) {
        ctx->pc = 0x2F94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94ECu;
        // 0x2f94f0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94F4u;
        goto label_2f94f4;
    }
    ctx->pc = 0x2F94ECu;
    {
        const bool branch_taken_0x2f94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94ECu;
        // 0x2f94f0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94ec) {
            ctx->pc = 0x2F955Cu;
            goto label_2f955c;
        }
    }
    ctx->pc = 0x2F94F4u;
label_2f94f4:
    // 0x2f94f4: 0xc0be472  jal         func_2F91C8
label_2f94f8:
    if (ctx->pc == 0x2F94F8u) {
        ctx->pc = 0x2F94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94F4u;
        // 0x2f94f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F94FCu;
        goto label_2f94fc;
    }
    ctx->pc = 0x2F94F4u;
    SET_GPR_U32(ctx, 31, 0x2F94FCu);
    ctx->pc = 0x2F94F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F94F4u;
    // 0x2f94f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F91C8u, 0x2F94F4u, 0x2F94FCu)) {
        return;
    }
    ctx->pc = 0x2F94FCu;
label_2f94fc:
    // 0x2f94fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9500:
    // 0x2f9500: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f9500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9504:
    // 0x2f9504: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_2f9508:
    if (ctx->pc == 0x2F9508u) {
        ctx->pc = 0x2F9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9504u;
        // 0x2f9508: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F950Cu;
        goto label_2f950c;
    }
    ctx->pc = 0x2F9504u;
    {
        const bool branch_taken_0x2f9504 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9504u;
        // 0x2f9508: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9504) {
            ctx->pc = 0x2F9558u;
            goto label_2f9558;
        }
    }
    ctx->pc = 0x2F950Cu;
label_2f950c:
    // 0x2f950c: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x2f950cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2f9510:
    // 0x2f9510: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_2f9514:
    if (ctx->pc == 0x2F9514u) {
        ctx->pc = 0x2F9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9510u;
        // 0x2f9514: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9518u;
        goto label_2f9518;
    }
    ctx->pc = 0x2F9510u;
    {
        const bool branch_taken_0x2f9510 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9510u;
        // 0x2f9514: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9510) {
            ctx->pc = 0x2F955Cu;
            goto label_2f955c;
        }
    }
    ctx->pc = 0x2F9518u;
label_2f9518:
    // 0x2f9518: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2f9518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_2f951c:
    // 0x2f951c: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_2f9520:
    if (ctx->pc == 0x2F9520u) {
        ctx->pc = 0x2F9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F951Cu;
        // 0x2f9520: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9524u;
        goto label_2f9524;
    }
    ctx->pc = 0x2F951Cu;
    {
        const bool branch_taken_0x2f951c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f951c) {
            ctx->pc = 0x2F9520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F951Cu;
            // 0x2f9520: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9560u;
            goto label_2f9560;
        }
    }
    ctx->pc = 0x2F9524u;
label_2f9524:
    // 0x2f9524: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x2f9524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_2f9528:
    // 0x2f9528: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f9528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f952c:
    // 0x2f952c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f952cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9530:
    // 0x2f9530: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f9530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9534:
    // 0x2f9534: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f9534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f9538:
    // 0x2f9538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f953c:
    // 0x2f953c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f953cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f9540:
    // 0x2f9540: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x2f9540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2f9544:
    // 0x2f9544: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2f9544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2f9548:
    // 0x2f9548: 0xe0f809  jalr        $a3
label_2f954c:
    if (ctx->pc == 0x2F954Cu) {
        ctx->pc = 0x2F954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9548u;
        // 0x2f954c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9550u;
        goto label_2f9550;
    }
    ctx->pc = 0x2F9548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2F9550u);
        ctx->pc = 0x2F954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9548u;
        // 0x2f954c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9548u, 0x2F9550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9550u;
label_2f9550:
    // 0x2f9550: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f9550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9554:
    // 0x2f9554: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f9554u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9558:
    // 0x2f9558: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f9558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f955c:
    // 0x2f955c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x2f955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_2f9560:
    // 0x2f9560: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f9564:
    if (ctx->pc == 0x2F9564u) {
        ctx->pc = 0x2F9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9560u;
        // 0x2f9564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9568u;
        goto label_2f9568;
    }
    ctx->pc = 0x2F9560u;
    {
        const bool branch_taken_0x2f9560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9560u;
        // 0x2f9564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9560) {
            ctx->pc = 0x2F95D4u;
            goto label_2f95d4;
        }
    }
    ctx->pc = 0x2F9568u;
label_2f9568:
    // 0x2f9568: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x2f9568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2f956c:
    // 0x2f956c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9570:
    // 0x2f9570: 0xc0be9d6  jal         func_2FA758
label_2f9574:
    if (ctx->pc == 0x2F9574u) {
        ctx->pc = 0x2F9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9570u;
        // 0x2f9574: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9578u;
        goto label_2f9578;
    }
    ctx->pc = 0x2F9570u;
    SET_GPR_U32(ctx, 31, 0x2F9578u);
    ctx->pc = 0x2F9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9570u;
    // 0x2f9574: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA758u, 0x2F9570u, 0x2F9578u)) {
        return;
    }
    ctx->pc = 0x2F9578u;
label_2f9578:
    // 0x2f9578: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x2f9578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_2f957c:
    // 0x2f957c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9580:
    // 0x2f9580: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_2f9584:
    if (ctx->pc == 0x2F9584u) {
        ctx->pc = 0x2F9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9580u;
        // 0x2f9584: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9588u;
        goto label_2f9588;
    }
    ctx->pc = 0x2F9580u;
    {
        const bool branch_taken_0x2f9580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9580) {
            ctx->pc = 0x2F9584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9580u;
            // 0x2f9584: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F95A0u;
            goto label_2f95a0;
        }
    }
    ctx->pc = 0x2F9588u;
label_2f9588:
    // 0x2f9588: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_2f958c:
    if (ctx->pc == 0x2F958Cu) {
        ctx->pc = 0x2F958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9588u;
        // 0x2f958c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9590u;
        goto label_2f9590;
    }
    ctx->pc = 0x2F9588u;
    {
        const bool branch_taken_0x2f9588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9588) {
            ctx->pc = 0x2F958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9588u;
            // 0x2f958c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F95A0u;
            goto label_2f95a0;
        }
    }
    ctx->pc = 0x2F9590u;
label_2f9590:
    // 0x2f9590: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2f9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_2f9594:
    // 0x2f9594: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f9594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f9598:
    // 0x2f9598: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x2f9598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_2f959c:
    // 0x2f959c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2f959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2f95a0:
    // 0x2f95a0: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x2f95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2f95a4:
    // 0x2f95a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f95a8:
    // 0x2f95a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2f95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2f95ac:
    // 0x2f95ac: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x2f95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_2f95b0:
    // 0x2f95b0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2f95b4:
    if (ctx->pc == 0x2F95B4u) {
        ctx->pc = 0x2F95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95B0u;
        // 0x2f95b4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95B8u;
        goto label_2f95b8;
    }
    ctx->pc = 0x2F95B0u;
    {
        const bool branch_taken_0x2f95b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95B0u;
        // 0x2f95b4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95b0) {
            ctx->pc = 0x2F95D4u;
            goto label_2f95d4;
        }
    }
    ctx->pc = 0x2F95B8u;
label_2f95b8:
    // 0x2f95b8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x2f95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2f95bc:
    // 0x2f95bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2f95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f95c0:
    // 0x2f95c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f95c4:
    // 0x2f95c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f95c8:
    // 0x2f95c8: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x2f95c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_2f95cc:
    // 0x2f95cc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2f95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2f95d0:
    // 0x2f95d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f95d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f95d4:
    // 0x2f95d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f95d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f95d8:
    // 0x2f95d8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f95d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f95dc:
    // 0x2f95dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f95dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f95e0:
    // 0x2f95e0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f95e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f95e4:
    // 0x2f95e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f95e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f95e8:
    // 0x2f95e8: 0x3e00008  jr          $ra
label_2f95ec:
    if (ctx->pc == 0x2F95ECu) {
        ctx->pc = 0x2F95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95E8u;
        // 0x2f95ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F95F0u;
        goto label_fallthrough_0x2f95e8;
    }
    ctx->pc = 0x2F95E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95E8u;
        // 0x2f95ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F95E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f95e8:
    ctx->pc = 0x2F95F0u;
}
