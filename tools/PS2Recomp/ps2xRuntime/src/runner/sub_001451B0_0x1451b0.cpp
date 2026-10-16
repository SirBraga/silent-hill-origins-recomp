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

// Function: sub_001451B0
// Address: 0x1451b0 - 0x145418
void sub_001451B0_0x1451b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001451B0_0x1451b0");
#endif

    switch (ctx->pc) {
        case 0x1451b0u: goto label_1451b0;
        case 0x1451b4u: goto label_1451b4;
        case 0x1451b8u: goto label_1451b8;
        case 0x1451bcu: goto label_1451bc;
        case 0x1451c0u: goto label_1451c0;
        case 0x1451c4u: goto label_1451c4;
        case 0x1451c8u: goto label_1451c8;
        case 0x1451ccu: goto label_1451cc;
        case 0x1451d0u: goto label_1451d0;
        case 0x1451d4u: goto label_1451d4;
        case 0x1451d8u: goto label_1451d8;
        case 0x1451dcu: goto label_1451dc;
        case 0x1451e0u: goto label_1451e0;
        case 0x1451e4u: goto label_1451e4;
        case 0x1451e8u: goto label_1451e8;
        case 0x1451ecu: goto label_1451ec;
        case 0x1451f0u: goto label_1451f0;
        case 0x1451f4u: goto label_1451f4;
        case 0x1451f8u: goto label_1451f8;
        case 0x1451fcu: goto label_1451fc;
        case 0x145200u: goto label_145200;
        case 0x145204u: goto label_145204;
        case 0x145208u: goto label_145208;
        case 0x14520cu: goto label_14520c;
        case 0x145210u: goto label_145210;
        case 0x145214u: goto label_145214;
        case 0x145218u: goto label_145218;
        case 0x14521cu: goto label_14521c;
        case 0x145220u: goto label_145220;
        case 0x145224u: goto label_145224;
        case 0x145228u: goto label_145228;
        case 0x14522cu: goto label_14522c;
        case 0x145230u: goto label_145230;
        case 0x145234u: goto label_145234;
        case 0x145238u: goto label_145238;
        case 0x14523cu: goto label_14523c;
        case 0x145240u: goto label_145240;
        case 0x145244u: goto label_145244;
        case 0x145248u: goto label_145248;
        case 0x14524cu: goto label_14524c;
        case 0x145250u: goto label_145250;
        case 0x145254u: goto label_145254;
        case 0x145258u: goto label_145258;
        case 0x14525cu: goto label_14525c;
        case 0x145260u: goto label_145260;
        case 0x145264u: goto label_145264;
        case 0x145268u: goto label_145268;
        case 0x14526cu: goto label_14526c;
        case 0x145270u: goto label_145270;
        case 0x145274u: goto label_145274;
        case 0x145278u: goto label_145278;
        case 0x14527cu: goto label_14527c;
        case 0x145280u: goto label_145280;
        case 0x145284u: goto label_145284;
        case 0x145288u: goto label_145288;
        case 0x14528cu: goto label_14528c;
        case 0x145290u: goto label_145290;
        case 0x145294u: goto label_145294;
        case 0x145298u: goto label_145298;
        case 0x14529cu: goto label_14529c;
        case 0x1452a0u: goto label_1452a0;
        case 0x1452a4u: goto label_1452a4;
        case 0x1452a8u: goto label_1452a8;
        case 0x1452acu: goto label_1452ac;
        case 0x1452b0u: goto label_1452b0;
        case 0x1452b4u: goto label_1452b4;
        case 0x1452b8u: goto label_1452b8;
        case 0x1452bcu: goto label_1452bc;
        case 0x1452c0u: goto label_1452c0;
        case 0x1452c4u: goto label_1452c4;
        case 0x1452c8u: goto label_1452c8;
        case 0x1452ccu: goto label_1452cc;
        case 0x1452d0u: goto label_1452d0;
        case 0x1452d4u: goto label_1452d4;
        case 0x1452d8u: goto label_1452d8;
        case 0x1452dcu: goto label_1452dc;
        case 0x1452e0u: goto label_1452e0;
        case 0x1452e4u: goto label_1452e4;
        case 0x1452e8u: goto label_1452e8;
        case 0x1452ecu: goto label_1452ec;
        case 0x1452f0u: goto label_1452f0;
        case 0x1452f4u: goto label_1452f4;
        case 0x1452f8u: goto label_1452f8;
        case 0x1452fcu: goto label_1452fc;
        case 0x145300u: goto label_145300;
        case 0x145304u: goto label_145304;
        case 0x145308u: goto label_145308;
        case 0x14530cu: goto label_14530c;
        case 0x145310u: goto label_145310;
        case 0x145314u: goto label_145314;
        case 0x145318u: goto label_145318;
        case 0x14531cu: goto label_14531c;
        case 0x145320u: goto label_145320;
        case 0x145324u: goto label_145324;
        case 0x145328u: goto label_145328;
        case 0x14532cu: goto label_14532c;
        case 0x145330u: goto label_145330;
        case 0x145334u: goto label_145334;
        case 0x145338u: goto label_145338;
        case 0x14533cu: goto label_14533c;
        case 0x145340u: goto label_145340;
        case 0x145344u: goto label_145344;
        case 0x145348u: goto label_145348;
        case 0x14534cu: goto label_14534c;
        case 0x145350u: goto label_145350;
        case 0x145354u: goto label_145354;
        case 0x145358u: goto label_145358;
        case 0x14535cu: goto label_14535c;
        case 0x145360u: goto label_145360;
        case 0x145364u: goto label_145364;
        case 0x145368u: goto label_145368;
        case 0x14536cu: goto label_14536c;
        case 0x145370u: goto label_145370;
        case 0x145374u: goto label_145374;
        case 0x145378u: goto label_145378;
        case 0x14537cu: goto label_14537c;
        case 0x145380u: goto label_145380;
        case 0x145384u: goto label_145384;
        case 0x145388u: goto label_145388;
        case 0x14538cu: goto label_14538c;
        case 0x145390u: goto label_145390;
        case 0x145394u: goto label_145394;
        case 0x145398u: goto label_145398;
        case 0x14539cu: goto label_14539c;
        case 0x1453a0u: goto label_1453a0;
        case 0x1453a4u: goto label_1453a4;
        case 0x1453a8u: goto label_1453a8;
        case 0x1453acu: goto label_1453ac;
        case 0x1453b0u: goto label_1453b0;
        case 0x1453b4u: goto label_1453b4;
        case 0x1453b8u: goto label_1453b8;
        case 0x1453bcu: goto label_1453bc;
        case 0x1453c0u: goto label_1453c0;
        case 0x1453c4u: goto label_1453c4;
        case 0x1453c8u: goto label_1453c8;
        case 0x1453ccu: goto label_1453cc;
        case 0x1453d0u: goto label_1453d0;
        case 0x1453d4u: goto label_1453d4;
        case 0x1453d8u: goto label_1453d8;
        case 0x1453dcu: goto label_1453dc;
        case 0x1453e0u: goto label_1453e0;
        case 0x1453e4u: goto label_1453e4;
        case 0x1453e8u: goto label_1453e8;
        case 0x1453ecu: goto label_1453ec;
        case 0x1453f0u: goto label_1453f0;
        case 0x1453f4u: goto label_1453f4;
        case 0x1453f8u: goto label_1453f8;
        case 0x1453fcu: goto label_1453fc;
        case 0x145400u: goto label_145400;
        case 0x145404u: goto label_145404;
        case 0x145408u: goto label_145408;
        case 0x14540cu: goto label_14540c;
        case 0x145410u: goto label_145410;
        case 0x145414u: goto label_145414;
        default: break;
    }

    ctx->pc = 0x1451b0u;

label_1451b0:
    // 0x1451b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1451b4:
    // 0x1451b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1451b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1451b8:
    // 0x1451b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1451b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1451bc:
    // 0x1451bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1451bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1451c0:
    // 0x1451c0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1451c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1451c4:
    // 0x1451c4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1451c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1451c8:
    // 0x1451c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1451c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1451cc:
    // 0x1451cc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1451ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1451d0:
    // 0x1451d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1451d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1451d4:
    // 0x1451d4: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1451d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1451d8:
    // 0x1451d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1451d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1451dc:
    // 0x1451dc: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x1451dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
label_1451e0:
    // 0x1451e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1451e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1451e4:
    // 0x1451e4: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1451e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_1451e8:
    // 0x1451e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1451e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1451ec:
    // 0x1451ec: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1451ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1451f0:
    // 0x1451f0: 0x263155c8  addiu       $s1, $s1, 0x55C8
    ctx->pc = 0x1451f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 21960));
label_1451f4:
    // 0x1451f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1451f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1451f8:
    // 0x1451f8: 0x40f809  jalr        $v0
label_1451fc:
    if (ctx->pc == 0x1451FCu) {
        ctx->pc = 0x1451FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451F8u;
        // 0x1451fc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145200u;
        goto label_145200;
    }
    ctx->pc = 0x1451F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145200u);
        ctx->pc = 0x1451FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451F8u;
        // 0x1451fc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451F8u, 0x145200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145200u;
label_145200:
    // 0x145200: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x145200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_145204:
    // 0x145204: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x145204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_145208:
    // 0x145208: 0x40f809  jalr        $v0
label_14520c:
    if (ctx->pc == 0x14520Cu) {
        ctx->pc = 0x14520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145208u;
        // 0x14520c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145210u;
        goto label_145210;
    }
    ctx->pc = 0x145208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145210u);
        ctx->pc = 0x14520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145208u;
        // 0x14520c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145208u, 0x145210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145210u;
label_145210:
    // 0x145210: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x145210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_145214:
    // 0x145214: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x145214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_145218:
    // 0x145218: 0x40f809  jalr        $v0
label_14521c:
    if (ctx->pc == 0x14521Cu) {
        ctx->pc = 0x14521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145218u;
        // 0x14521c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145220u;
        goto label_145220;
    }
    ctx->pc = 0x145218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145220u);
        ctx->pc = 0x14521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145218u;
        // 0x14521c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145218u, 0x145220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145220u;
label_145220:
    // 0x145220: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x145220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_145224:
    // 0x145224: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x145224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_145228:
    // 0x145228: 0x40f809  jalr        $v0
label_14522c:
    if (ctx->pc == 0x14522Cu) {
        ctx->pc = 0x14522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145228u;
        // 0x14522c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145230u;
        goto label_145230;
    }
    ctx->pc = 0x145228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145230u);
        ctx->pc = 0x14522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145228u;
        // 0x14522c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145228u, 0x145230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145230u;
label_145230:
    // 0x145230: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x145230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_145234:
    // 0x145234: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x145234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_145238:
    // 0x145238: 0x40f809  jalr        $v0
label_14523c:
    if (ctx->pc == 0x14523Cu) {
        ctx->pc = 0x14523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145238u;
        // 0x14523c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145240u;
        goto label_145240;
    }
    ctx->pc = 0x145238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145240u);
        ctx->pc = 0x14523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145238u;
        // 0x14523c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145238u, 0x145240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145240u;
label_145240:
    // 0x145240: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145244:
    // 0x145244: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x145244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_145248:
    // 0x145248: 0x40f809  jalr        $v0
label_14524c:
    if (ctx->pc == 0x14524Cu) {
        ctx->pc = 0x14524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145248u;
        // 0x14524c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145250u;
        goto label_145250;
    }
    ctx->pc = 0x145248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145250u);
        ctx->pc = 0x14524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145248u;
        // 0x14524c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145248u, 0x145250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145250u;
label_145250:
    // 0x145250: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145254:
    // 0x145254: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x145254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145258:
    // 0x145258: 0x40f809  jalr        $v0
label_14525c:
    if (ctx->pc == 0x14525Cu) {
        ctx->pc = 0x14525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145258u;
        // 0x14525c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145260u;
        goto label_145260;
    }
    ctx->pc = 0x145258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145260u);
        ctx->pc = 0x14525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145258u;
        // 0x14525c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145258u, 0x145260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145260u;
label_145260:
    // 0x145260: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145264:
    // 0x145264: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x145264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_145268:
    // 0x145268: 0x40f809  jalr        $v0
label_14526c:
    if (ctx->pc == 0x14526Cu) {
        ctx->pc = 0x14526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145268u;
        // 0x14526c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145270u;
        goto label_145270;
    }
    ctx->pc = 0x145268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145270u);
        ctx->pc = 0x14526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145268u;
        // 0x14526c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145268u, 0x145270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145270u;
label_145270:
    // 0x145270: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145274:
    // 0x145274: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x145274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_145278:
    // 0x145278: 0x40f809  jalr        $v0
label_14527c:
    if (ctx->pc == 0x14527Cu) {
        ctx->pc = 0x14527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145278u;
        // 0x14527c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145280u;
        goto label_145280;
    }
    ctx->pc = 0x145278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145280u);
        ctx->pc = 0x14527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145278u;
        // 0x14527c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145278u, 0x145280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145280u;
label_145280:
    // 0x145280: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145284:
    // 0x145284: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145288:
    // 0x145288: 0x40f809  jalr        $v0
label_14528c:
    if (ctx->pc == 0x14528Cu) {
        ctx->pc = 0x14528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145288u;
        // 0x14528c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145290u;
        goto label_145290;
    }
    ctx->pc = 0x145288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145290u);
        ctx->pc = 0x14528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145288u;
        // 0x14528c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145288u, 0x145290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145290u;
label_145290:
    // 0x145290: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145294:
    // 0x145294: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x145294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_145298:
    // 0x145298: 0x40f809  jalr        $v0
label_14529c:
    if (ctx->pc == 0x14529Cu) {
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145298u;
        // 0x14529c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452A0u;
        goto label_1452a0;
    }
    ctx->pc = 0x145298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1452A0u);
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145298u;
        // 0x14529c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145298u, 0x1452A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1452A0u;
label_1452a0:
    // 0x1452a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1452a4:
    // 0x1452a4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1452a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1452a8:
    // 0x1452a8: 0x40f809  jalr        $v0
label_1452ac:
    if (ctx->pc == 0x1452ACu) {
        ctx->pc = 0x1452ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452A8u;
        // 0x1452ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452B0u;
        goto label_1452b0;
    }
    ctx->pc = 0x1452A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1452B0u);
        ctx->pc = 0x1452ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452A8u;
        // 0x1452ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452A8u, 0x1452B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1452B0u;
label_1452b0:
    // 0x1452b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1452b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1452b4:
    // 0x1452b4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1452b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1452b8:
    // 0x1452b8: 0x40f809  jalr        $v0
label_1452bc:
    if (ctx->pc == 0x1452BCu) {
        ctx->pc = 0x1452BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452B8u;
        // 0x1452bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452C0u;
        goto label_1452c0;
    }
    ctx->pc = 0x1452B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1452C0u);
        ctx->pc = 0x1452BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452B8u;
        // 0x1452bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452B8u, 0x1452C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1452C0u;
label_1452c0:
    // 0x1452c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1452c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1452c4:
    // 0x1452c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1452c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1452c8:
    // 0x1452c8: 0x40f809  jalr        $v0
label_1452cc:
    if (ctx->pc == 0x1452CCu) {
        ctx->pc = 0x1452CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452C8u;
        // 0x1452cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452D0u;
        goto label_1452d0;
    }
    ctx->pc = 0x1452C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1452D0u);
        ctx->pc = 0x1452CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452C8u;
        // 0x1452cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452C8u, 0x1452D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1452D0u;
label_1452d0:
    // 0x1452d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1452d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1452d4:
    // 0x1452d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1452d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1452d8:
    // 0x1452d8: 0x40f809  jalr        $v0
label_1452dc:
    if (ctx->pc == 0x1452DCu) {
        ctx->pc = 0x1452DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452D8u;
        // 0x1452dc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452E0u;
        goto label_1452e0;
    }
    ctx->pc = 0x1452D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1452E0u);
        ctx->pc = 0x1452DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452D8u;
        // 0x1452dc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452D8u, 0x1452E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1452E0u;
label_1452e0:
    // 0x1452e0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x1452e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_1452e4:
    // 0x1452e4: 0xc091fdc  jal         func_247F70
label_1452e8:
    if (ctx->pc == 0x1452E8u) {
        ctx->pc = 0x1452E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452E4u;
        // 0x1452e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452ECu;
        goto label_1452ec;
    }
    ctx->pc = 0x1452E4u;
    SET_GPR_U32(ctx, 31, 0x1452ECu);
    ctx->pc = 0x1452E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452E4u;
    // 0x1452e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x1452E4u, 0x1452ECu)) {
        return;
    }
    ctx->pc = 0x1452ECu;
label_1452ec:
    // 0x1452ec: 0x8e4584c0  lw          $a1, -0x7B40($s2)
    ctx->pc = 0x1452ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935744)));
label_1452f0:
    // 0x1452f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1452f4:
    // 0x1452f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1452f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1452f8:
    // 0x1452f8: 0xc091fea  jal         func_247FA8
label_1452fc:
    if (ctx->pc == 0x1452FCu) {
        ctx->pc = 0x1452FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452F8u;
        // 0x1452fc: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145300u;
        goto label_145300;
    }
    ctx->pc = 0x1452F8u;
    SET_GPR_U32(ctx, 31, 0x145300u);
    ctx->pc = 0x1452FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452F8u;
    // 0x1452fc: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x1452F8u, 0x145300u)) {
        return;
    }
    ctx->pc = 0x145300u;
label_145300:
    // 0x145300: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_145304:
    if (ctx->pc == 0x145304u) {
        ctx->pc = 0x145304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145300u;
        // 0x145304: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145308u;
        goto label_145308;
    }
    ctx->pc = 0x145300u;
    {
        const bool branch_taken_0x145300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145300u;
        // 0x145304: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145300) {
            ctx->pc = 0x145324u;
            goto label_145324;
        }
    }
    ctx->pc = 0x145308u;
label_145308:
    // 0x145308: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_14530c:
    // 0x14530c: 0x8c4684c4  lw          $a2, -0x7B3C($v0)
    ctx->pc = 0x14530cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935748)));
label_145310:
    // 0x145310: 0x24a5e268  addiu       $a1, $a1, -0x1D98
    ctx->pc = 0x145310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959720));
label_145314:
    // 0x145314: 0xc09202a  jal         func_2480A8
label_145318:
    if (ctx->pc == 0x145318u) {
        ctx->pc = 0x145318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145314u;
        // 0x145318: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14531Cu;
        goto label_14531c;
    }
    ctx->pc = 0x145314u;
    SET_GPR_U32(ctx, 31, 0x14531Cu);
    ctx->pc = 0x145318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145314u;
    // 0x145318: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x145314u, 0x14531Cu)) {
        return;
    }
    ctx->pc = 0x14531Cu;
label_14531c:
    // 0x14531c: 0xc092016  jal         func_248058
label_145320:
    if (ctx->pc == 0x145320u) {
        ctx->pc = 0x145324u;
        goto label_145324;
    }
    ctx->pc = 0x14531Cu;
    SET_GPR_U32(ctx, 31, 0x145324u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x14531Cu, 0x145324u)) {
        return;
    }
    ctx->pc = 0x145324u;
label_145324:
    // 0x145324: 0x8e6284c0  lw          $v0, -0x7B40($s3)
    ctx->pc = 0x145324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935744)));
label_145328:
    // 0x145328: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_14532c:
    if (ctx->pc == 0x14532Cu) {
        ctx->pc = 0x14532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145328u;
        // 0x14532c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145330u;
        goto label_145330;
    }
    ctx->pc = 0x145328u;
    {
        const bool branch_taken_0x145328 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145328u;
        // 0x14532c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145328) {
            ctx->pc = 0x145350u;
            goto label_145350;
        }
    }
    ctx->pc = 0x145330u;
label_145330:
    // 0x145330: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x145330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_145334:
    // 0x145334: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x145334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_145338:
    // 0x145338: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x145338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_14533c:
    // 0x14533c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x14533cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_145340:
    // 0x145340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_145344:
    // 0x145344: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_145348:
    if (ctx->pc == 0x145348u) {
        ctx->pc = 0x145348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145344u;
        // 0x145348: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14534Cu;
        goto label_14534c;
    }
    ctx->pc = 0x145344u;
    {
        const bool branch_taken_0x145344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145344u;
        // 0x145348: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145344) {
            ctx->pc = 0x145330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145330;
        }
    }
    ctx->pc = 0x14534Cu;
label_14534c:
    // 0x14534c: 0x0  nop
    ctx->pc = 0x14534cu;
    // NOP
label_145350:
    // 0x145350: 0x26b00fd8  addiu       $s0, $s5, 0xFD8
    ctx->pc = 0x145350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
label_145354:
    // 0x145354: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x145354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_145358:
    // 0x145358: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14535c:
    // 0x14535c: 0x40f809  jalr        $v0
label_145360:
    if (ctx->pc == 0x145360u) {
        ctx->pc = 0x145360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14535Cu;
        // 0x145360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145364u;
        goto label_145364;
    }
    ctx->pc = 0x14535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145364u);
        ctx->pc = 0x145360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14535Cu;
        // 0x145360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14535Cu, 0x145364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145364u;
label_145364:
    // 0x145364: 0x8e6584c0  lw          $a1, -0x7B40($s3)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935744)));
label_145368:
    // 0x145368: 0x268455c8  addiu       $a0, $s4, 0x55C8
    ctx->pc = 0x145368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21960));
label_14536c:
    // 0x14536c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14536cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145370:
    // 0x145370: 0xc091fea  jal         func_247FA8
label_145374:
    if (ctx->pc == 0x145374u) {
        ctx->pc = 0x145374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145370u;
        // 0x145374: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145378u;
        goto label_145378;
    }
    ctx->pc = 0x145370u;
    SET_GPR_U32(ctx, 31, 0x145378u);
    ctx->pc = 0x145374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145370u;
    // 0x145374: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x145370u, 0x145378u)) {
        return;
    }
    ctx->pc = 0x145378u;
label_145378:
    // 0x145378: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14537c:
    if (ctx->pc == 0x14537Cu) {
        ctx->pc = 0x14537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145378u;
        // 0x14537c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145380u;
        goto label_145380;
    }
    ctx->pc = 0x145378u;
    {
        const bool branch_taken_0x145378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145378u;
        // 0x14537c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145378) {
            ctx->pc = 0x14539Cu;
            goto label_14539c;
        }
    }
    ctx->pc = 0x145380u;
label_145380:
    // 0x145380: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x145380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_145384:
    // 0x145384: 0x8c4684c4  lw          $a2, -0x7B3C($v0)
    ctx->pc = 0x145384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935748)));
label_145388:
    // 0x145388: 0x24a5e268  addiu       $a1, $a1, -0x1D98
    ctx->pc = 0x145388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959720));
label_14538c:
    // 0x14538c: 0xc09202a  jal         func_2480A8
label_145390:
    if (ctx->pc == 0x145390u) {
        ctx->pc = 0x145390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14538Cu;
        // 0x145390: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145394u;
        goto label_145394;
    }
    ctx->pc = 0x14538Cu;
    SET_GPR_U32(ctx, 31, 0x145394u);
    ctx->pc = 0x145390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14538Cu;
    // 0x145390: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x14538Cu, 0x145394u)) {
        return;
    }
    ctx->pc = 0x145394u;
label_145394:
    // 0x145394: 0xc092016  jal         func_248058
label_145398:
    if (ctx->pc == 0x145398u) {
        ctx->pc = 0x14539Cu;
        goto label_14539c;
    }
    ctx->pc = 0x145394u;
    SET_GPR_U32(ctx, 31, 0x14539Cu);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x145394u, 0x14539Cu)) {
        return;
    }
    ctx->pc = 0x14539Cu;
label_14539c:
    // 0x14539c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1453a0:
    // 0x1453a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1453a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1453a4:
    // 0x1453a4: 0x40f809  jalr        $v0
label_1453a8:
    if (ctx->pc == 0x1453A8u) {
        ctx->pc = 0x1453A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453A4u;
        // 0x1453a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453ACu;
        goto label_1453ac;
    }
    ctx->pc = 0x1453A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1453ACu);
        ctx->pc = 0x1453A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453A4u;
        // 0x1453a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453A4u, 0x1453ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1453ACu;
label_1453ac:
    // 0x1453ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1453acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1453b0:
    // 0x1453b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1453b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1453b4:
    // 0x1453b4: 0x40f809  jalr        $v0
label_1453b8:
    if (ctx->pc == 0x1453B8u) {
        ctx->pc = 0x1453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453B4u;
        // 0x1453b8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453BCu;
        goto label_1453bc;
    }
    ctx->pc = 0x1453B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1453BCu);
        ctx->pc = 0x1453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453B4u;
        // 0x1453b8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453B4u, 0x1453BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1453BCu;
label_1453bc:
    // 0x1453bc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1453bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1453c0:
    // 0x1453c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1453c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1453c4:
    // 0x1453c4: 0x40f809  jalr        $v0
label_1453c8:
    if (ctx->pc == 0x1453C8u) {
        ctx->pc = 0x1453C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453C4u;
        // 0x1453c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453CCu;
        goto label_1453cc;
    }
    ctx->pc = 0x1453C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1453CCu);
        ctx->pc = 0x1453C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453C4u;
        // 0x1453c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453C4u, 0x1453CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1453CCu;
label_1453cc:
    // 0x1453cc: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1453ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1453d0:
    // 0x1453d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1453d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1453d4:
    // 0x1453d4: 0x40f809  jalr        $v0
label_1453d8:
    if (ctx->pc == 0x1453D8u) {
        ctx->pc = 0x1453D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453D4u;
        // 0x1453d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453DCu;
        goto label_1453dc;
    }
    ctx->pc = 0x1453D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1453DCu);
        ctx->pc = 0x1453D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453D4u;
        // 0x1453d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453D4u, 0x1453DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1453DCu;
label_1453dc:
    // 0x1453dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1453dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1453e0:
    // 0x1453e0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1453e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1453e4:
    // 0x1453e4: 0x40f809  jalr        $v0
label_1453e8:
    if (ctx->pc == 0x1453E8u) {
        ctx->pc = 0x1453E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453E4u;
        // 0x1453e8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1453ECu;
        goto label_1453ec;
    }
    ctx->pc = 0x1453E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1453ECu);
        ctx->pc = 0x1453E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453E4u;
        // 0x1453e8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453E4u, 0x1453ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1453ECu;
label_1453ec:
    // 0x1453ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1453ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1453f0:
    // 0x1453f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1453f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1453f4:
    // 0x1453f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1453f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1453f8:
    // 0x1453f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1453f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1453fc:
    // 0x1453fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1453fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_145400:
    // 0x145400: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x145400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_145404:
    // 0x145404: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x145404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_145408:
    // 0x145408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14540c:
    // 0x14540c: 0x3e00008  jr          $ra
label_145410:
    if (ctx->pc == 0x145410u) {
        ctx->pc = 0x145410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14540Cu;
        // 0x145410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145414u;
        goto label_145414;
    }
    ctx->pc = 0x14540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14540Cu;
        // 0x145410: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14540Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145414u;
label_145414:
    // 0x145414: 0x0  nop
    ctx->pc = 0x145414u;
    // NOP
    ctx->pc = 0x145418u;
}
