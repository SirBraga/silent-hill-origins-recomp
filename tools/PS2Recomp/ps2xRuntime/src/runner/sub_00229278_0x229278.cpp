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

// Function: sub_00229278
// Address: 0x229278 - 0x229340
void sub_00229278_0x229278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229278_0x229278");
#endif

    switch (ctx->pc) {
        case 0x229278u: goto label_229278;
        case 0x22927cu: goto label_22927c;
        case 0x229280u: goto label_229280;
        case 0x229284u: goto label_229284;
        case 0x229288u: goto label_229288;
        case 0x22928cu: goto label_22928c;
        case 0x229290u: goto label_229290;
        case 0x229294u: goto label_229294;
        case 0x229298u: goto label_229298;
        case 0x22929cu: goto label_22929c;
        case 0x2292a0u: goto label_2292a0;
        case 0x2292a4u: goto label_2292a4;
        case 0x2292a8u: goto label_2292a8;
        case 0x2292acu: goto label_2292ac;
        case 0x2292b0u: goto label_2292b0;
        case 0x2292b4u: goto label_2292b4;
        case 0x2292b8u: goto label_2292b8;
        case 0x2292bcu: goto label_2292bc;
        case 0x2292c0u: goto label_2292c0;
        case 0x2292c4u: goto label_2292c4;
        case 0x2292c8u: goto label_2292c8;
        case 0x2292ccu: goto label_2292cc;
        case 0x2292d0u: goto label_2292d0;
        case 0x2292d4u: goto label_2292d4;
        case 0x2292d8u: goto label_2292d8;
        case 0x2292dcu: goto label_2292dc;
        case 0x2292e0u: goto label_2292e0;
        case 0x2292e4u: goto label_2292e4;
        case 0x2292e8u: goto label_2292e8;
        case 0x2292ecu: goto label_2292ec;
        case 0x2292f0u: goto label_2292f0;
        case 0x2292f4u: goto label_2292f4;
        case 0x2292f8u: goto label_2292f8;
        case 0x2292fcu: goto label_2292fc;
        case 0x229300u: goto label_229300;
        case 0x229304u: goto label_229304;
        case 0x229308u: goto label_229308;
        case 0x22930cu: goto label_22930c;
        case 0x229310u: goto label_229310;
        case 0x229314u: goto label_229314;
        case 0x229318u: goto label_229318;
        case 0x22931cu: goto label_22931c;
        case 0x229320u: goto label_229320;
        case 0x229324u: goto label_229324;
        case 0x229328u: goto label_229328;
        case 0x22932cu: goto label_22932c;
        case 0x229330u: goto label_229330;
        case 0x229334u: goto label_229334;
        case 0x229338u: goto label_229338;
        case 0x22933cu: goto label_22933c;
        default: break;
    }

    ctx->pc = 0x229278u;

label_229278:
    // 0x229278: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22927c:
    // 0x22927c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_229280:
    // 0x229280: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x229280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_229284:
    // 0x229284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229288:
    // 0x229288: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x229288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_22928c:
    // 0x22928c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22928cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229290:
    // 0x229290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x229290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_229294:
    // 0x229294: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x229294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_229298:
    // 0x229298: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_22929c:
    if (ctx->pc == 0x22929Cu) {
        ctx->pc = 0x22929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229298u;
        // 0x22929c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2292A0u;
        goto label_2292a0;
    }
    ctx->pc = 0x229298u;
    {
        const bool branch_taken_0x229298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229298u;
        // 0x22929c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229298) {
            ctx->pc = 0x22931Cu;
            goto label_22931c;
        }
    }
    ctx->pc = 0x2292A0u;
label_2292a0:
    // 0x2292a0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2292a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2292a4:
    // 0x2292a4: 0x0  nop
    ctx->pc = 0x2292a4u;
    // NOP
label_2292a8:
    // 0x2292a8: 0x2829825  or          $s3, $s4, $v0
    ctx->pc = 0x2292a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2292ac:
    // 0x2292ac: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x2292acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_2292b0:
    // 0x2292b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2292b4:
    if (ctx->pc == 0x2292B4u) {
        ctx->pc = 0x2292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292B0u;
        // 0x2292b4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2292B8u;
        goto label_2292b8;
    }
    ctx->pc = 0x2292B0u;
    {
        const bool branch_taken_0x2292b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292B0u;
        // 0x2292b4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292b0) {
            ctx->pc = 0x2292C8u;
            goto label_2292c8;
        }
    }
    ctx->pc = 0x2292B8u;
label_2292b8:
    // 0x2292b8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2292b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2292bc:
    // 0x2292bc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2292bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2292c0:
    // 0x2292c0: 0xc092d9c  jal         func_24B670
label_2292c4:
    if (ctx->pc == 0x2292C4u) {
        ctx->pc = 0x2292C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292C0u;
        // 0x2292c4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2292C8u;
        goto label_2292c8;
    }
    ctx->pc = 0x2292C0u;
    SET_GPR_U32(ctx, 31, 0x2292C8u);
    ctx->pc = 0x2292C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292C0u;
    // 0x2292c4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2292C0u, 0x2292C8u)) {
        return;
    }
    ctx->pc = 0x2292C8u;
label_2292c8:
    // 0x2292c8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2292c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2292cc:
    // 0x2292cc: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2292d0:
    // 0x2292d0: 0x5092000a  beql        $a0, $s2, . + 4 + (0xA << 2)
label_2292d4:
    if (ctx->pc == 0x2292D4u) {
        ctx->pc = 0x2292D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292D0u;
        // 0x2292d4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2292D8u;
        goto label_2292d8;
    }
    ctx->pc = 0x2292D0u;
    {
        const bool branch_taken_0x2292d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x2292d0) {
            ctx->pc = 0x2292D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2292D0u;
            // 0x2292d4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292FCu;
            goto label_2292fc;
        }
    }
    ctx->pc = 0x2292D8u;
label_2292d8:
    // 0x2292d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2292d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2292dc:
    // 0x2292dc: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_2292e0:
    // 0x2292e0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2292e4:
    // 0x2292e4: 0x40f809  jalr        $v0
label_2292e8:
    if (ctx->pc == 0x2292E8u) {
        ctx->pc = 0x2292ECu;
        goto label_2292ec;
    }
    ctx->pc = 0x2292E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2292ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2292E4u, 0x2292ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2292ECu;
label_2292ec:
    // 0x2292ec: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2292ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2292f0:
    // 0x2292f0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_2292f4:
    if (ctx->pc == 0x2292F4u) {
        ctx->pc = 0x2292F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292F0u;
        // 0x2292f4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2292F8u;
        goto label_2292f8;
    }
    ctx->pc = 0x2292F0u;
    {
        const bool branch_taken_0x2292f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2292F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2292F0u;
        // 0x2292f4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2292f0) {
            ctx->pc = 0x2292E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2292e0;
        }
    }
    ctx->pc = 0x2292F8u;
label_2292f8:
    // 0x2292f8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2292f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2292fc:
    // 0x2292fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2292fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_229300:
    // 0x229300: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_229304:
    // 0x229304: 0x304200f3  andi        $v0, $v0, 0xF3
    ctx->pc = 0x229304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)243);
label_229308:
    // 0x229308: 0xc08a49e  jal         func_229278
label_22930c:
    if (ctx->pc == 0x22930Cu) {
        ctx->pc = 0x22930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229308u;
        // 0x22930c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229310u;
        goto label_229310;
    }
    ctx->pc = 0x229308u;
    SET_GPR_U32(ctx, 31, 0x229310u);
    ctx->pc = 0x22930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229308u;
    // 0x22930c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229278u;
    goto label_229278;
    ctx->pc = 0x229310u;
label_229310:
    // 0x229310: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_229314:
    // 0x229314: 0x5620ffe4  bnel        $s1, $zero, . + 4 + (-0x1C << 2)
label_229318:
    if (ctx->pc == 0x229318u) {
        ctx->pc = 0x229318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229314u;
        // 0x229318: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22931Cu;
        goto label_22931c;
    }
    ctx->pc = 0x229314u;
    {
        const bool branch_taken_0x229314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x229314) {
            ctx->pc = 0x229318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229314u;
            // 0x229318: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2292A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2292a8;
        }
    }
    ctx->pc = 0x22931Cu;
label_22931c:
    // 0x22931c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22931cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_229320:
    // 0x229320: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x229320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_229324:
    // 0x229324: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x229324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_229328:
    // 0x229328: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x229328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22932c:
    // 0x22932c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22932cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_229330:
    // 0x229330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229334:
    // 0x229334: 0x3e00008  jr          $ra
label_229338:
    if (ctx->pc == 0x229338u) {
        ctx->pc = 0x229338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229334u;
        // 0x229338: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22933Cu;
        goto label_22933c;
    }
    ctx->pc = 0x229334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229334u;
        // 0x229338: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22933Cu;
label_22933c:
    // 0x22933c: 0x0  nop
    ctx->pc = 0x22933cu;
    // NOP
    ctx->pc = 0x229340u;
}
