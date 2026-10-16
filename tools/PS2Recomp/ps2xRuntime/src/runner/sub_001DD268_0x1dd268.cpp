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

// Function: sub_001DD268
// Address: 0x1dd268 - 0x1dd328
void sub_001DD268_0x1dd268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD268_0x1dd268");
#endif

    switch (ctx->pc) {
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        default: break;
    }

    ctx->pc = 0x1dd268u;

label_1dd268:
    // 0x1dd268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dd26c:
    // 0x1dd26c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dd26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dd270:
    // 0x1dd270: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dd274:
    // 0x1dd274: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dd278:
    // 0x1dd278: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dd27c:
    // 0x1dd27c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd280:
    // 0x1dd280: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dd284:
    // 0x1dd284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd288:
    // 0x1dd288: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd28c:
    // 0x1dd28c: 0x40f809  jalr        $v0
label_1dd290:
    if (ctx->pc == 0x1DD290u) {
        ctx->pc = 0x1DD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD28Cu;
        // 0x1dd290: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD294u;
        goto label_1dd294;
    }
    ctx->pc = 0x1DD28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD294u);
        ctx->pc = 0x1DD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD28Cu;
        // 0x1dd290: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD28Cu, 0x1DD294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD294u;
label_1dd294:
    // 0x1dd294: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd298:
    // 0x1dd298: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd29c:
    // 0x1dd29c: 0x40f809  jalr        $v0
label_1dd2a0:
    if (ctx->pc == 0x1DD2A0u) {
        ctx->pc = 0x1DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD29Cu;
        // 0x1dd2a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2A4u;
        goto label_1dd2a4;
    }
    ctx->pc = 0x1DD29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD2A4u);
        ctx->pc = 0x1DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD29Cu;
        // 0x1dd2a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD29Cu, 0x1DD2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD2A4u;
label_1dd2a4:
    // 0x1dd2a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd2a8:
    // 0x1dd2a8: 0xc08c530  jal         func_2314C0
label_1dd2ac:
    if (ctx->pc == 0x1DD2ACu) {
        ctx->pc = 0x1DD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2A8u;
        // 0x1dd2ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2B0u;
        goto label_1dd2b0;
    }
    ctx->pc = 0x1DD2A8u;
    SET_GPR_U32(ctx, 31, 0x1DD2B0u);
    ctx->pc = 0x1DD2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD2A8u;
    // 0x1dd2ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1DD2A8u, 0x1DD2B0u)) {
        return;
    }
    ctx->pc = 0x1DD2B0u;
label_1dd2b0:
    // 0x1dd2b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1dd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1dd2b4:
    // 0x1dd2b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd2b8:
    // 0x1dd2b8: 0xc08c4aa  jal         func_2312A8
label_1dd2bc:
    if (ctx->pc == 0x1DD2BCu) {
        ctx->pc = 0x1DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2B8u;
        // 0x1dd2bc: 0x8c65e678  lw          $a1, -0x1988($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2C0u;
        goto label_1dd2c0;
    }
    ctx->pc = 0x1DD2B8u;
    SET_GPR_U32(ctx, 31, 0x1DD2C0u);
    ctx->pc = 0x1DD2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD2B8u;
    // 0x1dd2bc: 0x8c65e678  lw          $a1, -0x1988($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DD2B8u, 0x1DD2C0u)) {
        return;
    }
    ctx->pc = 0x1DD2C0u;
label_1dd2c0:
    // 0x1dd2c0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1dd2c4:
    if (ctx->pc == 0x1DD2C4u) {
        ctx->pc = 0x1DD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2C0u;
        // 0x1dd2c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2C8u;
        goto label_1dd2c8;
    }
    ctx->pc = 0x1DD2C0u;
    {
        const bool branch_taken_0x1dd2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2C0u;
        // 0x1dd2c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2c0) {
            ctx->pc = 0x1DD304u;
            goto label_1dd304;
        }
    }
    ctx->pc = 0x1DD2C8u;
label_1dd2c8:
    // 0x1dd2c8: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dd2cc:
    // 0x1dd2cc: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1dd2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dd2d0:
    // 0x1dd2d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd2d4:
    // 0x1dd2d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dd2d8:
    if (ctx->pc == 0x1DD2D8u) {
        ctx->pc = 0x1DD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2D4u;
        // 0x1dd2d8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2DCu;
        goto label_1dd2dc;
    }
    ctx->pc = 0x1DD2D4u;
    {
        const bool branch_taken_0x1dd2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2D4u;
        // 0x1dd2d8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2d4) {
            ctx->pc = 0x1DD2F0u;
            goto label_1dd2f0;
        }
    }
    ctx->pc = 0x1DD2DCu;
label_1dd2dc:
    // 0x1dd2dc: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd2e0:
    // 0x1dd2e0: 0x40f809  jalr        $v0
label_1dd2e4:
    if (ctx->pc == 0x1DD2E4u) {
        ctx->pc = 0x1DD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E0u;
        // 0x1dd2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2E8u;
        goto label_1dd2e8;
    }
    ctx->pc = 0x1DD2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD2E8u);
        ctx->pc = 0x1DD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E0u;
        // 0x1dd2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2E0u, 0x1DD2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD2E8u;
label_1dd2e8:
    // 0x1dd2e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd2ec:
    if (ctx->pc == 0x1DD2ECu) {
        ctx->pc = 0x1DD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E8u;
        // 0x1dd2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2F0u;
        goto label_1dd2f0;
    }
    ctx->pc = 0x1DD2E8u;
    {
        const bool branch_taken_0x1dd2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E8u;
        // 0x1dd2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2e8) {
            ctx->pc = 0x1DD300u;
            goto label_1dd300;
        }
    }
    ctx->pc = 0x1DD2F0u;
label_1dd2f0:
    // 0x1dd2f0: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd2f4:
    // 0x1dd2f4: 0x40f809  jalr        $v0
label_1dd2f8:
    if (ctx->pc == 0x1DD2F8u) {
        ctx->pc = 0x1DD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2F4u;
        // 0x1dd2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2FCu;
        goto label_1dd2fc;
    }
    ctx->pc = 0x1DD2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD2FCu);
        ctx->pc = 0x1DD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2F4u;
        // 0x1dd2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2F4u, 0x1DD2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD2FCu;
label_1dd2fc:
    // 0x1dd2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd300:
    // 0x1dd300: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dd300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dd304:
    // 0x1dd304: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dd304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd308:
    // 0x1dd308: 0xc08c4aa  jal         func_2312A8
label_1dd30c:
    if (ctx->pc == 0x1DD30Cu) {
        ctx->pc = 0x1DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD308u;
        // 0x1dd30c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD310u;
        goto label_1dd310;
    }
    ctx->pc = 0x1DD308u;
    SET_GPR_U32(ctx, 31, 0x1DD310u);
    ctx->pc = 0x1DD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD308u;
    // 0x1dd30c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1DD308u, 0x1DD310u)) {
        return;
    }
    ctx->pc = 0x1DD310u;
label_1dd310:
    // 0x1dd310: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd314:
    // 0x1dd314: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd318:
    // 0x1dd318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd31c:
    // 0x1dd31c: 0x3e00008  jr          $ra
label_1dd320:
    if (ctx->pc == 0x1DD320u) {
        ctx->pc = 0x1DD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD31Cu;
        // 0x1dd320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD324u;
        goto label_1dd324;
    }
    ctx->pc = 0x1DD31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD31Cu;
        // 0x1dd320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD324u;
label_1dd324:
    // 0x1dd324: 0x0  nop
    ctx->pc = 0x1dd324u;
    // NOP
    ctx->pc = 0x1dd328u;
}
