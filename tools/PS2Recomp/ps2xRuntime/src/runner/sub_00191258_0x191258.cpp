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

// Function: sub_00191258
// Address: 0x191258 - 0x191330
void sub_00191258_0x191258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191258_0x191258");
#endif

    switch (ctx->pc) {
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        default: break;
    }

    ctx->pc = 0x191258u;

label_191258:
    // 0x191258: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x191258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19125c:
    // 0x19125c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_191260:
    // 0x191260: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x191260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_191264:
    // 0x191264: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x191264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_191268:
    // 0x191268: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x191268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_19126c:
    // 0x19126c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19126cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191270:
    // 0x191270: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x191270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_191274:
    // 0x191274: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x191274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191278:
    // 0x191278: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x191278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_19127c:
    // 0x19127c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_191280:
    if (ctx->pc == 0x191280u) {
        ctx->pc = 0x191280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19127Cu;
        // 0x191280: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191284u;
        goto label_191284;
    }
    ctx->pc = 0x19127Cu;
    {
        const bool branch_taken_0x19127c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x191280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19127Cu;
        // 0x191280: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19127c) {
            ctx->pc = 0x1912D0u;
            goto label_1912d0;
        }
    }
    ctx->pc = 0x191284u;
label_191284:
    // 0x191284: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x191284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_191288:
    // 0x191288: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19128c:
    if (ctx->pc == 0x19128Cu) {
        ctx->pc = 0x19128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191288u;
        // 0x19128c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191290u;
        goto label_191290;
    }
    ctx->pc = 0x191288u;
    {
        const bool branch_taken_0x191288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191288u;
        // 0x19128c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191288) {
            ctx->pc = 0x1912D0u;
            goto label_1912d0;
        }
    }
    ctx->pc = 0x191290u;
label_191290:
    // 0x191290: 0x2623108c  addiu       $v1, $s1, 0x108C
    ctx->pc = 0x191290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4236));
label_191294:
    // 0x191294: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_191298:
    // 0x191298: 0x40f809  jalr        $v0
label_19129c:
    if (ctx->pc == 0x19129Cu) {
        ctx->pc = 0x19129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191298u;
        // 0x19129c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912A0u;
        goto label_1912a0;
    }
    ctx->pc = 0x191298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1912A0u);
        ctx->pc = 0x19129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191298u;
        // 0x19129c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191298u, 0x1912A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1912A0u;
label_1912a0:
    // 0x1912a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1912a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1912a4:
    // 0x1912a4: 0xc080924  jal         func_202490
label_1912a8:
    if (ctx->pc == 0x1912A8u) {
        ctx->pc = 0x1912A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912A4u;
        // 0x1912a8: 0x24440005  addiu       $a0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912ACu;
        goto label_1912ac;
    }
    ctx->pc = 0x1912A4u;
    SET_GPR_U32(ctx, 31, 0x1912ACu);
    ctx->pc = 0x1912A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912A4u;
    // 0x1912a8: 0x24440005  addiu       $a0, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1912A4u, 0x1912ACu)) {
        return;
    }
    ctx->pc = 0x1912ACu;
label_1912ac:
    // 0x1912ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1912acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1912b0:
    // 0x1912b0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1912b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1912b4:
    // 0x1912b4: 0x8e22108c  lw          $v0, 0x108C($s1)
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4236)));
label_1912b8:
    // 0x1912b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1912b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1912bc:
    // 0x1912bc: 0x24a594a8  addiu       $a1, $a1, -0x6B58
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939816));
label_1912c0:
    // 0x1912c0: 0x40f809  jalr        $v0
label_1912c4:
    if (ctx->pc == 0x1912C4u) {
        ctx->pc = 0x1912C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912C0u;
        // 0x1912c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912C8u;
        goto label_1912c8;
    }
    ctx->pc = 0x1912C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1912C8u);
        ctx->pc = 0x1912C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912C0u;
        // 0x1912c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1912C0u, 0x1912C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1912C8u;
label_1912c8:
    // 0x1912c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1912cc:
    if (ctx->pc == 0x1912CCu) {
        ctx->pc = 0x1912D0u;
        goto label_1912d0;
    }
    ctx->pc = 0x1912C8u;
    {
        const bool branch_taken_0x1912c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912c8) {
            ctx->pc = 0x1912D4u;
            goto label_1912d4;
        }
    }
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1912d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1912d4:
    // 0x1912d4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1912d8:
    if (ctx->pc == 0x1912D8u) {
        ctx->pc = 0x1912D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D4u;
        // 0x1912d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912DCu;
        goto label_1912dc;
    }
    ctx->pc = 0x1912D4u;
    {
        const bool branch_taken_0x1912d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D4u;
        // 0x1912d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912d4) {
            ctx->pc = 0x191300u;
            goto label_191300;
        }
    }
    ctx->pc = 0x1912DCu;
label_1912dc:
    // 0x1912dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1912dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1912e0:
    // 0x1912e0: 0x2485002c  addiu       $a1, $a0, 0x2C
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_1912e4:
    // 0x1912e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1912e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1912e8:
    // 0x1912e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1912e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1912ec:
    // 0x1912ec: 0xc063616  jal         func_18D858
label_1912f0:
    if (ctx->pc == 0x1912F0u) {
        ctx->pc = 0x1912F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912ECu;
        // 0x1912f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912F4u;
        goto label_1912f4;
    }
    ctx->pc = 0x1912ECu;
    SET_GPR_U32(ctx, 31, 0x1912F4u);
    ctx->pc = 0x1912F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912ECu;
    // 0x1912f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x1912ECu, 0x1912F4u)) {
        return;
    }
    ctx->pc = 0x1912F4u;
label_1912f4:
    // 0x1912f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1912f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1912f8:
    // 0x1912f8: 0xc0808b8  jal         func_2022E0
label_1912fc:
    if (ctx->pc == 0x1912FCu) {
        ctx->pc = 0x1912FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912F8u;
        // 0x1912fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191300u;
        goto label_191300;
    }
    ctx->pc = 0x1912F8u;
    SET_GPR_U32(ctx, 31, 0x191300u);
    ctx->pc = 0x1912FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912F8u;
    // 0x1912fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1912F8u, 0x191300u)) {
        return;
    }
    ctx->pc = 0x191300u;
label_191300:
    // 0x191300: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_191304:
    if (ctx->pc == 0x191304u) {
        ctx->pc = 0x191304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191300u;
        // 0x191304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191308u;
        goto label_191308;
    }
    ctx->pc = 0x191300u;
    {
        const bool branch_taken_0x191300 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191300u;
        // 0x191304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191300) {
            ctx->pc = 0x191310u;
            goto label_191310;
        }
    }
    ctx->pc = 0x191308u;
label_191308:
    // 0x191308: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x191308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_19130c:
    // 0x19130c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x19130cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_191310:
    // 0x191310: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x191310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_191314:
    // 0x191314: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x191314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191318:
    // 0x191318: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x191318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19131c:
    // 0x19131c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19131cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_191320:
    // 0x191320: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x191320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191324:
    // 0x191324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191328:
    // 0x191328: 0x3e00008  jr          $ra
label_19132c:
    if (ctx->pc == 0x19132Cu) {
        ctx->pc = 0x19132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191328u;
        // 0x19132c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191330u;
        goto label_fallthrough_0x191328;
    }
    ctx->pc = 0x191328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191328u;
        // 0x19132c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x191328:
    ctx->pc = 0x191330u;
}
