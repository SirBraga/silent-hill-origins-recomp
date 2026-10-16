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

// Function: sub_00165290
// Address: 0x165290 - 0x1653c8
void sub_00165290_0x165290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165290_0x165290");
#endif

    switch (ctx->pc) {
        case 0x165290u: goto label_165290;
        case 0x165294u: goto label_165294;
        case 0x165298u: goto label_165298;
        case 0x16529cu: goto label_16529c;
        case 0x1652a0u: goto label_1652a0;
        case 0x1652a4u: goto label_1652a4;
        case 0x1652a8u: goto label_1652a8;
        case 0x1652acu: goto label_1652ac;
        case 0x1652b0u: goto label_1652b0;
        case 0x1652b4u: goto label_1652b4;
        case 0x1652b8u: goto label_1652b8;
        case 0x1652bcu: goto label_1652bc;
        case 0x1652c0u: goto label_1652c0;
        case 0x1652c4u: goto label_1652c4;
        case 0x1652c8u: goto label_1652c8;
        case 0x1652ccu: goto label_1652cc;
        case 0x1652d0u: goto label_1652d0;
        case 0x1652d4u: goto label_1652d4;
        case 0x1652d8u: goto label_1652d8;
        case 0x1652dcu: goto label_1652dc;
        case 0x1652e0u: goto label_1652e0;
        case 0x1652e4u: goto label_1652e4;
        case 0x1652e8u: goto label_1652e8;
        case 0x1652ecu: goto label_1652ec;
        case 0x1652f0u: goto label_1652f0;
        case 0x1652f4u: goto label_1652f4;
        case 0x1652f8u: goto label_1652f8;
        case 0x1652fcu: goto label_1652fc;
        case 0x165300u: goto label_165300;
        case 0x165304u: goto label_165304;
        case 0x165308u: goto label_165308;
        case 0x16530cu: goto label_16530c;
        case 0x165310u: goto label_165310;
        case 0x165314u: goto label_165314;
        case 0x165318u: goto label_165318;
        case 0x16531cu: goto label_16531c;
        case 0x165320u: goto label_165320;
        case 0x165324u: goto label_165324;
        case 0x165328u: goto label_165328;
        case 0x16532cu: goto label_16532c;
        case 0x165330u: goto label_165330;
        case 0x165334u: goto label_165334;
        case 0x165338u: goto label_165338;
        case 0x16533cu: goto label_16533c;
        case 0x165340u: goto label_165340;
        case 0x165344u: goto label_165344;
        case 0x165348u: goto label_165348;
        case 0x16534cu: goto label_16534c;
        case 0x165350u: goto label_165350;
        case 0x165354u: goto label_165354;
        case 0x165358u: goto label_165358;
        case 0x16535cu: goto label_16535c;
        case 0x165360u: goto label_165360;
        case 0x165364u: goto label_165364;
        case 0x165368u: goto label_165368;
        case 0x16536cu: goto label_16536c;
        case 0x165370u: goto label_165370;
        case 0x165374u: goto label_165374;
        case 0x165378u: goto label_165378;
        case 0x16537cu: goto label_16537c;
        case 0x165380u: goto label_165380;
        case 0x165384u: goto label_165384;
        case 0x165388u: goto label_165388;
        case 0x16538cu: goto label_16538c;
        case 0x165390u: goto label_165390;
        case 0x165394u: goto label_165394;
        case 0x165398u: goto label_165398;
        case 0x16539cu: goto label_16539c;
        case 0x1653a0u: goto label_1653a0;
        case 0x1653a4u: goto label_1653a4;
        case 0x1653a8u: goto label_1653a8;
        case 0x1653acu: goto label_1653ac;
        case 0x1653b0u: goto label_1653b0;
        case 0x1653b4u: goto label_1653b4;
        case 0x1653b8u: goto label_1653b8;
        case 0x1653bcu: goto label_1653bc;
        case 0x1653c0u: goto label_1653c0;
        case 0x1653c4u: goto label_1653c4;
        default: break;
    }

    ctx->pc = 0x165290u;

label_165290:
    // 0x165290: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x165290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_165294:
    // 0x165294: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x165294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_165298:
    // 0x165298: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x165298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_16529c:
    // 0x16529c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1652a0:
    // 0x1652a0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1652a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1652a4:
    // 0x1652a4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1652a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1652a8:
    // 0x1652a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1652a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1652ac:
    // 0x1652ac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1652acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1652b0:
    // 0x1652b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1652b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1652b4:
    // 0x1652b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1652b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1652b8:
    // 0x1652b8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1652b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1652bc:
    // 0x1652bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1652bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1652c0:
    // 0x1652c0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1652c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1652c4:
    // 0x1652c4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1652c8:
    if (ctx->pc == 0x1652C8u) {
        ctx->pc = 0x1652C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C4u;
        // 0x1652c8: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652CCu;
        goto label_1652cc;
    }
    ctx->pc = 0x1652C4u;
    {
        const bool branch_taken_0x1652c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1652C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C4u;
        // 0x1652c8: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652c4) {
            ctx->pc = 0x165388u;
            goto label_165388;
        }
    }
    ctx->pc = 0x1652CCu;
label_1652cc:
    // 0x1652cc: 0x8ed20004  lw          $s2, 0x4($s6)
    ctx->pc = 0x1652ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1652d0:
    // 0x1652d0: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_1652d4:
    if (ctx->pc == 0x1652D4u) {
        ctx->pc = 0x1652D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652D0u;
        // 0x1652d4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652D8u;
        goto label_1652d8;
    }
    ctx->pc = 0x1652D0u;
    {
        const bool branch_taken_0x1652d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652D0u;
        // 0x1652d4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652d0) {
            ctx->pc = 0x16538Cu;
            goto label_16538c;
        }
    }
    ctx->pc = 0x1652D8u;
label_1652d8:
    // 0x1652d8: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x1652d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1652dc:
    // 0x1652dc: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_1652e0:
    if (ctx->pc == 0x1652E0u) {
        ctx->pc = 0x1652E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652DCu;
        // 0x1652e0: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652E4u;
        goto label_1652e4;
    }
    ctx->pc = 0x1652DCu;
    {
        const bool branch_taken_0x1652dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652DCu;
        // 0x1652e0: 0x3c1e0073  lui         $fp, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652dc) {
            ctx->pc = 0x16538Cu;
            goto label_16538c;
        }
    }
    ctx->pc = 0x1652E4u;
label_1652e4:
    // 0x1652e4: 0x0  nop
    ctx->pc = 0x1652e4u;
    // NOP
label_1652e8:
    // 0x1652e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1652e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1652ec:
    // 0x1652ec: 0xc0a1ba4  jal         func_286E90
label_1652f0:
    if (ctx->pc == 0x1652F0u) {
        ctx->pc = 0x1652F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652ECu;
        // 0x1652f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652F4u;
        goto label_1652f4;
    }
    ctx->pc = 0x1652ECu;
    SET_GPR_U32(ctx, 31, 0x1652F4u);
    ctx->pc = 0x1652F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652ECu;
    // 0x1652f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286E90u, 0x1652ECu, 0x1652F4u)) {
        return;
    }
    ctx->pc = 0x1652F4u;
label_1652f4:
    // 0x1652f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1652f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1652f8:
    // 0x1652f8: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
label_1652fc:
    if (ctx->pc == 0x1652FCu) {
        ctx->pc = 0x1652FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F8u;
        // 0x1652fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165300u;
        goto label_165300;
    }
    ctx->pc = 0x1652F8u;
    {
        const bool branch_taken_0x1652f8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1652FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F8u;
        // 0x1652fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652f8) {
            ctx->pc = 0x16534Cu;
            goto label_16534c;
        }
    }
    ctx->pc = 0x165300u;
label_165300:
    // 0x165300: 0x27d5108c  addiu       $s5, $fp, 0x108C
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
label_165304:
    // 0x165304: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x165304u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_165308:
    // 0x165308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16530c:
    // 0x16530c: 0x0  nop
    ctx->pc = 0x16530cu;
    // NOP
label_165310:
    // 0x165310: 0xc0a1b98  jal         func_286E60
label_165314:
    if (ctx->pc == 0x165314u) {
        ctx->pc = 0x165314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165310u;
        // 0x165314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165318u;
        goto label_165318;
    }
    ctx->pc = 0x165310u;
    SET_GPR_U32(ctx, 31, 0x165318u);
    ctx->pc = 0x165314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165310u;
    // 0x165314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286E60u, 0x165310u, 0x165318u)) {
        return;
    }
    ctx->pc = 0x165318u;
label_165318:
    // 0x165318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16531c:
    // 0x16531c: 0xc0a1c20  jal         func_287080
label_165320:
    if (ctx->pc == 0x165320u) {
        ctx->pc = 0x165320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16531Cu;
        // 0x165320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165324u;
        goto label_165324;
    }
    ctx->pc = 0x16531Cu;
    SET_GPR_U32(ctx, 31, 0x165324u);
    ctx->pc = 0x165320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16531Cu;
    // 0x165320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287080u, 0x16531Cu, 0x165324u)) {
        return;
    }
    ctx->pc = 0x165324u;
label_165324:
    // 0x165324: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x165324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_165328:
    // 0x165328: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_16532c:
    // 0x16532c: 0x60f809  jalr        $v1
label_165330:
    if (ctx->pc == 0x165330u) {
        ctx->pc = 0x165330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16532Cu;
        // 0x165330: 0x26843e40  addiu       $a0, $s4, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 15936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165334u;
        goto label_165334;
    }
    ctx->pc = 0x16532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165334u);
        ctx->pc = 0x165330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16532Cu;
        // 0x165330: 0x26843e40  addiu       $a0, $s4, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 15936));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16532Cu, 0x165334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165334u;
label_165334:
    // 0x165334: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_165338:
    if (ctx->pc == 0x165338u) {
        ctx->pc = 0x165338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165334u;
        // 0x165338: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16533Cu;
        goto label_16533c;
    }
    ctx->pc = 0x165334u;
    {
        const bool branch_taken_0x165334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165334u;
        // 0x165338: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165334) {
            ctx->pc = 0x16535Cu;
            goto label_16535c;
        }
    }
    ctx->pc = 0x16533Cu;
label_16533c:
    // 0x16533c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x16533cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_165340:
    // 0x165340: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_165344:
    if (ctx->pc == 0x165344u) {
        ctx->pc = 0x165344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165340u;
        // 0x165344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165348u;
        goto label_165348;
    }
    ctx->pc = 0x165340u;
    {
        const bool branch_taken_0x165340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165340u;
        // 0x165344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165340) {
            ctx->pc = 0x165310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165310;
        }
    }
    ctx->pc = 0x165348u;
label_165348:
    // 0x165348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16534c:
    // 0x16534c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_165350:
    if (ctx->pc == 0x165350u) {
        ctx->pc = 0x165350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16534Cu;
        // 0x165350: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165354u;
        goto label_165354;
    }
    ctx->pc = 0x16534Cu;
    {
        const bool branch_taken_0x16534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16534Cu;
        // 0x165350: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16534c) {
            ctx->pc = 0x16537Cu;
            goto label_16537c;
        }
    }
    ctx->pc = 0x165354u;
label_165354:
    // 0x165354: 0x1000000e  b           . + 4 + (0xE << 2)
label_165358:
    if (ctx->pc == 0x165358u) {
        ctx->pc = 0x165358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165354u;
        // 0x165358: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16535Cu;
        goto label_16535c;
    }
    ctx->pc = 0x165354u;
    {
        const bool branch_taken_0x165354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165354u;
        // 0x165358: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165354) {
            ctx->pc = 0x165390u;
            goto label_165390;
        }
    }
    ctx->pc = 0x16535Cu;
label_16535c:
    // 0x16535c: 0xc0a1c22  jal         func_287088
label_165360:
    if (ctx->pc == 0x165360u) {
        ctx->pc = 0x165360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16535Cu;
        // 0x165360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165364u;
        goto label_165364;
    }
    ctx->pc = 0x16535Cu;
    SET_GPR_U32(ctx, 31, 0x165364u);
    ctx->pc = 0x165360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16535Cu;
    // 0x165360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287088u, 0x16535Cu, 0x165364u)) {
        return;
    }
    ctx->pc = 0x165364u;
label_165364:
    // 0x165364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165368:
    // 0x165368: 0xc0a1c2c  jal         func_2870B0
label_16536c:
    if (ctx->pc == 0x16536Cu) {
        ctx->pc = 0x16536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165368u;
        // 0x16536c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165370u;
        goto label_165370;
    }
    ctx->pc = 0x165368u;
    SET_GPR_U32(ctx, 31, 0x165370u);
    ctx->pc = 0x16536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165368u;
    // 0x16536c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2870B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2870B0u, 0x165368u, 0x165370u)) {
        return;
    }
    ctx->pc = 0x165370u;
label_165370:
    // 0x165370: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x165370u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_165374:
    // 0x165374: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_165378:
    if (ctx->pc == 0x165378u) {
        ctx->pc = 0x165378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165374u;
        // 0x165378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16537Cu;
        goto label_16537c;
    }
    ctx->pc = 0x165374u;
    {
        const bool branch_taken_0x165374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165374u;
        // 0x165378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165374) {
            ctx->pc = 0x16534Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16534c;
        }
    }
    ctx->pc = 0x16537Cu;
label_16537c:
    // 0x16537c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_165380:
    // 0x165380: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
label_165384:
    if (ctx->pc == 0x165384u) {
        ctx->pc = 0x165384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165380u;
        // 0x165384: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165388u;
        goto label_165388;
    }
    ctx->pc = 0x165380u;
    {
        const bool branch_taken_0x165380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165380u;
        // 0x165384: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165380) {
            ctx->pc = 0x1652E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1652e8;
        }
    }
    ctx->pc = 0x165388u;
label_165388:
    // 0x165388: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x165388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16538c:
    // 0x16538c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_165390:
    // 0x165390: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x165390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_165394:
    // 0x165394: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x165394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_165398:
    // 0x165398: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x165398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16539c:
    // 0x16539c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16539cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1653a0:
    // 0x1653a0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1653a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1653a4:
    // 0x1653a4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1653a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1653a8:
    // 0x1653a8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1653a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1653ac:
    // 0x1653ac: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1653acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1653b0:
    // 0x1653b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1653b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1653b4:
    // 0x1653b4: 0x3e00008  jr          $ra
label_1653b8:
    if (ctx->pc == 0x1653B8u) {
        ctx->pc = 0x1653B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653B4u;
        // 0x1653b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653BCu;
        goto label_1653bc;
    }
    ctx->pc = 0x1653B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1653B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653B4u;
        // 0x1653b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1653BCu;
label_1653bc:
    // 0x1653bc: 0x0  nop
    ctx->pc = 0x1653bcu;
    // NOP
label_1653c0:
    // 0x1653c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1653c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1653c4:
    // 0x1653c4: 0x0  nop
    ctx->pc = 0x1653c4u;
    // NOP
    ctx->pc = 0x1653c8u;
}
