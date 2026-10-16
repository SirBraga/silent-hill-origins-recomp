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

// Function: sub_001111D0
// Address: 0x1111d0 - 0x1115e0
void sub_001111D0_0x1111d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001111D0_0x1111d0");
#endif

    switch (ctx->pc) {
        case 0x1111f8u: goto label_1111f8;
        case 0x111204u: goto label_111204;
        case 0x111210u: goto label_111210;
        case 0x11121cu: goto label_11121c;
        case 0x111228u: goto label_111228;
        case 0x111234u: goto label_111234;
        case 0x111240u: goto label_111240;
        case 0x11124cu: goto label_11124c;
        case 0x111258u: goto label_111258;
        case 0x111264u: goto label_111264;
        case 0x111270u: goto label_111270;
        case 0x11127cu: goto label_11127c;
        case 0x111288u: goto label_111288;
        case 0x111294u: goto label_111294;
        case 0x1112a0u: goto label_1112a0;
        case 0x1112acu: goto label_1112ac;
        case 0x1112b8u: goto label_1112b8;
        case 0x1112c4u: goto label_1112c4;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112dcu: goto label_1112dc;
        case 0x1112e8u: goto label_1112e8;
        case 0x1112f4u: goto label_1112f4;
        case 0x111300u: goto label_111300;
        case 0x11130cu: goto label_11130c;
        case 0x111318u: goto label_111318;
        case 0x111324u: goto label_111324;
        case 0x111330u: goto label_111330;
        case 0x11133cu: goto label_11133c;
        case 0x111348u: goto label_111348;
        case 0x111354u: goto label_111354;
        case 0x111360u: goto label_111360;
        case 0x11136cu: goto label_11136c;
        case 0x111378u: goto label_111378;
        case 0x111388u: goto label_111388;
        case 0x1113acu: goto label_1113ac;
        case 0x1113c0u: goto label_1113c0;
        case 0x1113d0u: goto label_1113d0;
        case 0x1113e0u: goto label_1113e0;
        case 0x1113f0u: goto label_1113f0;
        case 0x111400u: goto label_111400;
        case 0x111410u: goto label_111410;
        case 0x111420u: goto label_111420;
        case 0x111430u: goto label_111430;
        case 0x111440u: goto label_111440;
        case 0x111450u: goto label_111450;
        case 0x111460u: goto label_111460;
        case 0x111470u: goto label_111470;
        case 0x111480u: goto label_111480;
        case 0x111490u: goto label_111490;
        case 0x1114a0u: goto label_1114a0;
        case 0x1114b0u: goto label_1114b0;
        case 0x1114c0u: goto label_1114c0;
        case 0x1114d0u: goto label_1114d0;
        case 0x1114e0u: goto label_1114e0;
        case 0x1114f0u: goto label_1114f0;
        case 0x111500u: goto label_111500;
        case 0x111510u: goto label_111510;
        case 0x111520u: goto label_111520;
        case 0x111530u: goto label_111530;
        case 0x111540u: goto label_111540;
        case 0x111550u: goto label_111550;
        case 0x111560u: goto label_111560;
        case 0x111570u: goto label_111570;
        case 0x111580u: goto label_111580;
        case 0x111590u: goto label_111590;
        case 0x1115a0u: goto label_1115a0;
        case 0x1115b0u: goto label_1115b0;
        case 0x1115c0u: goto label_1115c0;
        case 0x1115d0u: goto label_1115d0;
        default: break;
    }

    ctx->pc = 0x1111d0u;

    // 0x1111d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1111d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1111d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1111d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1111d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1111d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1111dc: 0x14a200fc  bne         $a1, $v0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1111DCu;
    {
        const bool branch_taken_0x1111dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1111E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111DCu;
        // 0x1111e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111dc) {
            ctx->pc = 0x1115D0u;
            goto label_1115d0;
        }
    }
    ctx->pc = 0x1111E4u;
    // 0x1111e4: 0x50800073  beql        $a0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x1111E4u;
    {
        const bool branch_taken_0x1111e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111e4) {
            ctx->pc = 0x1111E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1111E4u;
            // 0x1111e8: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113B4u;
            goto label_1113b4;
        }
    }
    ctx->pc = 0x1111ECu;
    // 0x1111ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1111ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1111f0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1111F0u;
    SET_GPR_U32(ctx, 31, 0x1111F8u);
    ctx->pc = 0x1111F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111F0u;
    // 0x1111f4: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1111F0u, 0x1111F8u)) {
        return;
    }
    ctx->pc = 0x1111F8u;
label_1111f8:
    // 0x1111f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1111f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1111fc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1111FCu;
    SET_GPR_U32(ctx, 31, 0x111204u);
    ctx->pc = 0x111200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111FCu;
    // 0x111200: 0x24844398  addiu       $a0, $a0, 0x4398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1111FCu, 0x111204u)) {
        return;
    }
    ctx->pc = 0x111204u;
label_111204:
    // 0x111204: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111208: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111208u;
    SET_GPR_U32(ctx, 31, 0x111210u);
    ctx->pc = 0x11120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111208u;
    // 0x11120c: 0x248443a0  addiu       $a0, $a0, 0x43A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111208u, 0x111210u)) {
        return;
    }
    ctx->pc = 0x111210u;
label_111210:
    // 0x111210: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111214: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111214u;
    SET_GPR_U32(ctx, 31, 0x11121Cu);
    ctx->pc = 0x111218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111214u;
    // 0x111218: 0x248443a8  addiu       $a0, $a0, 0x43A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111214u, 0x11121Cu)) {
        return;
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11121cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111220: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111220u;
    SET_GPR_U32(ctx, 31, 0x111228u);
    ctx->pc = 0x111224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111220u;
    // 0x111224: 0x248443b0  addiu       $a0, $a0, 0x43B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111220u, 0x111228u)) {
        return;
    }
    ctx->pc = 0x111228u;
label_111228:
    // 0x111228: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11122c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11122Cu;
    SET_GPR_U32(ctx, 31, 0x111234u);
    ctx->pc = 0x111230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11122Cu;
    // 0x111230: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11122Cu, 0x111234u)) {
        return;
    }
    ctx->pc = 0x111234u;
label_111234:
    // 0x111234: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111238: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111238u;
    SET_GPR_U32(ctx, 31, 0x111240u);
    ctx->pc = 0x11123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111238u;
    // 0x11123c: 0x248443c0  addiu       $a0, $a0, 0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111238u, 0x111240u)) {
        return;
    }
    ctx->pc = 0x111240u;
label_111240:
    // 0x111240: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111244: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111244u;
    SET_GPR_U32(ctx, 31, 0x11124Cu);
    ctx->pc = 0x111248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111244u;
    // 0x111248: 0x248443c8  addiu       $a0, $a0, 0x43C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111244u, 0x11124Cu)) {
        return;
    }
    ctx->pc = 0x11124Cu;
label_11124c:
    // 0x11124c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11124cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111250: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111250u;
    SET_GPR_U32(ctx, 31, 0x111258u);
    ctx->pc = 0x111254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111250u;
    // 0x111254: 0x248443d0  addiu       $a0, $a0, 0x43D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111250u, 0x111258u)) {
        return;
    }
    ctx->pc = 0x111258u;
label_111258:
    // 0x111258: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11125c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11125Cu;
    SET_GPR_U32(ctx, 31, 0x111264u);
    ctx->pc = 0x111260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11125Cu;
    // 0x111260: 0x248443d8  addiu       $a0, $a0, 0x43D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11125Cu, 0x111264u)) {
        return;
    }
    ctx->pc = 0x111264u;
label_111264:
    // 0x111264: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111268: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111268u;
    SET_GPR_U32(ctx, 31, 0x111270u);
    ctx->pc = 0x11126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111268u;
    // 0x11126c: 0x248443e0  addiu       $a0, $a0, 0x43E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111268u, 0x111270u)) {
        return;
    }
    ctx->pc = 0x111270u;
label_111270:
    // 0x111270: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111274: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111274u;
    SET_GPR_U32(ctx, 31, 0x11127Cu);
    ctx->pc = 0x111278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111274u;
    // 0x111278: 0x248443e8  addiu       $a0, $a0, 0x43E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111274u, 0x11127Cu)) {
        return;
    }
    ctx->pc = 0x11127Cu;
label_11127c:
    // 0x11127c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11127cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111280: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111280u;
    SET_GPR_U32(ctx, 31, 0x111288u);
    ctx->pc = 0x111284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111280u;
    // 0x111284: 0x248443f0  addiu       $a0, $a0, 0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111280u, 0x111288u)) {
        return;
    }
    ctx->pc = 0x111288u;
label_111288:
    // 0x111288: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11128c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11128Cu;
    SET_GPR_U32(ctx, 31, 0x111294u);
    ctx->pc = 0x111290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11128Cu;
    // 0x111290: 0x248443f8  addiu       $a0, $a0, 0x43F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11128Cu, 0x111294u)) {
        return;
    }
    ctx->pc = 0x111294u;
label_111294:
    // 0x111294: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111298: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111298u;
    SET_GPR_U32(ctx, 31, 0x1112A0u);
    ctx->pc = 0x11129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111298u;
    // 0x11129c: 0x24844400  addiu       $a0, $a0, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111298u, 0x1112A0u)) {
        return;
    }
    ctx->pc = 0x1112A0u;
label_1112a0:
    // 0x1112a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112a4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112A4u;
    SET_GPR_U32(ctx, 31, 0x1112ACu);
    ctx->pc = 0x1112A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112A4u;
    // 0x1112a8: 0x24844408  addiu       $a0, $a0, 0x4408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112A4u, 0x1112ACu)) {
        return;
    }
    ctx->pc = 0x1112ACu;
label_1112ac:
    // 0x1112ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112b0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112B0u;
    SET_GPR_U32(ctx, 31, 0x1112B8u);
    ctx->pc = 0x1112B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112B0u;
    // 0x1112b4: 0x24844410  addiu       $a0, $a0, 0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112B0u, 0x1112B8u)) {
        return;
    }
    ctx->pc = 0x1112B8u;
label_1112b8:
    // 0x1112b8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112bc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112BCu;
    SET_GPR_U32(ctx, 31, 0x1112C4u);
    ctx->pc = 0x1112C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112BCu;
    // 0x1112c0: 0x24844418  addiu       $a0, $a0, 0x4418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112BCu, 0x1112C4u)) {
        return;
    }
    ctx->pc = 0x1112C4u;
label_1112c4:
    // 0x1112c4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112c8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112C8u;
    SET_GPR_U32(ctx, 31, 0x1112D0u);
    ctx->pc = 0x1112CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112C8u;
    // 0x1112cc: 0x24844420  addiu       $a0, $a0, 0x4420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112C8u, 0x1112D0u)) {
        return;
    }
    ctx->pc = 0x1112D0u;
label_1112d0:
    // 0x1112d0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112d4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112D4u;
    SET_GPR_U32(ctx, 31, 0x1112DCu);
    ctx->pc = 0x1112D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112D4u;
    // 0x1112d8: 0x24844428  addiu       $a0, $a0, 0x4428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112D4u, 0x1112DCu)) {
        return;
    }
    ctx->pc = 0x1112DCu;
label_1112dc:
    // 0x1112dc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112e0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112E0u;
    SET_GPR_U32(ctx, 31, 0x1112E8u);
    ctx->pc = 0x1112E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112E0u;
    // 0x1112e4: 0x24844430  addiu       $a0, $a0, 0x4430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112E0u, 0x1112E8u)) {
        return;
    }
    ctx->pc = 0x1112E8u;
label_1112e8:
    // 0x1112e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112ECu;
    SET_GPR_U32(ctx, 31, 0x1112F4u);
    ctx->pc = 0x1112F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112ECu;
    // 0x1112f0: 0x24844438  addiu       $a0, $a0, 0x4438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112ECu, 0x1112F4u)) {
        return;
    }
    ctx->pc = 0x1112F4u;
label_1112f4:
    // 0x1112f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1112f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1112f8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1112F8u;
    SET_GPR_U32(ctx, 31, 0x111300u);
    ctx->pc = 0x1112FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112F8u;
    // 0x1112fc: 0x24844440  addiu       $a0, $a0, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1112F8u, 0x111300u)) {
        return;
    }
    ctx->pc = 0x111300u;
label_111300:
    // 0x111300: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111304: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111304u;
    SET_GPR_U32(ctx, 31, 0x11130Cu);
    ctx->pc = 0x111308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111304u;
    // 0x111308: 0x24844448  addiu       $a0, $a0, 0x4448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111304u, 0x11130Cu)) {
        return;
    }
    ctx->pc = 0x11130Cu;
label_11130c:
    // 0x11130c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11130cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111310: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111310u;
    SET_GPR_U32(ctx, 31, 0x111318u);
    ctx->pc = 0x111314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111310u;
    // 0x111314: 0x24844450  addiu       $a0, $a0, 0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111310u, 0x111318u)) {
        return;
    }
    ctx->pc = 0x111318u;
label_111318:
    // 0x111318: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11131c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11131Cu;
    SET_GPR_U32(ctx, 31, 0x111324u);
    ctx->pc = 0x111320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11131Cu;
    // 0x111320: 0x24844458  addiu       $a0, $a0, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11131Cu, 0x111324u)) {
        return;
    }
    ctx->pc = 0x111324u;
label_111324:
    // 0x111324: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111328: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111328u;
    SET_GPR_U32(ctx, 31, 0x111330u);
    ctx->pc = 0x11132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111328u;
    // 0x11132c: 0x24844460  addiu       $a0, $a0, 0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111328u, 0x111330u)) {
        return;
    }
    ctx->pc = 0x111330u;
label_111330:
    // 0x111330: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111334: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111334u;
    SET_GPR_U32(ctx, 31, 0x11133Cu);
    ctx->pc = 0x111338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111334u;
    // 0x111338: 0x24844468  addiu       $a0, $a0, 0x4468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111334u, 0x11133Cu)) {
        return;
    }
    ctx->pc = 0x11133Cu;
label_11133c:
    // 0x11133c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111340: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111340u;
    SET_GPR_U32(ctx, 31, 0x111348u);
    ctx->pc = 0x111344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111340u;
    // 0x111344: 0x24844470  addiu       $a0, $a0, 0x4470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111340u, 0x111348u)) {
        return;
    }
    ctx->pc = 0x111348u;
label_111348:
    // 0x111348: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11134c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11134Cu;
    SET_GPR_U32(ctx, 31, 0x111354u);
    ctx->pc = 0x111350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11134Cu;
    // 0x111350: 0x24844478  addiu       $a0, $a0, 0x4478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11134Cu, 0x111354u)) {
        return;
    }
    ctx->pc = 0x111354u;
label_111354:
    // 0x111354: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111358: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111358u;
    SET_GPR_U32(ctx, 31, 0x111360u);
    ctx->pc = 0x11135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111358u;
    // 0x11135c: 0x24844480  addiu       $a0, $a0, 0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111358u, 0x111360u)) {
        return;
    }
    ctx->pc = 0x111360u;
label_111360:
    // 0x111360: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111364: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111364u;
    SET_GPR_U32(ctx, 31, 0x11136Cu);
    ctx->pc = 0x111368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111364u;
    // 0x111368: 0x24844488  addiu       $a0, $a0, 0x4488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111364u, 0x11136Cu)) {
        return;
    }
    ctx->pc = 0x11136Cu;
label_11136c:
    // 0x11136c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11136cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111370: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x111370u;
    SET_GPR_U32(ctx, 31, 0x111378u);
    ctx->pc = 0x111374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111370u;
    // 0x111374: 0x24844490  addiu       $a0, $a0, 0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x111370u, 0x111378u)) {
        return;
    }
    ctx->pc = 0x111378u;
label_111378:
    // 0x111378: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x111378u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x11137c: 0x2610a730  addiu       $s0, $s0, -0x58D0
    ctx->pc = 0x11137cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944560));
    // 0x111380: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x111380u;
    SET_GPR_U32(ctx, 31, 0x111388u);
    ctx->pc = 0x111384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111380u;
    // 0x111384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x111380u, 0x111388u)) {
        return;
    }
    ctx->pc = 0x111388u;
label_111388:
    // 0x111388: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x111388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11138c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11138cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111390: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x111390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x111394: 0xac624498  sw          $v0, 0x4498($v1)
    ctx->pc = 0x111394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4498u, _value); } while (0);
    // 0x111398: 0x248444a0  addiu       $a0, $a0, 0x44A0
    ctx->pc = 0x111398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17568));
    // 0x11139c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113a0: 0x24c615e0  addiu       $a2, $a2, 0x15E0
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5600));
    // 0x1113a4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1113A4u;
    SET_GPR_U32(ctx, 31, 0x1113ACu);
    ctx->pc = 0x1113A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A4u;
    // 0x1113a8: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1113A4u, 0x1113ACu)) {
        return;
    }
    ctx->pc = 0x1113ACu;
label_1113ac:
    // 0x1113ac: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1113ACu;
    {
        const bool branch_taken_0x1113ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ACu;
        // 0x1113b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ac) {
            ctx->pc = 0x1115D4u;
            goto label_1115d4;
        }
    }
    ctx->pc = 0x1113B4u;
label_1113b4:
    // 0x1113b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1113b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1113b8: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1113B8u;
    SET_GPR_U32(ctx, 31, 0x1113C0u);
    ctx->pc = 0x1113BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113B8u;
    // 0x1113bc: 0x248444a0  addiu       $a0, $a0, 0x44A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1113B8u, 0x1113C0u)) {
        return;
    }
    ctx->pc = 0x1113C0u;
label_1113c0:
    // 0x1113c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1113c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1113c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1113c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1113c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1113C8u;
    SET_GPR_U32(ctx, 31, 0x1113D0u);
    ctx->pc = 0x1113CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C8u;
    // 0x1113cc: 0x24844490  addiu       $a0, $a0, 0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1113C8u, 0x1113D0u)) {
        return;
    }
    ctx->pc = 0x1113D0u;
label_1113d0:
    // 0x1113d0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1113d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1113d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1113d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1113d8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1113D8u;
    SET_GPR_U32(ctx, 31, 0x1113E0u);
    ctx->pc = 0x1113DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113D8u;
    // 0x1113dc: 0x24844488  addiu       $a0, $a0, 0x4488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1113D8u, 0x1113E0u)) {
        return;
    }
    ctx->pc = 0x1113E0u;
label_1113e0:
    // 0x1113e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1113e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1113e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1113e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1113e8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1113E8u;
    SET_GPR_U32(ctx, 31, 0x1113F0u);
    ctx->pc = 0x1113ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E8u;
    // 0x1113ec: 0x24844480  addiu       $a0, $a0, 0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1113E8u, 0x1113F0u)) {
        return;
    }
    ctx->pc = 0x1113F0u;
label_1113f0:
    // 0x1113f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1113f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1113f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1113f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1113f8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1113F8u;
    SET_GPR_U32(ctx, 31, 0x111400u);
    ctx->pc = 0x1113FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113F8u;
    // 0x1113fc: 0x24844478  addiu       $a0, $a0, 0x4478 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1113F8u, 0x111400u)) {
        return;
    }
    ctx->pc = 0x111400u;
label_111400:
    // 0x111400: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111408: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111408u;
    SET_GPR_U32(ctx, 31, 0x111410u);
    ctx->pc = 0x11140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111408u;
    // 0x11140c: 0x24844470  addiu       $a0, $a0, 0x4470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111408u, 0x111410u)) {
        return;
    }
    ctx->pc = 0x111410u;
label_111410:
    // 0x111410: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111414: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111418: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111418u;
    SET_GPR_U32(ctx, 31, 0x111420u);
    ctx->pc = 0x11141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111418u;
    // 0x11141c: 0x24844468  addiu       $a0, $a0, 0x4468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111418u, 0x111420u)) {
        return;
    }
    ctx->pc = 0x111420u;
label_111420:
    // 0x111420: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111428: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111428u;
    SET_GPR_U32(ctx, 31, 0x111430u);
    ctx->pc = 0x11142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111428u;
    // 0x11142c: 0x24844460  addiu       $a0, $a0, 0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111428u, 0x111430u)) {
        return;
    }
    ctx->pc = 0x111430u;
label_111430:
    // 0x111430: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111438: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111438u;
    SET_GPR_U32(ctx, 31, 0x111440u);
    ctx->pc = 0x11143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111438u;
    // 0x11143c: 0x24844458  addiu       $a0, $a0, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111438u, 0x111440u)) {
        return;
    }
    ctx->pc = 0x111440u;
label_111440:
    // 0x111440: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111444: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111448: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111448u;
    SET_GPR_U32(ctx, 31, 0x111450u);
    ctx->pc = 0x11144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111448u;
    // 0x11144c: 0x24844450  addiu       $a0, $a0, 0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111448u, 0x111450u)) {
        return;
    }
    ctx->pc = 0x111450u;
label_111450:
    // 0x111450: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111454: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111458: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111458u;
    SET_GPR_U32(ctx, 31, 0x111460u);
    ctx->pc = 0x11145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111458u;
    // 0x11145c: 0x24844448  addiu       $a0, $a0, 0x4448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111458u, 0x111460u)) {
        return;
    }
    ctx->pc = 0x111460u;
label_111460:
    // 0x111460: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111468: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111468u;
    SET_GPR_U32(ctx, 31, 0x111470u);
    ctx->pc = 0x11146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111468u;
    // 0x11146c: 0x24844440  addiu       $a0, $a0, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111468u, 0x111470u)) {
        return;
    }
    ctx->pc = 0x111470u;
label_111470:
    // 0x111470: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111474: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111478: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111478u;
    SET_GPR_U32(ctx, 31, 0x111480u);
    ctx->pc = 0x11147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111478u;
    // 0x11147c: 0x24844438  addiu       $a0, $a0, 0x4438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111478u, 0x111480u)) {
        return;
    }
    ctx->pc = 0x111480u;
label_111480:
    // 0x111480: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111484: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111488: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111488u;
    SET_GPR_U32(ctx, 31, 0x111490u);
    ctx->pc = 0x11148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111488u;
    // 0x11148c: 0x24844430  addiu       $a0, $a0, 0x4430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111488u, 0x111490u)) {
        return;
    }
    ctx->pc = 0x111490u;
label_111490:
    // 0x111490: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111498: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111498u;
    SET_GPR_U32(ctx, 31, 0x1114A0u);
    ctx->pc = 0x11149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111498u;
    // 0x11149c: 0x24844428  addiu       $a0, $a0, 0x4428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111498u, 0x1114A0u)) {
        return;
    }
    ctx->pc = 0x1114A0u;
label_1114a0:
    // 0x1114a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1114a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1114a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114a8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1114A8u;
    SET_GPR_U32(ctx, 31, 0x1114B0u);
    ctx->pc = 0x1114ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114A8u;
    // 0x1114ac: 0x24844420  addiu       $a0, $a0, 0x4420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1114A8u, 0x1114B0u)) {
        return;
    }
    ctx->pc = 0x1114B0u;
label_1114b0:
    // 0x1114b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1114b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1114b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114b8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1114B8u;
    SET_GPR_U32(ctx, 31, 0x1114C0u);
    ctx->pc = 0x1114BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114B8u;
    // 0x1114bc: 0x24844418  addiu       $a0, $a0, 0x4418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1114B8u, 0x1114C0u)) {
        return;
    }
    ctx->pc = 0x1114C0u;
label_1114c0:
    // 0x1114c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1114c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1114c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1114C8u;
    SET_GPR_U32(ctx, 31, 0x1114D0u);
    ctx->pc = 0x1114CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114C8u;
    // 0x1114cc: 0x24844410  addiu       $a0, $a0, 0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1114C8u, 0x1114D0u)) {
        return;
    }
    ctx->pc = 0x1114D0u;
label_1114d0:
    // 0x1114d0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1114d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1114d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114d8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1114D8u;
    SET_GPR_U32(ctx, 31, 0x1114E0u);
    ctx->pc = 0x1114DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114D8u;
    // 0x1114dc: 0x24844408  addiu       $a0, $a0, 0x4408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1114D8u, 0x1114E0u)) {
        return;
    }
    ctx->pc = 0x1114E0u;
label_1114e0:
    // 0x1114e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1114e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1114e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114e8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1114E8u;
    SET_GPR_U32(ctx, 31, 0x1114F0u);
    ctx->pc = 0x1114ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E8u;
    // 0x1114ec: 0x24844400  addiu       $a0, $a0, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1114E8u, 0x1114F0u)) {
        return;
    }
    ctx->pc = 0x1114F0u;
label_1114f0:
    // 0x1114f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1114f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1114f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1114f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1114f8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1114F8u;
    SET_GPR_U32(ctx, 31, 0x111500u);
    ctx->pc = 0x1114FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114F8u;
    // 0x1114fc: 0x248443f8  addiu       $a0, $a0, 0x43F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1114F8u, 0x111500u)) {
        return;
    }
    ctx->pc = 0x111500u;
label_111500:
    // 0x111500: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111504: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111508: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111508u;
    SET_GPR_U32(ctx, 31, 0x111510u);
    ctx->pc = 0x11150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111508u;
    // 0x11150c: 0x248443f0  addiu       $a0, $a0, 0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111508u, 0x111510u)) {
        return;
    }
    ctx->pc = 0x111510u;
label_111510:
    // 0x111510: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111514: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111518: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111518u;
    SET_GPR_U32(ctx, 31, 0x111520u);
    ctx->pc = 0x11151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111518u;
    // 0x11151c: 0x248443e8  addiu       $a0, $a0, 0x43E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111518u, 0x111520u)) {
        return;
    }
    ctx->pc = 0x111520u;
label_111520:
    // 0x111520: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111524: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111528: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111528u;
    SET_GPR_U32(ctx, 31, 0x111530u);
    ctx->pc = 0x11152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111528u;
    // 0x11152c: 0x248443e0  addiu       $a0, $a0, 0x43E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111528u, 0x111530u)) {
        return;
    }
    ctx->pc = 0x111530u;
label_111530:
    // 0x111530: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111534: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111538: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111538u;
    SET_GPR_U32(ctx, 31, 0x111540u);
    ctx->pc = 0x11153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111538u;
    // 0x11153c: 0x248443d8  addiu       $a0, $a0, 0x43D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111538u, 0x111540u)) {
        return;
    }
    ctx->pc = 0x111540u;
label_111540:
    // 0x111540: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111544: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111548: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111548u;
    SET_GPR_U32(ctx, 31, 0x111550u);
    ctx->pc = 0x11154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111548u;
    // 0x11154c: 0x248443d0  addiu       $a0, $a0, 0x43D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111548u, 0x111550u)) {
        return;
    }
    ctx->pc = 0x111550u;
label_111550:
    // 0x111550: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111554: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111558: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111558u;
    SET_GPR_U32(ctx, 31, 0x111560u);
    ctx->pc = 0x11155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111558u;
    // 0x11155c: 0x248443c8  addiu       $a0, $a0, 0x43C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111558u, 0x111560u)) {
        return;
    }
    ctx->pc = 0x111560u;
label_111560:
    // 0x111560: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111564: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111568: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111568u;
    SET_GPR_U32(ctx, 31, 0x111570u);
    ctx->pc = 0x11156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111568u;
    // 0x11156c: 0x248443c0  addiu       $a0, $a0, 0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111568u, 0x111570u)) {
        return;
    }
    ctx->pc = 0x111570u;
label_111570:
    // 0x111570: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111574: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111578: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111578u;
    SET_GPR_U32(ctx, 31, 0x111580u);
    ctx->pc = 0x11157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111578u;
    // 0x11157c: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111578u, 0x111580u)) {
        return;
    }
    ctx->pc = 0x111580u;
label_111580:
    // 0x111580: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111584: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111588: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111588u;
    SET_GPR_U32(ctx, 31, 0x111590u);
    ctx->pc = 0x11158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111588u;
    // 0x11158c: 0x248443b0  addiu       $a0, $a0, 0x43B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111588u, 0x111590u)) {
        return;
    }
    ctx->pc = 0x111590u;
label_111590:
    // 0x111590: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111594: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111598: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111598u;
    SET_GPR_U32(ctx, 31, 0x1115A0u);
    ctx->pc = 0x11159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111598u;
    // 0x11159c: 0x248443a8  addiu       $a0, $a0, 0x43A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111598u, 0x1115A0u)) {
        return;
    }
    ctx->pc = 0x1115A0u;
label_1115a0:
    // 0x1115a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1115a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1115a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1115a8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1115A8u;
    SET_GPR_U32(ctx, 31, 0x1115B0u);
    ctx->pc = 0x1115ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115A8u;
    // 0x1115ac: 0x248443a0  addiu       $a0, $a0, 0x43A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1115A8u, 0x1115B0u)) {
        return;
    }
    ctx->pc = 0x1115B0u;
label_1115b0:
    // 0x1115b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1115b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1115b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1115b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1115b8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1115B8u;
    SET_GPR_U32(ctx, 31, 0x1115C0u);
    ctx->pc = 0x1115BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115B8u;
    // 0x1115bc: 0x24844398  addiu       $a0, $a0, 0x4398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1115B8u, 0x1115C0u)) {
        return;
    }
    ctx->pc = 0x1115C0u;
label_1115c0:
    // 0x1115c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1115c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1115c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1115C8u;
    SET_GPR_U32(ctx, 31, 0x1115D0u);
    ctx->pc = 0x1115CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115C8u;
    // 0x1115cc: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1115C8u, 0x1115D0u)) {
        return;
    }
    ctx->pc = 0x1115D0u;
label_1115d0:
    // 0x1115d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1115d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1115d4:
    // 0x1115d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1115d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1115d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1115D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1115DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D8u;
        // 0x1115dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1115D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1115E0u;
}
