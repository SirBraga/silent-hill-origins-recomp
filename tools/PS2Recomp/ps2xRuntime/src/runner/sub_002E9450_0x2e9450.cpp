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

// Function: sub_002E9450
// Address: 0x2e9450 - 0x2e96e0
void sub_002E9450_0x2e9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9450_0x2e9450");
#endif

    switch (ctx->pc) {
        case 0x2e947cu: goto label_2e947c;
        case 0x2e9494u: goto label_2e9494;
        case 0x2e94bcu: goto label_2e94bc;
        case 0x2e94c4u: goto label_2e94c4;
        case 0x2e94ccu: goto label_2e94cc;
        case 0x2e94f4u: goto label_2e94f4;
        case 0x2e94fcu: goto label_2e94fc;
        case 0x2e9508u: goto label_2e9508;
        case 0x2e9570u: goto label_2e9570;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95b0u: goto label_2e95b0;
        case 0x2e95d4u: goto label_2e95d4;
        case 0x2e95dcu: goto label_2e95dc;
        case 0x2e961cu: goto label_2e961c;
        case 0x2e9624u: goto label_2e9624;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e9650u: goto label_2e9650;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e967cu: goto label_2e967c;
        case 0x2e9684u: goto label_2e9684;
        case 0x2e96b0u: goto label_2e96b0;
        default: break;
    }

    ctx->pc = 0x2e9450u;

    // 0x2e9450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e9454: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e9454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e9458: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e9458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e945c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e945cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9460: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e9460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2e9464: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x2e9464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2e9468: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e9468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2e946c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2e9470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9474: 0xc0badda  jal         func_2EB768
    ctx->pc = 0x2E9474u;
    SET_GPR_U32(ctx, 31, 0x2E947Cu);
    ctx->pc = 0x2E9478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9474u;
    // 0x2e9478: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB768u, 0x2E9474u, 0x2E947Cu)) {
        return;
    }
    ctx->pc = 0x2E947Cu;
label_2e947c:
    // 0x2e947c: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2E947Cu;
    {
        const bool branch_taken_0x2e947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E947Cu;
        // 0x2e9480: 0x8f828c84  lw          $v0, -0x737C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e947c) {
            ctx->pc = 0x2E96B8u;
            goto label_2e96b8;
        }
    }
    ctx->pc = 0x2E9484u;
    // 0x2e9484: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E9484u;
    {
        const bool branch_taken_0x2e9484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9484u;
        // 0x2e9488: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9484) {
            ctx->pc = 0x2E9500u;
            goto label_2e9500;
        }
    }
    ctx->pc = 0x2E948Cu;
    // 0x2e948c: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E948Cu;
    SET_GPR_U32(ctx, 31, 0x2E9494u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E948Cu, 0x2E9494u)) {
        return;
    }
    ctx->pc = 0x2E9494u;
label_2e9494:
    // 0x2e9494: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
    // 0x2e9498: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e9498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e949c: 0x256be480  addiu       $t3, $t3, -0x1B80
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960256));
    // 0x2e94a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e94a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e94a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e94a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94ac: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e94b0: 0x278a8c84  addiu       $t2, $gp, -0x737C
    ctx->pc = 0x2e94b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937732));
    // 0x2e94b4: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E94B4u;
    SET_GPR_U32(ctx, 31, 0x2E94BCu);
    ctx->pc = 0x2E94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94B4u;
    // 0x2e94b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E94B4u, 0x2E94BCu)) {
        return;
    }
    ctx->pc = 0x2E94BCu;
label_2e94bc:
    // 0x2e94bc: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E94BCu;
    SET_GPR_U32(ctx, 31, 0x2E94C4u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E94BCu, 0x2E94C4u)) {
        return;
    }
    ctx->pc = 0x2E94C4u;
label_2e94c4:
    // 0x2e94c4: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E94C4u;
    SET_GPR_U32(ctx, 31, 0x2E94CCu);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E94C4u, 0x2E94CCu)) {
        return;
    }
    ctx->pc = 0x2E94CCu;
label_2e94cc:
    // 0x2e94cc: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
    // 0x2e94d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e94d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94d4: 0x256be540  addiu       $t3, $t3, -0x1AC0
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960448));
    // 0x2e94d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e94d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e94dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e94e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94e4: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2e94e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2e94e8: 0x278a8c88  addiu       $t2, $gp, -0x7378
    ctx->pc = 0x2e94e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937736));
    // 0x2e94ec: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E94ECu;
    SET_GPR_U32(ctx, 31, 0x2E94F4u);
    ctx->pc = 0x2E94F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94ECu;
    // 0x2e94f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E94ECu, 0x2E94F4u)) {
        return;
    }
    ctx->pc = 0x2E94F4u;
label_2e94f4:
    // 0x2e94f4: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E94F4u;
    SET_GPR_U32(ctx, 31, 0x2E94FCu);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E94F4u, 0x2E94FCu)) {
        return;
    }
    ctx->pc = 0x2E94FCu;
label_2e94fc:
    // 0x2e94fc: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_2e9500:
    // 0x2e9500: 0xc0bb714  jal         func_2EDC50
    ctx->pc = 0x2E9500u;
    SET_GPR_U32(ctx, 31, 0x2E9508u);
    ctx->pc = 0x2E9504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9500u;
    // 0x2e9504: 0x26541044  addiu       $s4, $s2, 0x1044 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDC50u, 0x2E9500u, 0x2E9508u)) {
        return;
    }
    ctx->pc = 0x2E9508u;
label_2e9508:
    // 0x2e9508: 0xae201f00  sw          $zero, 0x1F00($s1)
    ctx->pc = 0x2e9508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7936), GPR_U32(ctx, 0));
    // 0x2e950c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9510: 0xae201f04  sw          $zero, 0x1F04($s1)
    ctx->pc = 0x2e9510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7940), GPR_U32(ctx, 0));
    // 0x2e9514: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e9514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9518: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e951c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9520: 0xde221f00  ld          $v0, 0x1F00($s1)
    ctx->pc = 0x2e9520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 7936)));
    // 0x2e9524: 0x26472080  addiu       $a3, $s2, 0x2080
    ctx->pc = 0x2e9524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8320));
    // 0x2e9528: 0xae231f58  sw          $v1, 0x1F58($s1)
    ctx->pc = 0x2e9528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8024), GPR_U32(ctx, 3));
    // 0x2e952c: 0x26431f80  addiu       $v1, $s2, 0x1F80
    ctx->pc = 0x2e952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8064));
    // 0x2e9530: 0xfe220ec0  sd          $v0, 0xEC0($s1)
    ctx->pc = 0x2e9530u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 3776), GPR_U64(ctx, 2));
    // 0x2e9534: 0xae241f60  sw          $a0, 0x1F60($s1)
    ctx->pc = 0x2e9534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8032), GPR_U32(ctx, 4));
    // 0x2e9538: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2e9538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e953c: 0xae261f40  sw          $a2, 0x1F40($s1)
    ctx->pc = 0x2e953cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8000), GPR_U32(ctx, 6));
    // 0x2e9540: 0x26420f40  addiu       $v0, $s2, 0xF40
    ctx->pc = 0x2e9540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
    // 0x2e9544: 0xae252004  sw          $a1, 0x2004($s1)
    ctx->pc = 0x2e9544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8196), GPR_U32(ctx, 5));
    // 0x2e9548: 0xae201008  sw          $zero, 0x1008($s1)
    ctx->pc = 0x2e9548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4104), GPR_U32(ctx, 0));
    // 0x2e954c: 0xae201f08  sw          $zero, 0x1F08($s1)
    ctx->pc = 0x2e954cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7944), GPR_U32(ctx, 0));
    // 0x2e9550: 0xae200ec8  sw          $zero, 0xEC8($s1)
    ctx->pc = 0x2e9550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3784), GPR_U32(ctx, 0));
    // 0x2e9554: 0xae201f50  sw          $zero, 0x1F50($s1)
    ctx->pc = 0x2e9554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8016), GPR_U32(ctx, 0));
    // 0x2e9558: 0xae201f54  sw          $zero, 0x1F54($s1)
    ctx->pc = 0x2e9558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8020), GPR_U32(ctx, 0));
    // 0x2e955c: 0xae201f5c  sw          $zero, 0x1F5C($s1)
    ctx->pc = 0x2e955cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8028), GPR_U32(ctx, 0));
    // 0x2e9560: 0xae201f44  sw          $zero, 0x1F44($s1)
    ctx->pc = 0x2e9560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8004), GPR_U32(ctx, 0));
    // 0x2e9564: 0xae201f48  sw          $zero, 0x1F48($s1)
    ctx->pc = 0x2e9564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8008), GPR_U32(ctx, 0));
    // 0x2e9568: 0xae201f4c  sw          $zero, 0x1F4C($s1)
    ctx->pc = 0x2e9568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8012), GPR_U32(ctx, 0));
    // 0x2e956c: 0xa2201f64  sb          $zero, 0x1F64($s1)
    ctx->pc = 0x2e956cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8036), (uint8_t)GPR_U32(ctx, 0));
label_2e9570:
    // 0x2e9570: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2e9570u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9574: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x2e9574u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e9578: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2e9578u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2e957c: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x2e957cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x2e9580: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2e9584: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E9584u;
    {
        const bool branch_taken_0x2e9584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2E9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9584u;
        // 0x2e9588: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9584) {
            ctx->pc = 0x2E9570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9570;
        }
    }
    ctx->pc = 0x2E958Cu;
    // 0x2e958c: 0xc0b7190  jal         func_2DC640
    ctx->pc = 0x2E958Cu;
    SET_GPR_U32(ctx, 31, 0x2E9594u);
    ctx->pc = 0x2DC640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC640u, 0x2E958Cu, 0x2E9594u)) {
        return;
    }
    ctx->pc = 0x2E9594u;
label_2e9594:
    // 0x2e9594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e9598: 0xc0b7190  jal         func_2DC640
    ctx->pc = 0x2E9598u;
    SET_GPR_U32(ctx, 31, 0x2E95A0u);
    ctx->pc = 0x2E959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9598u;
    // 0x2e959c: 0xae220e98  sw          $v0, 0xE98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 3736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC640u, 0x2E9598u, 0x2E95A0u)) {
        return;
    }
    ctx->pc = 0x2E95A0u;
label_2e95a0:
    // 0x2e95a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e95a4: 0xae201004  sw          $zero, 0x1004($s1)
    ctx->pc = 0x2e95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4100), GPR_U32(ctx, 0));
    // 0x2e95a8: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E95A8u;
    SET_GPR_U32(ctx, 31, 0x2E95B0u);
    ctx->pc = 0x2E95ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95A8u;
    // 0x2e95ac: 0xae222008  sw          $v0, 0x2008($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E95A8u, 0x2E95B0u)) {
        return;
    }
    ctx->pc = 0x2E95B0u;
label_2e95b0:
    // 0x2e95b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e95b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e95b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95b8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2e95b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95bc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2e95bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e95c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95c8: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x2e95c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e95cc: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E95CCu;
    SET_GPR_U32(ctx, 31, 0x2E95D4u);
    ctx->pc = 0x2E95D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95CCu;
    // 0x2e95d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E95CCu, 0x2E95D4u)) {
        return;
    }
    ctx->pc = 0x2E95D4u;
label_2e95d4:
    // 0x2e95d4: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E95D4u;
    SET_GPR_U32(ctx, 31, 0x2E95DCu);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E95D4u, 0x2E95DCu)) {
        return;
    }
    ctx->pc = 0x2E95DCu;
label_2e95dc:
    // 0x2e95dc: 0x8e241004  lw          $a0, 0x1004($s1)
    ctx->pc = 0x2e95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x2e95e0: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E95E0u;
    {
        const bool branch_taken_0x2e95e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95E0u;
        // 0x2e95e4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95e0) {
            ctx->pc = 0x2E96B8u;
            goto label_2e96b8;
        }
    }
    ctx->pc = 0x2E95E8u;
    // 0x2e95e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e95ec: 0x2450e480  addiu       $s0, $v0, -0x1B80
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x2e95f0: 0xac44e480  sw          $a0, -0x1B80($v0)
    ctx->pc = 0x2e95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960256), GPR_U32(ctx, 4));
    // 0x2e95f4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2e95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2e95f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e95f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95fc: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x2e95fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x2e9600: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e9604: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e9604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e9608: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2e9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e960c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2e9610: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2e9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2e9614: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2E9614u;
    SET_GPR_U32(ctx, 31, 0x2E961Cu);
    ctx->pc = 0x2E9618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9614u;
    // 0x2e9618: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2E9614u, 0x2E961Cu)) {
        return;
    }
    ctx->pc = 0x2E961Cu;
label_2e961c:
    // 0x2e961c: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E961Cu;
    SET_GPR_U32(ctx, 31, 0x2E9624u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E961Cu, 0x2E9624u)) {
        return;
    }
    ctx->pc = 0x2E9624u;
label_2e9624:
    // 0x2e9624: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x2e9624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
    // 0x2e9628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e9628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e962c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e962cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9630: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2e9630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2e9634: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2e9634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e9638: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e963c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e963cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9640: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E9640u;
    SET_GPR_U32(ctx, 31, 0x2E9648u);
    ctx->pc = 0x2E9644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9640u;
    // 0x2e9644: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E9640u, 0x2E9648u)) {
        return;
    }
    ctx->pc = 0x2E9648u;
label_2e9648:
    // 0x2e9648: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E9648u;
    SET_GPR_U32(ctx, 31, 0x2E9650u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E9648u, 0x2E9650u)) {
        return;
    }
    ctx->pc = 0x2E9650u;
label_2e9650:
    // 0x2e9650: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E9650u;
    SET_GPR_U32(ctx, 31, 0x2E9658u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E9650u, 0x2E9658u)) {
        return;
    }
    ctx->pc = 0x2E9658u;
label_2e9658:
    // 0x2e9658: 0x8e2b1004  lw          $t3, 0x1004($s1)
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x2e965c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e965cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9660: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e9660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e966c: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2e9670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9674: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E9674u;
    SET_GPR_U32(ctx, 31, 0x2E967Cu);
    ctx->pc = 0x2E9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9674u;
    // 0x2e9678: 0x262a1000  addiu       $t2, $s1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E9674u, 0x2E967Cu)) {
        return;
    }
    ctx->pc = 0x2E967Cu;
label_2e967c:
    // 0x2e967c: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E967Cu;
    SET_GPR_U32(ctx, 31, 0x2E9684u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E967Cu, 0x2E9684u)) {
        return;
    }
    ctx->pc = 0x2E9684u;
label_2e9684:
    // 0x2e9684: 0x8e231000  lw          $v1, 0x1000($s1)
    ctx->pc = 0x2e9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4096)));
    // 0x2e9688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e968c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9690: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2e9690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2e9694: 0x246601bc  addiu       $a2, $v1, 0x1BC
    ctx->pc = 0x2e9694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x2e9698: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e9698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e969c: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x2e969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2e96a0: 0x2485203f  addiu       $a1, $a0, 0x203F
    ctx->pc = 0x2e96a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8255));
    // 0x2e96a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e96a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e96a8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2E96A8u;
    SET_GPR_U32(ctx, 31, 0x2E96B0u);
    ctx->pc = 0x2E96ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96A8u;
    // 0x2e96ac: 0xae2601b4  sw          $a2, 0x1B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2E96A8u, 0x2E96B0u)) {
        return;
    }
    ctx->pc = 0x2E96B0u;
label_2e96b0:
    // 0x2e96b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96B0u;
    {
        const bool branch_taken_0x2e96b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96B0u;
        // 0x2e96b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96b0) {
            ctx->pc = 0x2E96BCu;
            goto label_2e96bc;
        }
    }
    ctx->pc = 0x2E96B8u;
label_2e96b8:
    // 0x2e96b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e96b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e96bc:
    // 0x2e96bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e96bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e96c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e96c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e96c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e96c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e96c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e96c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e96cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e96ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e96d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e96d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e96d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E96D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96D4u;
        // 0x2e96d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E96D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E96DCu;
    // 0x2e96dc: 0x0  nop
    ctx->pc = 0x2e96dcu;
    // NOP
    ctx->pc = 0x2e96e0u;
}
