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

// Function: sub_001B93D0
// Address: 0x1b93d0 - 0x1b9528
void sub_001B93D0_0x1b93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B93D0_0x1b93d0");
#endif

    switch (ctx->pc) {
        case 0x1b93f0u: goto label_1b93f0;
        case 0x1b9430u: goto label_1b9430;
        case 0x1b9448u: goto label_1b9448;
        case 0x1b945cu: goto label_1b945c;
        case 0x1b946cu: goto label_1b946c;
        case 0x1b9484u: goto label_1b9484;
        case 0x1b9498u: goto label_1b9498;
        case 0x1b94bcu: goto label_1b94bc;
        case 0x1b94d0u: goto label_1b94d0;
        case 0x1b94e4u: goto label_1b94e4;
        case 0x1b94f8u: goto label_1b94f8;
        case 0x1b950cu: goto label_1b950c;
        default: break;
    }

    ctx->pc = 0x1b93d0u;

    // 0x1b93d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b93d4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b93d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1b93d8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1b93dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b93dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1b93e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b93e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b93e8: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1B93E8u;
    SET_GPR_U32(ctx, 31, 0x1B93F0u);
    ctx->pc = 0x1B93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93E8u;
    // 0x1b93ec: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1B93E8u, 0x1B93F0u)) {
        return;
    }
    ctx->pc = 0x1B93F0u;
label_1b93f0:
    // 0x1b93f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b93f4: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1b93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1b93f8: 0x2463d058  addiu       $v1, $v1, -0x2FA8
    ctx->pc = 0x1b93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955096));
    // 0x1b93fc: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1b93fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1b9400: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b9400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1b9404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9408: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b9408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1b940c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b940cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9410: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1b9410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1b9414: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b9414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9418: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1b9418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1b941c: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1b941cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1b9420: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1b9420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1b9424: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1b9424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1b9428: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B9428u;
    SET_GPR_U32(ctx, 31, 0x1B9430u);
    ctx->pc = 0x1B942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9428u;
    // 0x1b942c: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B9428u, 0x1B9430u)) {
        return;
    }
    ctx->pc = 0x1B9430u;
label_1b9430:
    // 0x1b9430: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b9430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b9434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9438: 0x24a5cfd0  addiu       $a1, $a1, -0x3030
    ctx->pc = 0x1b9438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x1b943c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b943cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9440: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B9440u;
    SET_GPR_U32(ctx, 31, 0x1B9448u);
    ctx->pc = 0x1B9444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9440u;
    // 0x1b9444: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B9440u, 0x1B9448u)) {
        return;
    }
    ctx->pc = 0x1B9448u;
label_1b9448:
    // 0x1b9448: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b944c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B944Cu;
    {
        const bool branch_taken_0x1b944c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B944Cu;
        // 0x1b9450: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b944c) {
            ctx->pc = 0x1B94A8u;
            goto label_1b94a8;
        }
    }
    ctx->pc = 0x1B9454u;
    // 0x1b9454: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1B9454u;
    SET_GPR_U32(ctx, 31, 0x1B945Cu);
    ctx->pc = 0x1B9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9454u;
    // 0x1b9458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1B9454u, 0x1B945Cu)) {
        return;
    }
    ctx->pc = 0x1B945Cu;
label_1b945c:
    // 0x1b945c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1b945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1b9460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b9460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9464: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x1B9464u;
    SET_GPR_U32(ctx, 31, 0x1B946Cu);
    ctx->pc = 0x1B9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9464u;
    // 0x1b9468: 0xae020260  sw          $v0, 0x260($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x1B9464u, 0x1B946Cu)) {
        return;
    }
    ctx->pc = 0x1B946Cu;
label_1b946c:
    // 0x1b946c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b946cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9470: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9470u;
    {
        const bool branch_taken_0x1b9470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9470u;
        // 0x1b9474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9470) {
            ctx->pc = 0x1B94A8u;
            goto label_1b94a8;
        }
    }
    ctx->pc = 0x1B9478u;
    // 0x1b9478: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b9478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b947c: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1B947Cu;
    SET_GPR_U32(ctx, 31, 0x1B9484u);
    ctx->pc = 0x1B9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B947Cu;
    // 0x1b9480: 0x24a5cfe0  addiu       $a1, $a1, -0x3020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1B947Cu, 0x1B9484u)) {
        return;
    }
    ctx->pc = 0x1B9484u;
label_1b9484:
    // 0x1b9484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9484u;
    {
        const bool branch_taken_0x1b9484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9484u;
        // 0x1b9488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9484) {
            ctx->pc = 0x1B94A0u;
            goto label_1b94a0;
        }
    }
    ctx->pc = 0x1B948Cu;
    // 0x1b948c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b948cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b9490: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x1B9490u;
    SET_GPR_U32(ctx, 31, 0x1B9498u);
    ctx->pc = 0x1B9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9490u;
    // 0x1b9494: 0x24a5cfe8  addiu       $a1, $a1, -0x3018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x1B9490u, 0x1B9498u)) {
        return;
    }
    ctx->pc = 0x1B9498u;
label_1b9498:
    // 0x1b9498: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9498u;
    {
        const bool branch_taken_0x1b9498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9498) {
            ctx->pc = 0x1B949Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9498u;
            // 0x1b949c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B94ACu;
            goto label_1b94ac;
        }
    }
    ctx->pc = 0x1B94A0u;
label_1b94a0:
    // 0x1b94a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b94a4: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1b94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_1b94a8:
    // 0x1b94a8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1b94ac:
    // 0x1b94ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b94acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94b0: 0x24a5cff0  addiu       $a1, $a1, -0x3010
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954992));
    // 0x1b94b4: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B94B4u;
    SET_GPR_U32(ctx, 31, 0x1B94BCu);
    ctx->pc = 0x1B94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94B4u;
    // 0x1b94b8: 0x2606026c  addiu       $a2, $s0, 0x26C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B94B4u, 0x1B94BCu)) {
        return;
    }
    ctx->pc = 0x1B94BCu;
label_1b94bc:
    // 0x1b94bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b94c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b94c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94c4: 0x24a5d000  addiu       $a1, $a1, -0x3000
    ctx->pc = 0x1b94c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955008));
    // 0x1b94c8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B94C8u;
    SET_GPR_U32(ctx, 31, 0x1B94D0u);
    ctx->pc = 0x1B94CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94C8u;
    // 0x1b94cc: 0x26060270  addiu       $a2, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B94C8u, 0x1B94D0u)) {
        return;
    }
    ctx->pc = 0x1B94D0u;
label_1b94d0:
    // 0x1b94d0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b94d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b94d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94d8: 0x24a5d010  addiu       $a1, $a1, -0x2FF0
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
    // 0x1b94dc: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B94DCu;
    SET_GPR_U32(ctx, 31, 0x1B94E4u);
    ctx->pc = 0x1B94E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94DCu;
    // 0x1b94e0: 0x26060274  addiu       $a2, $s0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B94DCu, 0x1B94E4u)) {
        return;
    }
    ctx->pc = 0x1B94E4u;
label_1b94e4:
    // 0x1b94e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b94e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b94e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b94e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94ec: 0x24a5d020  addiu       $a1, $a1, -0x2FE0
    ctx->pc = 0x1b94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955040));
    // 0x1b94f0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B94F0u;
    SET_GPR_U32(ctx, 31, 0x1B94F8u);
    ctx->pc = 0x1B94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94F0u;
    // 0x1b94f4: 0x26060278  addiu       $a2, $s0, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B94F0u, 0x1B94F8u)) {
        return;
    }
    ctx->pc = 0x1B94F8u;
label_1b94f8:
    // 0x1b94f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b94fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b94fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9500: 0x2606027c  addiu       $a2, $s0, 0x27C
    ctx->pc = 0x1b9500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    // 0x1b9504: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1B9504u;
    SET_GPR_U32(ctx, 31, 0x1B950Cu);
    ctx->pc = 0x1B9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9504u;
    // 0x1b9508: 0x24a5d030  addiu       $a1, $a1, -0x2FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1B9504u, 0x1B950Cu)) {
        return;
    }
    ctx->pc = 0x1B950Cu;
label_1b950c:
    // 0x1b950c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b950cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9510: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b9510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b9514: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b9514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b9518: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b9518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b951c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b951cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b9520: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9520u;
        // 0x1b9524: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9528u;
}
