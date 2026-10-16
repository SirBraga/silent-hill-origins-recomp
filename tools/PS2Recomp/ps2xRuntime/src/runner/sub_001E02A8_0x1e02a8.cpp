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

// Function: sub_001E02A8
// Address: 0x1e02a8 - 0x1e0438
void sub_001E02A8_0x1e02a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E02A8_0x1e02a8");
#endif

    switch (ctx->pc) {
        case 0x1e02a8u: goto label_1e02a8;
        case 0x1e02acu: goto label_1e02ac;
        case 0x1e02b0u: goto label_1e02b0;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02b8u: goto label_1e02b8;
        case 0x1e02bcu: goto label_1e02bc;
        case 0x1e02c0u: goto label_1e02c0;
        case 0x1e02c4u: goto label_1e02c4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02ccu: goto label_1e02cc;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02d8u: goto label_1e02d8;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e02e0u: goto label_1e02e0;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02e8u: goto label_1e02e8;
        case 0x1e02ecu: goto label_1e02ec;
        case 0x1e02f0u: goto label_1e02f0;
        case 0x1e02f4u: goto label_1e02f4;
        case 0x1e02f8u: goto label_1e02f8;
        case 0x1e02fcu: goto label_1e02fc;
        case 0x1e0300u: goto label_1e0300;
        case 0x1e0304u: goto label_1e0304;
        case 0x1e0308u: goto label_1e0308;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0310u: goto label_1e0310;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0318u: goto label_1e0318;
        case 0x1e031cu: goto label_1e031c;
        case 0x1e0320u: goto label_1e0320;
        case 0x1e0324u: goto label_1e0324;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e032cu: goto label_1e032c;
        case 0x1e0330u: goto label_1e0330;
        case 0x1e0334u: goto label_1e0334;
        case 0x1e0338u: goto label_1e0338;
        case 0x1e033cu: goto label_1e033c;
        case 0x1e0340u: goto label_1e0340;
        case 0x1e0344u: goto label_1e0344;
        case 0x1e0348u: goto label_1e0348;
        case 0x1e034cu: goto label_1e034c;
        case 0x1e0350u: goto label_1e0350;
        case 0x1e0354u: goto label_1e0354;
        case 0x1e0358u: goto label_1e0358;
        case 0x1e035cu: goto label_1e035c;
        case 0x1e0360u: goto label_1e0360;
        case 0x1e0364u: goto label_1e0364;
        case 0x1e0368u: goto label_1e0368;
        case 0x1e036cu: goto label_1e036c;
        case 0x1e0370u: goto label_1e0370;
        case 0x1e0374u: goto label_1e0374;
        case 0x1e0378u: goto label_1e0378;
        case 0x1e037cu: goto label_1e037c;
        case 0x1e0380u: goto label_1e0380;
        case 0x1e0384u: goto label_1e0384;
        case 0x1e0388u: goto label_1e0388;
        case 0x1e038cu: goto label_1e038c;
        case 0x1e0390u: goto label_1e0390;
        case 0x1e0394u: goto label_1e0394;
        case 0x1e0398u: goto label_1e0398;
        case 0x1e039cu: goto label_1e039c;
        case 0x1e03a0u: goto label_1e03a0;
        case 0x1e03a4u: goto label_1e03a4;
        case 0x1e03a8u: goto label_1e03a8;
        case 0x1e03acu: goto label_1e03ac;
        case 0x1e03b0u: goto label_1e03b0;
        case 0x1e03b4u: goto label_1e03b4;
        case 0x1e03b8u: goto label_1e03b8;
        case 0x1e03bcu: goto label_1e03bc;
        case 0x1e03c0u: goto label_1e03c0;
        case 0x1e03c4u: goto label_1e03c4;
        case 0x1e03c8u: goto label_1e03c8;
        case 0x1e03ccu: goto label_1e03cc;
        case 0x1e03d0u: goto label_1e03d0;
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03d8u: goto label_1e03d8;
        case 0x1e03dcu: goto label_1e03dc;
        case 0x1e03e0u: goto label_1e03e0;
        case 0x1e03e4u: goto label_1e03e4;
        case 0x1e03e8u: goto label_1e03e8;
        case 0x1e03ecu: goto label_1e03ec;
        case 0x1e03f0u: goto label_1e03f0;
        case 0x1e03f4u: goto label_1e03f4;
        case 0x1e03f8u: goto label_1e03f8;
        case 0x1e03fcu: goto label_1e03fc;
        case 0x1e0400u: goto label_1e0400;
        case 0x1e0404u: goto label_1e0404;
        case 0x1e0408u: goto label_1e0408;
        case 0x1e040cu: goto label_1e040c;
        case 0x1e0410u: goto label_1e0410;
        case 0x1e0414u: goto label_1e0414;
        case 0x1e0418u: goto label_1e0418;
        case 0x1e041cu: goto label_1e041c;
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0424u: goto label_1e0424;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e042cu: goto label_1e042c;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0434u: goto label_1e0434;
        default: break;
    }

    ctx->pc = 0x1e02a8u;

label_1e02a8:
    // 0x1e02a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e02a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e02ac:
    // 0x1e02ac: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1e02b0:
    // 0x1e02b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e02b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e02b4:
    // 0x1e02b4: 0x8c62e6d4  lw          $v0, -0x192C($v1)
    ctx->pc = 0x1e02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960852)));
label_1e02b8:
    // 0x1e02b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e02b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e02bc:
    // 0x1e02bc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e02bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1e02c0:
    // 0x1e02c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1e02c4:
    // 0x1e02c4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e02c8:
    // 0x1e02c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e02c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e02cc:
    // 0x1e02cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e02ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1e02d0:
    // 0x1e02d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e02d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e02d4:
    // 0x1e02d4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1e02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1e02d8:
    // 0x1e02d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1e02dc:
    if (ctx->pc == 0x1E02DCu) {
        ctx->pc = 0x1E02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D8u;
        // 0x1e02dc: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02E0u;
        goto label_1e02e0;
    }
    ctx->pc = 0x1E02D8u;
    {
        const bool branch_taken_0x1e02d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02D8u;
        // 0x1e02dc: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02d8) {
            ctx->pc = 0x1E02E8u;
            goto label_1e02e8;
        }
    }
    ctx->pc = 0x1E02E0u;
label_1e02e0:
    // 0x1e02e0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1e02e4:
    if (ctx->pc == 0x1E02E4u) {
        ctx->pc = 0x1E02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02E0u;
        // 0x1e02e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02E8u;
        goto label_1e02e8;
    }
    ctx->pc = 0x1E02E0u;
    {
        const bool branch_taken_0x1e02e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02E0u;
        // 0x1e02e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02e0) {
            ctx->pc = 0x1E0410u;
            goto label_1e0410;
        }
    }
    ctx->pc = 0x1E02E8u;
label_1e02e8:
    // 0x1e02e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e02e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e02ec:
    // 0x1e02ec: 0xc0a02e0  jal         func_280B80
label_1e02f0:
    if (ctx->pc == 0x1E02F0u) {
        ctx->pc = 0x1E02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02ECu;
        // 0x1e02f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02F4u;
        goto label_1e02f4;
    }
    ctx->pc = 0x1E02ECu;
    SET_GPR_U32(ctx, 31, 0x1E02F4u);
    ctx->pc = 0x1E02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02ECu;
    // 0x1e02f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280B80u, 0x1E02ECu, 0x1E02F4u)) {
        return;
    }
    ctx->pc = 0x1E02F4u;
label_1e02f4:
    // 0x1e02f4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1e02f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e02f8:
    // 0x1e02f8: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x1e02f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_1e02fc:
    // 0x1e02fc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1e02fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e0300:
    // 0x1e0300: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1e0300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1e0304:
    // 0x1e0304: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x1e0304u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_1e0308:
    // 0x1e0308: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x1e0308u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18));
label_1e030c:
    // 0x1e030c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e0310:
    if (ctx->pc == 0x1E0310u) {
        ctx->pc = 0x1E0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E030Cu;
        // 0x1e0310: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0314u;
        goto label_1e0314;
    }
    ctx->pc = 0x1E030Cu;
    {
        const bool branch_taken_0x1e030c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E030Cu;
        // 0x1e0310: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e030c) {
            ctx->pc = 0x1E0330u;
            goto label_1e0330;
        }
    }
    ctx->pc = 0x1E0314u;
label_1e0314:
    // 0x1e0314: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_1e0318:
    // 0x1e0318: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x1e0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_1e031c:
    // 0x1e031c: 0x40f809  jalr        $v0
label_1e0320:
    if (ctx->pc == 0x1E0320u) {
        ctx->pc = 0x1E0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E031Cu;
        // 0x1e0320: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0324u;
        goto label_1e0324;
    }
    ctx->pc = 0x1E031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0324u);
        ctx->pc = 0x1E0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E031Cu;
        // 0x1e0320: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E031Cu, 0x1E0324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0324u;
label_1e0324:
    // 0x1e0324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0328:
    // 0x1e0328: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1e032c:
    if (ctx->pc == 0x1E032Cu) {
        ctx->pc = 0x1E032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0328u;
        // 0x1e032c: 0x8e82e6d4  lw          $v0, -0x192C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0330u;
        goto label_1e0330;
    }
    ctx->pc = 0x1E0328u;
    {
        const bool branch_taken_0x1e0328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0328u;
        // 0x1e032c: 0x8e82e6d4  lw          $v0, -0x192C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0328) {
            ctx->pc = 0x1E0338u;
            goto label_1e0338;
        }
    }
    ctx->pc = 0x1E0330u;
label_1e0330:
    // 0x1e0330: 0x10000037  b           . + 4 + (0x37 << 2)
label_1e0334:
    if (ctx->pc == 0x1E0334u) {
        ctx->pc = 0x1E0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0330u;
        // 0x1e0334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0338u;
        goto label_1e0338;
    }
    ctx->pc = 0x1E0330u;
    {
        const bool branch_taken_0x1e0330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0330u;
        // 0x1e0334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0330) {
            ctx->pc = 0x1E0410u;
            goto label_1e0410;
        }
    }
    ctx->pc = 0x1E0338u;
label_1e0338:
    // 0x1e0338: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e033c:
    // 0x1e033c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1e033cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_1e0340:
    // 0x1e0340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e0344:
    // 0x1e0344: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e0348:
    // 0x1e0348: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1e0348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1e034c:
    // 0x1e034c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e034cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e0350:
    // 0x1e0350: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1e0354:
    // 0x1e0354: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1e0354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_1e0358:
    // 0x1e0358: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x1e0358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_1e035c:
    // 0x1e035c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e0360:
    // 0x1e0360: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x1e0360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1e0364:
    // 0x1e0364: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1e0364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1e0368:
    // 0x1e0368: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1e0368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1e036c:
    // 0x1e036c: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1e036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1e0370:
    // 0x1e0370: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1e0370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1e0374:
    // 0x1e0374: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1e0374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1e0378:
    // 0x1e0378: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x1e0378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_1e037c:
    // 0x1e037c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x1e037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_1e0380:
    // 0x1e0380: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1e0380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_1e0384:
    // 0x1e0384: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x1e0384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_1e0388:
    // 0x1e0388: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x1e0388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_1e038c:
    // 0x1e038c: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x1e038cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_1e0390:
    // 0x1e0390: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x1e0390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_1e0394:
    // 0x1e0394: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x1e0394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_1e0398:
    // 0x1e0398: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x1e0398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1e039c:
    // 0x1e039c: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x1e039cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_1e03a0:
    // 0x1e03a0: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x1e03a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_1e03a4:
    // 0x1e03a4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1e03a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1e03a8:
    // 0x1e03a8: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x1e03a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_1e03ac:
    // 0x1e03ac: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1e03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_1e03b0:
    // 0x1e03b0: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1e03b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_1e03b4:
    // 0x1e03b4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x1e03b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_1e03b8:
    // 0x1e03b8: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x1e03b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_1e03bc:
    // 0x1e03bc: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x1e03bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_1e03c0:
    // 0x1e03c0: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x1e03c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
label_1e03c4:
    // 0x1e03c4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x1e03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1e03c8:
    // 0x1e03c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e03c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e03cc:
    // 0x1e03cc: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
label_1e03d0:
    if (ctx->pc == 0x1E03D0u) {
        ctx->pc = 0x1E03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03CCu;
        // 0x1e03d0: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03D4u;
        goto label_1e03d4;
    }
    ctx->pc = 0x1E03CCu;
    {
        const bool branch_taken_0x1e03cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03CCu;
        // 0x1e03d0: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03cc) {
            ctx->pc = 0x1E03E8u;
            goto label_1e03e8;
        }
    }
    ctx->pc = 0x1E03D4u;
label_1e03d4:
    // 0x1e03d4: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
label_1e03d8:
    if (ctx->pc == 0x1E03D8u) {
        ctx->pc = 0x1E03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03D4u;
        // 0x1e03d8: 0x8e83e6d4  lw          $v1, -0x192C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03DCu;
        goto label_1e03dc;
    }
    ctx->pc = 0x1E03D4u;
    {
        const bool branch_taken_0x1e03d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1E03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03D4u;
        // 0x1e03d8: 0x8e83e6d4  lw          $v1, -0x192C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03d4) {
            ctx->pc = 0x1E03FCu;
            goto label_1e03fc;
        }
    }
    ctx->pc = 0x1E03DCu;
label_1e03dc:
    // 0x1e03dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e03e0:
    if (ctx->pc == 0x1E03E0u) {
        ctx->pc = 0x1E03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03DCu;
        // 0x1e03e0: 0x2231821  addu        $v1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03E4u;
        goto label_1e03e4;
    }
    ctx->pc = 0x1E03DCu;
    {
        const bool branch_taken_0x1e03dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03DCu;
        // 0x1e03e0: 0x2231821  addu        $v1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03dc) {
            ctx->pc = 0x1E040Cu;
            goto label_1e040c;
        }
    }
    ctx->pc = 0x1E03E4u;
label_1e03e4:
    // 0x1e03e4: 0x0  nop
    ctx->pc = 0x1e03e4u;
    // NOP
label_1e03e8:
    // 0x1e03e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e03e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e03ec:
    // 0x1e03ec: 0xc0a0472  jal         func_2811C8
label_1e03f0:
    if (ctx->pc == 0x1E03F0u) {
        ctx->pc = 0x1E03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03ECu;
        // 0x1e03f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03F4u;
        goto label_1e03f4;
    }
    ctx->pc = 0x1E03ECu;
    SET_GPR_U32(ctx, 31, 0x1E03F4u);
    ctx->pc = 0x1E03F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03ECu;
    // 0x1e03f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2811C8u, 0x1E03ECu, 0x1E03F4u)) {
        return;
    }
    ctx->pc = 0x1E03F4u;
label_1e03f4:
    // 0x1e03f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e03f8:
    if (ctx->pc == 0x1E03F8u) {
        ctx->pc = 0x1E03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03F4u;
        // 0x1e03f8: 0x8e83e6d4  lw          $v1, -0x192C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E03FCu;
        goto label_1e03fc;
    }
    ctx->pc = 0x1E03F4u;
    {
        const bool branch_taken_0x1e03f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03F4u;
        // 0x1e03f8: 0x8e83e6d4  lw          $v1, -0x192C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03f4) {
            ctx->pc = 0x1E0408u;
            goto label_1e0408;
        }
    }
    ctx->pc = 0x1E03FCu;
label_1e03fc:
    // 0x1e03fc: 0xc0a0472  jal         func_2811C8
label_1e0400:
    if (ctx->pc == 0x1E0400u) {
        ctx->pc = 0x1E0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03FCu;
        // 0x1e0400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0404u;
        goto label_1e0404;
    }
    ctx->pc = 0x1E03FCu;
    SET_GPR_U32(ctx, 31, 0x1E0404u);
    ctx->pc = 0x1E0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03FCu;
    // 0x1e0400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2811C8u, 0x1E03FCu, 0x1E0404u)) {
        return;
    }
    ctx->pc = 0x1E0404u;
label_1e0404:
    // 0x1e0404: 0x8e83e6d4  lw          $v1, -0x192C($s4)
    ctx->pc = 0x1e0404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960852)));
label_1e0408:
    // 0x1e0408: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1e0408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e040c:
    // 0x1e040c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e0410:
    // 0x1e0410: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e0410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e0414:
    // 0x1e0414: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e0414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e0418:
    // 0x1e0418: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e0418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e041c:
    // 0x1e041c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e041cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0420:
    // 0x1e0420: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e0420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0424:
    // 0x1e0424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0428:
    // 0x1e0428: 0x3e00008  jr          $ra
label_1e042c:
    if (ctx->pc == 0x1E042Cu) {
        ctx->pc = 0x1E042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0428u;
        // 0x1e042c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0430u;
        goto label_1e0430;
    }
    ctx->pc = 0x1E0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0428u;
        // 0x1e042c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0430u;
label_1e0430:
    // 0x1e0430: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e0434:
    // 0x1e0434: 0x0  nop
    ctx->pc = 0x1e0434u;
    // NOP
    ctx->pc = 0x1e0438u;
}
