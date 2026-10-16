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

// Function: sub_00258280
// Address: 0x258280 - 0x258380
void sub_00258280_0x258280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258280_0x258280");
#endif

    switch (ctx->pc) {
        case 0x258280u: goto label_258280;
        case 0x258284u: goto label_258284;
        case 0x258288u: goto label_258288;
        case 0x25828cu: goto label_25828c;
        case 0x258290u: goto label_258290;
        case 0x258294u: goto label_258294;
        case 0x258298u: goto label_258298;
        case 0x25829cu: goto label_25829c;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582a4u: goto label_2582a4;
        case 0x2582a8u: goto label_2582a8;
        case 0x2582acu: goto label_2582ac;
        case 0x2582b0u: goto label_2582b0;
        case 0x2582b4u: goto label_2582b4;
        case 0x2582b8u: goto label_2582b8;
        case 0x2582bcu: goto label_2582bc;
        case 0x2582c0u: goto label_2582c0;
        case 0x2582c4u: goto label_2582c4;
        case 0x2582c8u: goto label_2582c8;
        case 0x2582ccu: goto label_2582cc;
        case 0x2582d0u: goto label_2582d0;
        case 0x2582d4u: goto label_2582d4;
        case 0x2582d8u: goto label_2582d8;
        case 0x2582dcu: goto label_2582dc;
        case 0x2582e0u: goto label_2582e0;
        case 0x2582e4u: goto label_2582e4;
        case 0x2582e8u: goto label_2582e8;
        case 0x2582ecu: goto label_2582ec;
        case 0x2582f0u: goto label_2582f0;
        case 0x2582f4u: goto label_2582f4;
        case 0x2582f8u: goto label_2582f8;
        case 0x2582fcu: goto label_2582fc;
        case 0x258300u: goto label_258300;
        case 0x258304u: goto label_258304;
        case 0x258308u: goto label_258308;
        case 0x25830cu: goto label_25830c;
        case 0x258310u: goto label_258310;
        case 0x258314u: goto label_258314;
        case 0x258318u: goto label_258318;
        case 0x25831cu: goto label_25831c;
        case 0x258320u: goto label_258320;
        case 0x258324u: goto label_258324;
        case 0x258328u: goto label_258328;
        case 0x25832cu: goto label_25832c;
        case 0x258330u: goto label_258330;
        case 0x258334u: goto label_258334;
        case 0x258338u: goto label_258338;
        case 0x25833cu: goto label_25833c;
        case 0x258340u: goto label_258340;
        case 0x258344u: goto label_258344;
        case 0x258348u: goto label_258348;
        case 0x25834cu: goto label_25834c;
        case 0x258350u: goto label_258350;
        case 0x258354u: goto label_258354;
        case 0x258358u: goto label_258358;
        case 0x25835cu: goto label_25835c;
        case 0x258360u: goto label_258360;
        case 0x258364u: goto label_258364;
        case 0x258368u: goto label_258368;
        case 0x25836cu: goto label_25836c;
        case 0x258370u: goto label_258370;
        case 0x258374u: goto label_258374;
        case 0x258378u: goto label_258378;
        case 0x25837cu: goto label_25837c;
        default: break;
    }

    ctx->pc = 0x258280u;

label_258280:
    // 0x258280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_258284:
    // 0x258284: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x258284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_258288:
    // 0x258288: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x258288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25828c:
    // 0x25828c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25828cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258290:
    // 0x258290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_258294:
    // 0x258294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x258294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_258298:
    // 0x258298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25829c:
    // 0x25829c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x25829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2582a0:
    // 0x2582a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2582a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2582a4:
    // 0x2582a4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2582a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2582a8:
    // 0x2582a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2582ac:
    if (ctx->pc == 0x2582ACu) {
        ctx->pc = 0x2582ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582A8u;
        // 0x2582ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582B0u;
        goto label_2582b0;
    }
    ctx->pc = 0x2582A8u;
    {
        const bool branch_taken_0x2582a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582A8u;
        // 0x2582ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582a8) {
            ctx->pc = 0x2582C0u;
            goto label_2582c0;
        }
    }
    ctx->pc = 0x2582B0u;
label_2582b0:
    // 0x2582b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2582b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2582b4:
    // 0x2582b4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2582b8:
    // 0x2582b8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2582bc:
    if (ctx->pc == 0x2582BCu) {
        ctx->pc = 0x2582BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B8u;
        // 0x2582bc: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582C0u;
        goto label_2582c0;
    }
    ctx->pc = 0x2582B8u;
    {
        const bool branch_taken_0x2582b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B8u;
        // 0x2582bc: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582b8) {
            ctx->pc = 0x258328u;
            goto label_258328;
        }
    }
    ctx->pc = 0x2582C0u;
label_2582c0:
    // 0x2582c0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2582c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2582c4:
    // 0x2582c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2582c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2582c8:
    // 0x2582c8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2582cc:
    if (ctx->pc == 0x2582CCu) {
        ctx->pc = 0x2582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582C8u;
        // 0x2582cc: 0x49080  sll         $s2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582D0u;
        goto label_2582d0;
    }
    ctx->pc = 0x2582C8u;
    {
        const bool branch_taken_0x2582c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582C8u;
        // 0x2582cc: 0x49080  sll         $s2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582c8) {
            ctx->pc = 0x2582F4u;
            goto label_2582f4;
        }
    }
    ctx->pc = 0x2582D0u;
label_2582d0:
    // 0x2582d0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2582d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2582d4:
    // 0x2582d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2582d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2582d8:
    // 0x2582d8: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x2582d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_2582dc:
    // 0x2582dc: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x2582dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_2582e0:
    // 0x2582e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2582e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2582e4:
    // 0x2582e4: 0x40f809  jalr        $v0
label_2582e8:
    if (ctx->pc == 0x2582E8u) {
        ctx->pc = 0x2582E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582E4u;
        // 0x2582e8: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582ECu;
        goto label_2582ec;
    }
    ctx->pc = 0x2582E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2582ECu);
        ctx->pc = 0x2582E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582E4u;
        // 0x2582e8: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2582E4u, 0x2582ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2582ECu;
label_2582ec:
    // 0x2582ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_2582f0:
    if (ctx->pc == 0x2582F0u) {
        ctx->pc = 0x2582F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582ECu;
        // 0x2582f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582F4u;
        goto label_2582f4;
    }
    ctx->pc = 0x2582ECu;
    {
        const bool branch_taken_0x2582ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582ECu;
        // 0x2582f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582ec) {
            ctx->pc = 0x258300u;
            goto label_258300;
        }
    }
    ctx->pc = 0x2582F4u;
label_2582f4:
    // 0x2582f4: 0xc09605c  jal         func_258170
label_2582f8:
    if (ctx->pc == 0x2582F8u) {
        ctx->pc = 0x2582FCu;
        goto label_2582fc;
    }
    ctx->pc = 0x2582F4u;
    SET_GPR_U32(ctx, 31, 0x2582FCu);
    ctx->pc = 0x258170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258170u, 0x2582F4u, 0x2582FCu)) {
        return;
    }
    ctx->pc = 0x2582FCu;
label_2582fc:
    // 0x2582fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2582fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258300:
    // 0x258300: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_258304:
    if (ctx->pc == 0x258304u) {
        ctx->pc = 0x258304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258300u;
        // 0x258304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258308u;
        goto label_258308;
    }
    ctx->pc = 0x258300u;
    {
        const bool branch_taken_0x258300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258300u;
        // 0x258304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258300) {
            ctx->pc = 0x258344u;
            goto label_258344;
        }
    }
    ctx->pc = 0x258308u;
label_258308:
    // 0x258308: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x258308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_25830c:
    // 0x25830c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258310:
    // 0x258310: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x258310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_258314:
    // 0x258314: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x258314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_258318:
    // 0x258318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25831c:
    // 0x25831c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_258320:
    // 0x258320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_258324:
    // 0x258324: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x258324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_258328:
    // 0x258328: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x258328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_25832c:
    // 0x25832c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_258330:
    // 0x258330: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x258330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
label_258334:
    // 0x258334: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x258334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_258338:
    // 0x258338: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x258338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25833c:
    // 0x25833c: 0x1000000a  b           . + 4 + (0xA << 2)
label_258340:
    if (ctx->pc == 0x258340u) {
        ctx->pc = 0x258340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25833Cu;
        // 0x258340: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258344u;
        goto label_258344;
    }
    ctx->pc = 0x25833Cu;
    {
        const bool branch_taken_0x25833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25833Cu;
        // 0x258340: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25833c) {
            ctx->pc = 0x258368u;
            goto label_258368;
        }
    }
    ctx->pc = 0x258344u;
label_258344:
    // 0x258344: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x258344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_258348:
    // 0x258348: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x258348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25834c:
    // 0x25834c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258350:
    // 0x258350: 0xc092848  jal         func_24A120
label_258354:
    if (ctx->pc == 0x258354u) {
        ctx->pc = 0x258354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258350u;
        // 0x258354: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258358u;
        goto label_258358;
    }
    ctx->pc = 0x258350u;
    SET_GPR_U32(ctx, 31, 0x258358u);
    ctx->pc = 0x258354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258350u;
    // 0x258354: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x258350u, 0x258358u)) {
        return;
    }
    ctx->pc = 0x258358u;
label_258358:
    // 0x258358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x258358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25835c:
    // 0x25835c: 0xc09281a  jal         func_24A068
label_258360:
    if (ctx->pc == 0x258360u) {
        ctx->pc = 0x258360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25835Cu;
        // 0x258360: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258364u;
        goto label_258364;
    }
    ctx->pc = 0x25835Cu;
    SET_GPR_U32(ctx, 31, 0x258364u);
    ctx->pc = 0x258360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25835Cu;
    // 0x258360: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25835Cu, 0x258364u)) {
        return;
    }
    ctx->pc = 0x258364u;
label_258364:
    // 0x258364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_258368:
    // 0x258368: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x258368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25836c:
    // 0x25836c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25836cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258370:
    // 0x258370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_258374:
    // 0x258374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_258378:
    // 0x258378: 0x3e00008  jr          $ra
label_25837c:
    if (ctx->pc == 0x25837Cu) {
        ctx->pc = 0x25837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258378u;
        // 0x25837c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258380u;
        goto label_fallthrough_0x258378;
    }
    ctx->pc = 0x258378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258378u;
        // 0x25837c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258378:
    ctx->pc = 0x258380u;
}
