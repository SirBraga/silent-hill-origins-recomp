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

// Function: sub_002274B0
// Address: 0x2274b0 - 0x227668
void sub_002274B0_0x2274b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002274B0_0x2274b0");
#endif

    switch (ctx->pc) {
        case 0x2274b0u: goto label_2274b0;
        case 0x2274b4u: goto label_2274b4;
        case 0x2274b8u: goto label_2274b8;
        case 0x2274bcu: goto label_2274bc;
        case 0x2274c0u: goto label_2274c0;
        case 0x2274c4u: goto label_2274c4;
        case 0x2274c8u: goto label_2274c8;
        case 0x2274ccu: goto label_2274cc;
        case 0x2274d0u: goto label_2274d0;
        case 0x2274d4u: goto label_2274d4;
        case 0x2274d8u: goto label_2274d8;
        case 0x2274dcu: goto label_2274dc;
        case 0x2274e0u: goto label_2274e0;
        case 0x2274e4u: goto label_2274e4;
        case 0x2274e8u: goto label_2274e8;
        case 0x2274ecu: goto label_2274ec;
        case 0x2274f0u: goto label_2274f0;
        case 0x2274f4u: goto label_2274f4;
        case 0x2274f8u: goto label_2274f8;
        case 0x2274fcu: goto label_2274fc;
        case 0x227500u: goto label_227500;
        case 0x227504u: goto label_227504;
        case 0x227508u: goto label_227508;
        case 0x22750cu: goto label_22750c;
        case 0x227510u: goto label_227510;
        case 0x227514u: goto label_227514;
        case 0x227518u: goto label_227518;
        case 0x22751cu: goto label_22751c;
        case 0x227520u: goto label_227520;
        case 0x227524u: goto label_227524;
        case 0x227528u: goto label_227528;
        case 0x22752cu: goto label_22752c;
        case 0x227530u: goto label_227530;
        case 0x227534u: goto label_227534;
        case 0x227538u: goto label_227538;
        case 0x22753cu: goto label_22753c;
        case 0x227540u: goto label_227540;
        case 0x227544u: goto label_227544;
        case 0x227548u: goto label_227548;
        case 0x22754cu: goto label_22754c;
        case 0x227550u: goto label_227550;
        case 0x227554u: goto label_227554;
        case 0x227558u: goto label_227558;
        case 0x22755cu: goto label_22755c;
        case 0x227560u: goto label_227560;
        case 0x227564u: goto label_227564;
        case 0x227568u: goto label_227568;
        case 0x22756cu: goto label_22756c;
        case 0x227570u: goto label_227570;
        case 0x227574u: goto label_227574;
        case 0x227578u: goto label_227578;
        case 0x22757cu: goto label_22757c;
        case 0x227580u: goto label_227580;
        case 0x227584u: goto label_227584;
        case 0x227588u: goto label_227588;
        case 0x22758cu: goto label_22758c;
        case 0x227590u: goto label_227590;
        case 0x227594u: goto label_227594;
        case 0x227598u: goto label_227598;
        case 0x22759cu: goto label_22759c;
        case 0x2275a0u: goto label_2275a0;
        case 0x2275a4u: goto label_2275a4;
        case 0x2275a8u: goto label_2275a8;
        case 0x2275acu: goto label_2275ac;
        case 0x2275b0u: goto label_2275b0;
        case 0x2275b4u: goto label_2275b4;
        case 0x2275b8u: goto label_2275b8;
        case 0x2275bcu: goto label_2275bc;
        case 0x2275c0u: goto label_2275c0;
        case 0x2275c4u: goto label_2275c4;
        case 0x2275c8u: goto label_2275c8;
        case 0x2275ccu: goto label_2275cc;
        case 0x2275d0u: goto label_2275d0;
        case 0x2275d4u: goto label_2275d4;
        case 0x2275d8u: goto label_2275d8;
        case 0x2275dcu: goto label_2275dc;
        case 0x2275e0u: goto label_2275e0;
        case 0x2275e4u: goto label_2275e4;
        case 0x2275e8u: goto label_2275e8;
        case 0x2275ecu: goto label_2275ec;
        case 0x2275f0u: goto label_2275f0;
        case 0x2275f4u: goto label_2275f4;
        case 0x2275f8u: goto label_2275f8;
        case 0x2275fcu: goto label_2275fc;
        case 0x227600u: goto label_227600;
        case 0x227604u: goto label_227604;
        case 0x227608u: goto label_227608;
        case 0x22760cu: goto label_22760c;
        case 0x227610u: goto label_227610;
        case 0x227614u: goto label_227614;
        case 0x227618u: goto label_227618;
        case 0x22761cu: goto label_22761c;
        case 0x227620u: goto label_227620;
        case 0x227624u: goto label_227624;
        case 0x227628u: goto label_227628;
        case 0x22762cu: goto label_22762c;
        case 0x227630u: goto label_227630;
        case 0x227634u: goto label_227634;
        case 0x227638u: goto label_227638;
        case 0x22763cu: goto label_22763c;
        case 0x227640u: goto label_227640;
        case 0x227644u: goto label_227644;
        case 0x227648u: goto label_227648;
        case 0x22764cu: goto label_22764c;
        case 0x227650u: goto label_227650;
        case 0x227654u: goto label_227654;
        case 0x227658u: goto label_227658;
        case 0x22765cu: goto label_22765c;
        case 0x227660u: goto label_227660;
        case 0x227664u: goto label_227664;
        default: break;
    }

    ctx->pc = 0x2274b0u;

label_2274b0:
    // 0x2274b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2274b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2274b4:
    // 0x2274b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2274b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2274b8:
    // 0x2274b8: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_2274bc:
    // 0x2274bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2274bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2274c0:
    // 0x2274c0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2274c4:
    // 0x2274c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2274c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2274c8:
    // 0x2274c8: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x2274c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2274cc:
    // 0x2274cc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2274ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2274d0:
    // 0x2274d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2274d4:
    // 0x2274d4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2274d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2274d8:
    // 0x2274d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2274d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2274dc:
    // 0x2274dc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2274dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_2274e0:
    // 0x2274e0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2274e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2274e4:
    // 0x2274e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2274e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2274e8:
    // 0x2274e8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2274e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2274ec:
    // 0x2274ec: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2274ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2274f0:
    // 0x2274f0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2274f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2274f4:
    // 0x2274f4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2274f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2274f8:
    // 0x2274f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2274f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2274fc:
    // 0x2274fc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2274fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_227500:
    // 0x227500: 0xc093dd6  jal         func_24F758
label_227504:
    if (ctx->pc == 0x227504u) {
        ctx->pc = 0x227504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227500u;
        // 0x227504: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227508u;
        goto label_227508;
    }
    ctx->pc = 0x227500u;
    SET_GPR_U32(ctx, 31, 0x227508u);
    ctx->pc = 0x227504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227500u;
    // 0x227504: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F758u, 0x227500u, 0x227508u)) {
        return;
    }
    ctx->pc = 0x227508u;
label_227508:
    // 0x227508: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22750c:
    if (ctx->pc == 0x22750Cu) {
        ctx->pc = 0x22750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227508u;
        // 0x22750c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227510u;
        goto label_227510;
    }
    ctx->pc = 0x227508u;
    {
        const bool branch_taken_0x227508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227508u;
        // 0x22750c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227508) {
            ctx->pc = 0x227528u;
            goto label_227528;
        }
    }
    ctx->pc = 0x227510u;
label_227510:
    // 0x227510: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_227514:
    if (ctx->pc == 0x227514u) {
        ctx->pc = 0x227514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227510u;
        // 0x227514: 0x24510fc8  addiu       $s1, $v0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227518u;
        goto label_227518;
    }
    ctx->pc = 0x227510u;
    {
        const bool branch_taken_0x227510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x227514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227510u;
        // 0x227514: 0x24510fc8  addiu       $s1, $v0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227510) {
            ctx->pc = 0x22752Cu;
            goto label_22752c;
        }
    }
    ctx->pc = 0x227518u;
label_227518:
    // 0x227518: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x227518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_22751c:
    // 0x22751c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_227520:
    if (ctx->pc == 0x227520u) {
        ctx->pc = 0x227520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22751Cu;
        // 0x227520: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227524u;
        goto label_227524;
    }
    ctx->pc = 0x22751Cu;
    {
        const bool branch_taken_0x22751c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22751Cu;
        // 0x227520: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22751c) {
            ctx->pc = 0x22757Cu;
            goto label_22757c;
        }
    }
    ctx->pc = 0x227524u;
label_227524:
    // 0x227524: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x227524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_227528:
    // 0x227528: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x227528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22752c:
    // 0x22752c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_227530:
    // 0x227530: 0x40f809  jalr        $v0
label_227534:
    if (ctx->pc == 0x227534u) {
        ctx->pc = 0x227534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227530u;
        // 0x227534: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227538u;
        goto label_227538;
    }
    ctx->pc = 0x227530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227538u);
        ctx->pc = 0x227534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227530u;
        // 0x227534: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227530u, 0x227538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227538u;
label_227538:
    // 0x227538: 0xc089b10  jal         func_226C40
label_22753c:
    if (ctx->pc == 0x22753Cu) {
        ctx->pc = 0x22753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227538u;
        // 0x22753c: 0x572021  addu        $a0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227540u;
        goto label_227540;
    }
    ctx->pc = 0x227538u;
    SET_GPR_U32(ctx, 31, 0x227540u);
    ctx->pc = 0x22753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227538u;
    // 0x22753c: 0x572021  addu        $a0, $v0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226C40u, 0x227538u, 0x227540u)) {
        return;
    }
    ctx->pc = 0x227540u;
label_227540:
    // 0x227540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227544:
    // 0x227544: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_227548:
    if (ctx->pc == 0x227548u) {
        ctx->pc = 0x227548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227544u;
        // 0x227548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22754Cu;
        goto label_22754c;
    }
    ctx->pc = 0x227544u;
    {
        const bool branch_taken_0x227544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227544u;
        // 0x227548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227544) {
            ctx->pc = 0x227638u;
            goto label_227638;
        }
    }
    ctx->pc = 0x22754Cu;
label_22754c:
    // 0x22754c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x22754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_227550:
    // 0x227550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227554:
    // 0x227554: 0x40f809  jalr        $v0
label_227558:
    if (ctx->pc == 0x227558u) {
        ctx->pc = 0x227558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227554u;
        // 0x227558: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22755Cu;
        goto label_22755c;
    }
    ctx->pc = 0x227554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22755Cu);
        ctx->pc = 0x227558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227554u;
        // 0x227558: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227554u, 0x22755Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22755Cu;
label_22755c:
    // 0x22755c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_227560:
    // 0x227560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227564:
    // 0x227564: 0x60f809  jalr        $v1
label_227568:
    if (ctx->pc == 0x227568u) {
        ctx->pc = 0x227568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227564u;
        // 0x227568: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22756Cu;
        goto label_22756c;
    }
    ctx->pc = 0x227564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22756Cu);
        ctx->pc = 0x227568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227564u;
        // 0x227568: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227564u, 0x22756Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22756Cu;
label_22756c:
    // 0x22756c: 0x10000032  b           . + 4 + (0x32 << 2)
label_227570:
    if (ctx->pc == 0x227570u) {
        ctx->pc = 0x227570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22756Cu;
        // 0x227570: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227574u;
        goto label_227574;
    }
    ctx->pc = 0x22756Cu;
    {
        const bool branch_taken_0x22756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22756Cu;
        // 0x227570: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22756c) {
            ctx->pc = 0x227638u;
            goto label_227638;
        }
    }
    ctx->pc = 0x227574u;
label_227574:
    // 0x227574: 0x10000030  b           . + 4 + (0x30 << 2)
label_227578:
    if (ctx->pc == 0x227578u) {
        ctx->pc = 0x227578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227574u;
        // 0x227578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22757Cu;
        goto label_22757c;
    }
    ctx->pc = 0x227574u;
    {
        const bool branch_taken_0x227574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227574u;
        // 0x227578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227574) {
            ctx->pc = 0x227638u;
            goto label_227638;
        }
    }
    ctx->pc = 0x22757Cu;
label_22757c:
    // 0x22757c: 0x8ec200e0  lw          $v0, 0xE0($s6)
    ctx->pc = 0x22757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
label_227580:
    // 0x227580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x227580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_227584:
    // 0x227584: 0x40f809  jalr        $v0
label_227588:
    if (ctx->pc == 0x227588u) {
        ctx->pc = 0x227588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227584u;
        // 0x227588: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22758Cu;
        goto label_22758c;
    }
    ctx->pc = 0x227584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22758Cu);
        ctx->pc = 0x227588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227584u;
        // 0x227588: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227584u, 0x22758Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22758Cu;
label_22758c:
    // 0x22758c: 0x8ec200e0  lw          $v0, 0xE0($s6)
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
label_227590:
    // 0x227590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x227590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_227594:
    // 0x227594: 0x40f809  jalr        $v0
label_227598:
    if (ctx->pc == 0x227598u) {
        ctx->pc = 0x227598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227594u;
        // 0x227598: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22759Cu;
        goto label_22759c;
    }
    ctx->pc = 0x227594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22759Cu);
        ctx->pc = 0x227598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227594u;
        // 0x227598: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227594u, 0x22759Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22759Cu;
label_22759c:
    // 0x22759c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22759cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2275a0:
    // 0x2275a0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2275a4:
    if (ctx->pc == 0x2275A4u) {
        ctx->pc = 0x2275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A0u;
        // 0x2275a4: 0x2339023  subu        $s2, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275A8u;
        goto label_2275a8;
    }
    ctx->pc = 0x2275A0u;
    {
        const bool branch_taken_0x2275a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A0u;
        // 0x2275a4: 0x2339023  subu        $s2, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275a0) {
            ctx->pc = 0x2275B0u;
            goto label_2275b0;
        }
    }
    ctx->pc = 0x2275A8u;
label_2275a8:
    // 0x2275a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2275ac:
    if (ctx->pc == 0x2275ACu) {
        ctx->pc = 0x2275ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A8u;
        // 0x2275ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275B0u;
        goto label_2275b0;
    }
    ctx->pc = 0x2275A8u;
    {
        const bool branch_taken_0x2275a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A8u;
        // 0x2275ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275a8) {
            ctx->pc = 0x2275C0u;
            goto label_2275c0;
        }
    }
    ctx->pc = 0x2275B0u;
label_2275b0:
    // 0x2275b0: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_2275b4:
    // 0x2275b4: 0x40f809  jalr        $v0
label_2275b8:
    if (ctx->pc == 0x2275B8u) {
        ctx->pc = 0x2275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275B4u;
        // 0x2275b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275BCu;
        goto label_2275bc;
    }
    ctx->pc = 0x2275B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2275BCu);
        ctx->pc = 0x2275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275B4u;
        // 0x2275b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275B4u, 0x2275BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2275BCu;
label_2275bc:
    // 0x2275bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2275bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2275c0:
    // 0x2275c0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2275c4:
    // 0x2275c4: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x2275c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2275c8:
    // 0x2275c8: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_2275cc:
    // 0x2275cc: 0x40f809  jalr        $v0
label_2275d0:
    if (ctx->pc == 0x2275D0u) {
        ctx->pc = 0x2275D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275CCu;
        // 0x2275d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275D4u;
        goto label_2275d4;
    }
    ctx->pc = 0x2275CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2275D4u);
        ctx->pc = 0x2275D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275CCu;
        // 0x2275d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2275CCu, 0x2275D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2275D4u;
label_2275d4:
    // 0x2275d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2275d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2275d8:
    // 0x2275d8: 0xc089b10  jal         func_226C40
label_2275dc:
    if (ctx->pc == 0x2275DCu) {
        ctx->pc = 0x2275DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275D8u;
        // 0x2275dc: 0x572021  addu        $a0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275E0u;
        goto label_2275e0;
    }
    ctx->pc = 0x2275D8u;
    SET_GPR_U32(ctx, 31, 0x2275E0u);
    ctx->pc = 0x2275DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275D8u;
    // 0x2275dc: 0x572021  addu        $a0, $v0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226C40u, 0x2275D8u, 0x2275E0u)) {
        return;
    }
    ctx->pc = 0x2275E0u;
label_2275e0:
    // 0x2275e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2275e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2275e4:
    // 0x2275e4: 0x1200ffe3  beqz        $s0, . + 4 + (-0x1D << 2)
label_2275e8:
    if (ctx->pc == 0x2275E8u) {
        ctx->pc = 0x2275E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275E4u;
        // 0x2275e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275ECu;
        goto label_2275ec;
    }
    ctx->pc = 0x2275E4u;
    {
        const bool branch_taken_0x2275e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275E4u;
        // 0x2275e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275e4) {
            ctx->pc = 0x227574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227574;
        }
    }
    ctx->pc = 0x2275ECu;
label_2275ec:
    // 0x2275ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2275ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2275f0:
    // 0x2275f0: 0xc075fdc  jal         func_1D7F70
label_2275f4:
    if (ctx->pc == 0x2275F4u) {
        ctx->pc = 0x2275F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275F0u;
        // 0x2275f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275F8u;
        goto label_2275f8;
    }
    ctx->pc = 0x2275F0u;
    SET_GPR_U32(ctx, 31, 0x2275F8u);
    ctx->pc = 0x2275F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275F0u;
    // 0x2275f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2275F0u, 0x2275F8u)) {
        return;
    }
    ctx->pc = 0x2275F8u;
label_2275f8:
    // 0x2275f8: 0x8e8200cc  lw          $v0, 0xCC($s4)
    ctx->pc = 0x2275f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_2275fc:
    // 0x2275fc: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2275fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_227600:
    // 0x227600: 0x40f809  jalr        $v0
label_227604:
    if (ctx->pc == 0x227604u) {
        ctx->pc = 0x227604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227600u;
        // 0x227604: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227608u;
        goto label_227608;
    }
    ctx->pc = 0x227600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227608u);
        ctx->pc = 0x227604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227600u;
        // 0x227604: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227600u, 0x227608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227608u;
label_227608:
    // 0x227608: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x227608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22760c:
    // 0x22760c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227610:
    // 0x227610: 0x60f809  jalr        $v1
label_227614:
    if (ctx->pc == 0x227614u) {
        ctx->pc = 0x227614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227610u;
        // 0x227614: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227618u;
        goto label_227618;
    }
    ctx->pc = 0x227610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x227618u);
        ctx->pc = 0x227614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227610u;
        // 0x227614: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227610u, 0x227618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227618u;
label_227618:
    // 0x227618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_22761c:
    if (ctx->pc == 0x22761Cu) {
        ctx->pc = 0x22761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227618u;
        // 0x22761c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227620u;
        goto label_227620;
    }
    ctx->pc = 0x227618u;
    {
        const bool branch_taken_0x227618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227618u;
        // 0x22761c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227618) {
            ctx->pc = 0x227638u;
            goto label_227638;
        }
    }
    ctx->pc = 0x227620u;
label_227620:
    // 0x227620: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_227624:
    if (ctx->pc == 0x227624u) {
        ctx->pc = 0x227624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227620u;
        // 0x227624: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227628u;
        goto label_227628;
    }
    ctx->pc = 0x227620u;
    {
        const bool branch_taken_0x227620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x227624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227620u;
        // 0x227624: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227620) {
            ctx->pc = 0x227638u;
            goto label_227638;
        }
    }
    ctx->pc = 0x227628u;
label_227628:
    // 0x227628: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_22762c:
    // 0x22762c: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
label_227630:
    if (ctx->pc == 0x227630u) {
        ctx->pc = 0x227630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22762Cu;
        // 0x227630: 0x8ec200e0  lw          $v0, 0xE0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227634u;
        goto label_227634;
    }
    ctx->pc = 0x22762Cu;
    {
        const bool branch_taken_0x22762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22762c) {
            ctx->pc = 0x227630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22762Cu;
            // 0x227630: 0x8ec200e0  lw          $v0, 0xE0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227580;
        }
    }
    ctx->pc = 0x227634u;
label_227634:
    // 0x227634: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x227634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_227638:
    // 0x227638: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x227638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_22763c:
    // 0x22763c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x22763cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_227640:
    // 0x227640: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x227640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_227644:
    // 0x227644: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x227644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_227648:
    // 0x227648: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x227648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22764c:
    // 0x22764c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22764cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_227650:
    // 0x227650: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x227650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_227654:
    // 0x227654: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x227654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_227658:
    // 0x227658: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x227658u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22765c:
    // 0x22765c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227660:
    // 0x227660: 0x3e00008  jr          $ra
label_227664:
    if (ctx->pc == 0x227664u) {
        ctx->pc = 0x227664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227660u;
        // 0x227664: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227668u;
        goto label_fallthrough_0x227660;
    }
    ctx->pc = 0x227660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227660u;
        // 0x227664: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x227660:
    ctx->pc = 0x227668u;
}
