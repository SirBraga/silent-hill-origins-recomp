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

// Function: sub_00256250
// Address: 0x256250 - 0x256498
void sub_00256250_0x256250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256250_0x256250");
#endif

    switch (ctx->pc) {
        case 0x256250u: goto label_256250;
        case 0x256254u: goto label_256254;
        case 0x256258u: goto label_256258;
        case 0x25625cu: goto label_25625c;
        case 0x256260u: goto label_256260;
        case 0x256264u: goto label_256264;
        case 0x256268u: goto label_256268;
        case 0x25626cu: goto label_25626c;
        case 0x256270u: goto label_256270;
        case 0x256274u: goto label_256274;
        case 0x256278u: goto label_256278;
        case 0x25627cu: goto label_25627c;
        case 0x256280u: goto label_256280;
        case 0x256284u: goto label_256284;
        case 0x256288u: goto label_256288;
        case 0x25628cu: goto label_25628c;
        case 0x256290u: goto label_256290;
        case 0x256294u: goto label_256294;
        case 0x256298u: goto label_256298;
        case 0x25629cu: goto label_25629c;
        case 0x2562a0u: goto label_2562a0;
        case 0x2562a4u: goto label_2562a4;
        case 0x2562a8u: goto label_2562a8;
        case 0x2562acu: goto label_2562ac;
        case 0x2562b0u: goto label_2562b0;
        case 0x2562b4u: goto label_2562b4;
        case 0x2562b8u: goto label_2562b8;
        case 0x2562bcu: goto label_2562bc;
        case 0x2562c0u: goto label_2562c0;
        case 0x2562c4u: goto label_2562c4;
        case 0x2562c8u: goto label_2562c8;
        case 0x2562ccu: goto label_2562cc;
        case 0x2562d0u: goto label_2562d0;
        case 0x2562d4u: goto label_2562d4;
        case 0x2562d8u: goto label_2562d8;
        case 0x2562dcu: goto label_2562dc;
        case 0x2562e0u: goto label_2562e0;
        case 0x2562e4u: goto label_2562e4;
        case 0x2562e8u: goto label_2562e8;
        case 0x2562ecu: goto label_2562ec;
        case 0x2562f0u: goto label_2562f0;
        case 0x2562f4u: goto label_2562f4;
        case 0x2562f8u: goto label_2562f8;
        case 0x2562fcu: goto label_2562fc;
        case 0x256300u: goto label_256300;
        case 0x256304u: goto label_256304;
        case 0x256308u: goto label_256308;
        case 0x25630cu: goto label_25630c;
        case 0x256310u: goto label_256310;
        case 0x256314u: goto label_256314;
        case 0x256318u: goto label_256318;
        case 0x25631cu: goto label_25631c;
        case 0x256320u: goto label_256320;
        case 0x256324u: goto label_256324;
        case 0x256328u: goto label_256328;
        case 0x25632cu: goto label_25632c;
        case 0x256330u: goto label_256330;
        case 0x256334u: goto label_256334;
        case 0x256338u: goto label_256338;
        case 0x25633cu: goto label_25633c;
        case 0x256340u: goto label_256340;
        case 0x256344u: goto label_256344;
        case 0x256348u: goto label_256348;
        case 0x25634cu: goto label_25634c;
        case 0x256350u: goto label_256350;
        case 0x256354u: goto label_256354;
        case 0x256358u: goto label_256358;
        case 0x25635cu: goto label_25635c;
        case 0x256360u: goto label_256360;
        case 0x256364u: goto label_256364;
        case 0x256368u: goto label_256368;
        case 0x25636cu: goto label_25636c;
        case 0x256370u: goto label_256370;
        case 0x256374u: goto label_256374;
        case 0x256378u: goto label_256378;
        case 0x25637cu: goto label_25637c;
        case 0x256380u: goto label_256380;
        case 0x256384u: goto label_256384;
        case 0x256388u: goto label_256388;
        case 0x25638cu: goto label_25638c;
        case 0x256390u: goto label_256390;
        case 0x256394u: goto label_256394;
        case 0x256398u: goto label_256398;
        case 0x25639cu: goto label_25639c;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563a4u: goto label_2563a4;
        case 0x2563a8u: goto label_2563a8;
        case 0x2563acu: goto label_2563ac;
        case 0x2563b0u: goto label_2563b0;
        case 0x2563b4u: goto label_2563b4;
        case 0x2563b8u: goto label_2563b8;
        case 0x2563bcu: goto label_2563bc;
        case 0x2563c0u: goto label_2563c0;
        case 0x2563c4u: goto label_2563c4;
        case 0x2563c8u: goto label_2563c8;
        case 0x2563ccu: goto label_2563cc;
        case 0x2563d0u: goto label_2563d0;
        case 0x2563d4u: goto label_2563d4;
        case 0x2563d8u: goto label_2563d8;
        case 0x2563dcu: goto label_2563dc;
        case 0x2563e0u: goto label_2563e0;
        case 0x2563e4u: goto label_2563e4;
        case 0x2563e8u: goto label_2563e8;
        case 0x2563ecu: goto label_2563ec;
        case 0x2563f0u: goto label_2563f0;
        case 0x2563f4u: goto label_2563f4;
        case 0x2563f8u: goto label_2563f8;
        case 0x2563fcu: goto label_2563fc;
        case 0x256400u: goto label_256400;
        case 0x256404u: goto label_256404;
        case 0x256408u: goto label_256408;
        case 0x25640cu: goto label_25640c;
        case 0x256410u: goto label_256410;
        case 0x256414u: goto label_256414;
        case 0x256418u: goto label_256418;
        case 0x25641cu: goto label_25641c;
        case 0x256420u: goto label_256420;
        case 0x256424u: goto label_256424;
        case 0x256428u: goto label_256428;
        case 0x25642cu: goto label_25642c;
        case 0x256430u: goto label_256430;
        case 0x256434u: goto label_256434;
        case 0x256438u: goto label_256438;
        case 0x25643cu: goto label_25643c;
        case 0x256440u: goto label_256440;
        case 0x256444u: goto label_256444;
        case 0x256448u: goto label_256448;
        case 0x25644cu: goto label_25644c;
        case 0x256450u: goto label_256450;
        case 0x256454u: goto label_256454;
        case 0x256458u: goto label_256458;
        case 0x25645cu: goto label_25645c;
        case 0x256460u: goto label_256460;
        case 0x256464u: goto label_256464;
        case 0x256468u: goto label_256468;
        case 0x25646cu: goto label_25646c;
        case 0x256470u: goto label_256470;
        case 0x256474u: goto label_256474;
        case 0x256478u: goto label_256478;
        case 0x25647cu: goto label_25647c;
        case 0x256480u: goto label_256480;
        case 0x256484u: goto label_256484;
        case 0x256488u: goto label_256488;
        case 0x25648cu: goto label_25648c;
        case 0x256490u: goto label_256490;
        case 0x256494u: goto label_256494;
        default: break;
    }

    ctx->pc = 0x256250u;

label_256250:
    // 0x256250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_256254:
    // 0x256254: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x256254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_256258:
    // 0x256258: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x256258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25625c:
    // 0x25625c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_256260:
    // 0x256260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256264:
    // 0x256264: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x256264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_256268:
    // 0x256268: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x256268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25626c:
    // 0x25626c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_256270:
    // 0x256270: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x256270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_256274:
    // 0x256274: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_256278:
    // 0x256278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25627c:
    if (ctx->pc == 0x25627Cu) {
        ctx->pc = 0x25627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256278u;
        // 0x25627c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256280u;
        goto label_256280;
    }
    ctx->pc = 0x256278u;
    {
        const bool branch_taken_0x256278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256278u;
        // 0x25627c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256278) {
            ctx->pc = 0x256288u;
            goto label_256288;
        }
    }
    ctx->pc = 0x256280u;
label_256280:
    // 0x256280: 0x10000008  b           . + 4 + (0x8 << 2)
label_256284:
    if (ctx->pc == 0x256284u) {
        ctx->pc = 0x256284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256280u;
        // 0x256284: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256288u;
        goto label_256288;
    }
    ctx->pc = 0x256280u;
    {
        const bool branch_taken_0x256280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256280u;
        // 0x256284: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256280) {
            ctx->pc = 0x2562A4u;
            goto label_2562a4;
        }
    }
    ctx->pc = 0x256288u;
label_256288:
    // 0x256288: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x256288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_25628c:
    // 0x25628c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x25628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_256290:
    // 0x256290: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x256290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_256294:
    // 0x256294: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x256294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_256298:
    // 0x256298: 0x2452001c  addiu       $s2, $v0, 0x1C
    ctx->pc = 0x256298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_25629c:
    // 0x25629c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2562a0:
    // 0x2562a0: 0x44900b  movn        $s2, $v0, $a0
    ctx->pc = 0x2562a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
label_2562a4:
    // 0x2562a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2562a8:
    // 0x2562a8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2562a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2562ac:
    // 0x2562ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2562acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2562b0:
    // 0x2562b0: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_2562b4:
    if (ctx->pc == 0x2562B4u) {
        ctx->pc = 0x2562B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562B0u;
        // 0x2562b4: 0x2428818  mult        $s1, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562B8u;
        goto label_2562b8;
    }
    ctx->pc = 0x2562B0u;
    {
        const bool branch_taken_0x2562b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562B0u;
        // 0x2562b4: 0x2428818  mult        $s1, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562b0) {
            ctx->pc = 0x256334u;
            goto label_256334;
        }
    }
    ctx->pc = 0x2562B8u;
label_2562b8:
    // 0x2562b8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2562b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2562bc:
    // 0x2562bc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2562bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2562c0:
    // 0x2562c0: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x2562c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_2562c4:
    // 0x2562c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2562c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2562c8:
    // 0x2562c8: 0x40f809  jalr        $v0
label_2562cc:
    if (ctx->pc == 0x2562CCu) {
        ctx->pc = 0x2562CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562C8u;
        // 0x2562cc: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562D0u;
        goto label_2562d0;
    }
    ctx->pc = 0x2562C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2562D0u);
        ctx->pc = 0x2562CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562C8u;
        // 0x2562cc: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2562C8u, 0x2562D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2562D0u;
label_2562d0:
    // 0x2562d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2562d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2562d4:
    // 0x2562d4: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_2562d8:
    if (ctx->pc == 0x2562D8u) {
        ctx->pc = 0x2562D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562D4u;
        // 0x2562d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2562DCu;
        goto label_2562dc;
    }
    ctx->pc = 0x2562D4u;
    {
        const bool branch_taken_0x2562d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2562D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2562D4u;
        // 0x2562d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2562d4) {
            ctx->pc = 0x256360u;
            goto label_256360;
        }
    }
    ctx->pc = 0x2562DCu;
label_2562dc:
    // 0x2562dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2562dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2562e0:
    // 0x2562e0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2562e4:
    // 0x2562e4: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x2562e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2562e8:
    // 0x2562e8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2562e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2562ec:
    // 0x2562ec: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2562ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2562f0:
    // 0x2562f0: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2562f4:
    // 0x2562f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2562f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2562f8:
    // 0x2562f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2562f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2562fc:
    // 0x2562fc: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2562fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_256300:
    // 0x256300: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_256304:
    // 0x256304: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_256308:
    if (ctx->pc == 0x256308u) {
        ctx->pc = 0x256308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256304u;
        // 0x256308: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25630Cu;
        goto label_25630c;
    }
    ctx->pc = 0x256304u;
    {
        const bool branch_taken_0x256304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256304u;
        // 0x256308: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256304) {
            ctx->pc = 0x256388u;
            goto label_256388;
        }
    }
    ctx->pc = 0x25630Cu;
label_25630c:
    // 0x25630c: 0x0  nop
    ctx->pc = 0x25630cu;
    // NOP
label_256310:
    // 0x256310: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x256310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_256314:
    // 0x256314: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x256314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_256318:
    // 0x256318: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x256318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_25631c:
    // 0x25631c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x25631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_256320:
    // 0x256320: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x256320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_256324:
    // 0x256324: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_256328:
    if (ctx->pc == 0x256328u) {
        ctx->pc = 0x256328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256324u;
        // 0x256328: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25632Cu;
        goto label_25632c;
    }
    ctx->pc = 0x256324u;
    {
        const bool branch_taken_0x256324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256324u;
        // 0x256328: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256324) {
            ctx->pc = 0x256310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256310;
        }
    }
    ctx->pc = 0x25632Cu;
label_25632c:
    // 0x25632c: 0x10000017  b           . + 4 + (0x17 << 2)
label_256330:
    if (ctx->pc == 0x256330u) {
        ctx->pc = 0x256330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25632Cu;
        // 0x256330: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256334u;
        goto label_256334;
    }
    ctx->pc = 0x25632Cu;
    {
        const bool branch_taken_0x25632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25632Cu;
        // 0x256330: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25632c) {
            ctx->pc = 0x25638Cu;
            goto label_25638c;
        }
    }
    ctx->pc = 0x256334u;
label_256334:
    // 0x256334: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x256334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_256338:
    // 0x256338: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x256338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25633c:
    // 0x25633c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x25633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_256340:
    // 0x256340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256344:
    // 0x256344: 0x40f809  jalr        $v0
label_256348:
    if (ctx->pc == 0x256348u) {
        ctx->pc = 0x256348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256344u;
        // 0x256348: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25634Cu;
        goto label_25634c;
    }
    ctx->pc = 0x256344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25634Cu);
        ctx->pc = 0x256348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256344u;
        // 0x256348: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256344u, 0x25634Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25634Cu;
label_25634c:
    // 0x25634c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25634cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256350:
    // 0x256350: 0x54e0000e  bnel        $a3, $zero, . + 4 + (0xE << 2)
label_256354:
    if (ctx->pc == 0x256354u) {
        ctx->pc = 0x256354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256350u;
        // 0x256354: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256358u;
        goto label_256358;
    }
    ctx->pc = 0x256350u;
    {
        const bool branch_taken_0x256350 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x256350) {
            ctx->pc = 0x256354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256350u;
            // 0x256354: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25638Cu;
            goto label_25638c;
        }
    }
    ctx->pc = 0x256358u;
label_256358:
    // 0x256358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x256358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25635c:
    // 0x25635c: 0x0  nop
    ctx->pc = 0x25635cu;
    // NOP
label_256360:
    // 0x256360: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_256364:
    // 0x256364: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x256364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_256368:
    // 0x256368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25636c:
    // 0x25636c: 0xc092848  jal         func_24A120
label_256370:
    if (ctx->pc == 0x256370u) {
        ctx->pc = 0x256370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25636Cu;
        // 0x256370: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256374u;
        goto label_256374;
    }
    ctx->pc = 0x25636Cu;
    SET_GPR_U32(ctx, 31, 0x256374u);
    ctx->pc = 0x256370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25636Cu;
    // 0x256370: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25636Cu, 0x256374u)) {
        return;
    }
    ctx->pc = 0x256374u;
label_256374:
    // 0x256374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x256374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_256378:
    // 0x256378: 0xc09281a  jal         func_24A068
label_25637c:
    if (ctx->pc == 0x25637Cu) {
        ctx->pc = 0x25637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256378u;
        // 0x25637c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256380u;
        goto label_256380;
    }
    ctx->pc = 0x256378u;
    SET_GPR_U32(ctx, 31, 0x256380u);
    ctx->pc = 0x25637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256378u;
    // 0x25637c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x256378u, 0x256380u)) {
        return;
    }
    ctx->pc = 0x256380u;
label_256380:
    // 0x256380: 0x1000003d  b           . + 4 + (0x3D << 2)
label_256384:
    if (ctx->pc == 0x256384u) {
        ctx->pc = 0x256384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256380u;
        // 0x256384: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256388u;
        goto label_256388;
    }
    ctx->pc = 0x256380u;
    {
        const bool branch_taken_0x256380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256380u;
        // 0x256384: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256380) {
            ctx->pc = 0x256478u;
            goto label_256478;
        }
    }
    ctx->pc = 0x256388u;
label_256388:
    // 0x256388: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x256388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_25638c:
    // 0x25638c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x25638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_256390:
    // 0x256390: 0xe00013  mtlo        $a3
    ctx->pc = 0x256390u;
    ctx->lo = GPR_U64(ctx, 7);
label_256394:
    // 0x256394: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x256394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
label_256398:
    // 0x256398: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x256398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_25639c:
    // 0x25639c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2563a0:
    // 0x2563a0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2563a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2563a4:
    // 0x2563a4: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_2563a8:
    if (ctx->pc == 0x2563A8u) {
        ctx->pc = 0x2563A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563A4u;
        // 0x2563a8: 0x70430000  madd        $zero, $v0, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2563ACu;
        goto label_2563ac;
    }
    ctx->pc = 0x2563A4u;
    {
        const bool branch_taken_0x2563a4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2563A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563A4u;
        // 0x2563a8: 0x70430000  madd        $zero, $v0, $v1 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563a4) {
            ctx->pc = 0x256424u;
            goto label_256424;
        }
    }
    ctx->pc = 0x2563ACu;
label_2563ac:
    // 0x2563ac: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x2563acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
label_2563b0:
    // 0x2563b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2563b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2563b4:
    // 0x2563b4: 0x0  nop
    ctx->pc = 0x2563b4u;
    // NOP
label_2563b8:
    // 0x2563b8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2563b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2563bc:
    // 0x2563bc: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x2563bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2563c0:
    // 0x2563c0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2563c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2563c4:
    // 0x2563c4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2563c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_2563c8:
    // 0x2563c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2563c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2563cc:
    // 0x2563cc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2563ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2563d0:
    // 0x2563d0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2563d4:
    if (ctx->pc == 0x2563D4u) {
        ctx->pc = 0x2563D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563D0u;
        // 0x2563d4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2563D8u;
        goto label_2563d8;
    }
    ctx->pc = 0x2563D0u;
    {
        const bool branch_taken_0x2563d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2563d0) {
            ctx->pc = 0x2563D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2563D0u;
            // 0x2563d4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256414u;
            goto label_256414;
        }
    }
    ctx->pc = 0x2563D8u;
label_2563d8:
    // 0x2563d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2563d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2563dc:
    // 0x2563dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2563e0:
    if (ctx->pc == 0x2563E0u) {
        ctx->pc = 0x2563E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563DCu;
        // 0x2563e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2563E4u;
        goto label_2563e4;
    }
    ctx->pc = 0x2563DCu;
    {
        const bool branch_taken_0x2563dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563DCu;
        // 0x2563e0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563dc) {
            ctx->pc = 0x256410u;
            goto label_256410;
        }
    }
    ctx->pc = 0x2563E4u;
label_2563e4:
    // 0x2563e4: 0x1012  mflo        $v0
    ctx->pc = 0x2563e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2563e8:
    // 0x2563e8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2563e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_2563ec:
    // 0x2563ec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2563ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2563f0:
    // 0x2563f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2563f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2563f4:
    // 0x2563f4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2563f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2563f8:
    // 0x2563f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2563fc:
    if (ctx->pc == 0x2563FCu) {
        ctx->pc = 0x2563FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563F8u;
        // 0x2563fc: 0x70660000  madd        $zero, $v1, $a2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x256400u;
        goto label_256400;
    }
    ctx->pc = 0x2563F8u;
    {
        const bool branch_taken_0x2563f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2563F8u;
        // 0x2563fc: 0x70660000  madd        $zero, $v1, $a2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563f8) {
            ctx->pc = 0x256410u;
            goto label_256410;
        }
    }
    ctx->pc = 0x256400u;
label_256400:
    // 0x256400: 0x1012  mflo        $v0
    ctx->pc = 0x256400u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_256404:
    // 0x256404: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x256404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_256408:
    // 0x256408: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x256408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_25640c:
    // 0x25640c: 0x70460000  madd        $zero, $v0, $a2
    ctx->pc = 0x25640cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_256410:
    // 0x256410: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_256414:
    // 0x256414: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256418:
    // 0x256418: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x256418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25641c:
    // 0x25641c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_256420:
    if (ctx->pc == 0x256420u) {
        ctx->pc = 0x256420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25641Cu;
        // 0x256420: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256424u;
        goto label_256424;
    }
    ctx->pc = 0x25641Cu;
    {
        const bool branch_taken_0x25641c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25641Cu;
        // 0x256420: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25641c) {
            ctx->pc = 0x2563B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2563b8;
        }
    }
    ctx->pc = 0x256424u;
label_256424:
    // 0x256424: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_256428:
    // 0x256428: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x256428u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_25642c:
    // 0x25642c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x25642cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_256430:
    // 0x256430: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_256434:
    if (ctx->pc == 0x256434u) {
        ctx->pc = 0x256434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256430u;
        // 0x256434: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256438u;
        goto label_256438;
    }
    ctx->pc = 0x256430u;
    {
        const bool branch_taken_0x256430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256430u;
        // 0x256434: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256430) {
            ctx->pc = 0x256470u;
            goto label_256470;
        }
    }
    ctx->pc = 0x256438u;
label_256438:
    // 0x256438: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x256438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_25643c:
    // 0x25643c: 0x0  nop
    ctx->pc = 0x25643cu;
    // NOP
label_256440:
    // 0x256440: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_256444:
    // 0x256444: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_256448:
    // 0x256448: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25644c:
    // 0x25644c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x25644cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_256450:
    // 0x256450: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x256450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_256454:
    // 0x256454: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x256454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_256458:
    // 0x256458: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x256458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_25645c:
    // 0x25645c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x25645cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_256460:
    // 0x256460: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x256460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_256464:
    // 0x256464: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x256464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_256468:
    // 0x256468: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_25646c:
    if (ctx->pc == 0x25646Cu) {
        ctx->pc = 0x25646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256468u;
        // 0x25646c: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256470u;
        goto label_256470;
    }
    ctx->pc = 0x256468u;
    {
        const bool branch_taken_0x256468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256468u;
        // 0x25646c: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256468) {
            ctx->pc = 0x256440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256440;
        }
    }
    ctx->pc = 0x256470u;
label_256470:
    // 0x256470: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x256470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_256474:
    // 0x256474: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_256478:
    // 0x256478: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x256478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25647c:
    // 0x25647c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25647cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_256480:
    // 0x256480: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x256480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256484:
    // 0x256484: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x256484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_256488:
    // 0x256488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25648c:
    // 0x25648c: 0x3e00008  jr          $ra
label_256490:
    if (ctx->pc == 0x256490u) {
        ctx->pc = 0x256490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25648Cu;
        // 0x256490: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256494u;
        goto label_256494;
    }
    ctx->pc = 0x25648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25648Cu;
        // 0x256490: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25648Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256494u;
label_256494:
    // 0x256494: 0x0  nop
    ctx->pc = 0x256494u;
    // NOP
    ctx->pc = 0x256498u;
}
