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

// Function: sub_001EC260
// Address: 0x1ec260 - 0x1ec378
void sub_001EC260_0x1ec260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC260_0x1ec260");
#endif

    switch (ctx->pc) {
        case 0x1ec260u: goto label_1ec260;
        case 0x1ec264u: goto label_1ec264;
        case 0x1ec268u: goto label_1ec268;
        case 0x1ec26cu: goto label_1ec26c;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec274u: goto label_1ec274;
        case 0x1ec278u: goto label_1ec278;
        case 0x1ec27cu: goto label_1ec27c;
        case 0x1ec280u: goto label_1ec280;
        case 0x1ec284u: goto label_1ec284;
        case 0x1ec288u: goto label_1ec288;
        case 0x1ec28cu: goto label_1ec28c;
        case 0x1ec290u: goto label_1ec290;
        case 0x1ec294u: goto label_1ec294;
        case 0x1ec298u: goto label_1ec298;
        case 0x1ec29cu: goto label_1ec29c;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2a4u: goto label_1ec2a4;
        case 0x1ec2a8u: goto label_1ec2a8;
        case 0x1ec2acu: goto label_1ec2ac;
        case 0x1ec2b0u: goto label_1ec2b0;
        case 0x1ec2b4u: goto label_1ec2b4;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec2bcu: goto label_1ec2bc;
        case 0x1ec2c0u: goto label_1ec2c0;
        case 0x1ec2c4u: goto label_1ec2c4;
        case 0x1ec2c8u: goto label_1ec2c8;
        case 0x1ec2ccu: goto label_1ec2cc;
        case 0x1ec2d0u: goto label_1ec2d0;
        case 0x1ec2d4u: goto label_1ec2d4;
        case 0x1ec2d8u: goto label_1ec2d8;
        case 0x1ec2dcu: goto label_1ec2dc;
        case 0x1ec2e0u: goto label_1ec2e0;
        case 0x1ec2e4u: goto label_1ec2e4;
        case 0x1ec2e8u: goto label_1ec2e8;
        case 0x1ec2ecu: goto label_1ec2ec;
        case 0x1ec2f0u: goto label_1ec2f0;
        case 0x1ec2f4u: goto label_1ec2f4;
        case 0x1ec2f8u: goto label_1ec2f8;
        case 0x1ec2fcu: goto label_1ec2fc;
        case 0x1ec300u: goto label_1ec300;
        case 0x1ec304u: goto label_1ec304;
        case 0x1ec308u: goto label_1ec308;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec310u: goto label_1ec310;
        case 0x1ec314u: goto label_1ec314;
        case 0x1ec318u: goto label_1ec318;
        case 0x1ec31cu: goto label_1ec31c;
        case 0x1ec320u: goto label_1ec320;
        case 0x1ec324u: goto label_1ec324;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec32cu: goto label_1ec32c;
        case 0x1ec330u: goto label_1ec330;
        case 0x1ec334u: goto label_1ec334;
        case 0x1ec338u: goto label_1ec338;
        case 0x1ec33cu: goto label_1ec33c;
        case 0x1ec340u: goto label_1ec340;
        case 0x1ec344u: goto label_1ec344;
        case 0x1ec348u: goto label_1ec348;
        case 0x1ec34cu: goto label_1ec34c;
        case 0x1ec350u: goto label_1ec350;
        case 0x1ec354u: goto label_1ec354;
        case 0x1ec358u: goto label_1ec358;
        case 0x1ec35cu: goto label_1ec35c;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec364u: goto label_1ec364;
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec370u: goto label_1ec370;
        case 0x1ec374u: goto label_1ec374;
        default: break;
    }

    ctx->pc = 0x1ec260u;

label_1ec260:
    // 0x1ec260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ec264:
    // 0x1ec264: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ec264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ec268:
    // 0x1ec268: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ec268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ec26c:
    // 0x1ec26c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ec26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ec270:
    // 0x1ec270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec274:
    // 0x1ec274: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ec274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ec278:
    // 0x1ec278: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ec278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1ec27c:
    // 0x1ec27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec280:
    // 0x1ec280: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ec284:
    // 0x1ec284: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x1ec284u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ec288:
    // 0x1ec288: 0xc0932d4  jal         func_24CB50
label_1ec28c:
    if (ctx->pc == 0x1EC28Cu) {
        ctx->pc = 0x1EC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC288u;
        // 0x1ec28c: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC290u;
        goto label_1ec290;
    }
    ctx->pc = 0x1EC288u;
    SET_GPR_U32(ctx, 31, 0x1EC290u);
    ctx->pc = 0x1EC28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC288u;
    // 0x1ec28c: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC288u, 0x1EC290u)) {
        return;
    }
    ctx->pc = 0x1EC290u;
label_1ec290:
    // 0x1ec290: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec294:
    // 0x1ec294: 0x24040134  addiu       $a0, $zero, 0x134
    ctx->pc = 0x1ec294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_1ec298:
    // 0x1ec298: 0x40f809  jalr        $v0
label_1ec29c:
    if (ctx->pc == 0x1EC29Cu) {
        ctx->pc = 0x1EC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC298u;
        // 0x1ec29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2A0u;
        goto label_1ec2a0;
    }
    ctx->pc = 0x1EC298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC2A0u);
        ctx->pc = 0x1EC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC298u;
        // 0x1ec29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC298u, 0x1EC2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC2A0u;
label_1ec2a0:
    // 0x1ec2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2a4:
    // 0x1ec2a4: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1ec2a8:
    if (ctx->pc == 0x1EC2A8u) {
        ctx->pc = 0x1EC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2A4u;
        // 0x1ec2a8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2ACu;
        goto label_1ec2ac;
    }
    ctx->pc = 0x1EC2A4u;
    {
        const bool branch_taken_0x1ec2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec2a4) {
            ctx->pc = 0x1EC2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC2A4u;
            // 0x1ec2a8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC314u;
            goto label_1ec314;
        }
    }
    ctx->pc = 0x1EC2ACu;
label_1ec2ac:
    // 0x1ec2ac: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1ec2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1ec2b0:
    // 0x1ec2b0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ec2b4:
    // 0x1ec2b4: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1ec2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_1ec2b8:
    // 0x1ec2b8: 0x2602012b  addiu       $v0, $s0, 0x12B
    ctx->pc = 0x1ec2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 299));
label_1ec2bc:
    // 0x1ec2bc: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1ec2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_1ec2c0:
    // 0x1ec2c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ec2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ec2c4:
    // 0x1ec2c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ec2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1ec2c8:
    // 0x1ec2c8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ec2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1ec2cc:
    // 0x1ec2cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ec2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1ec2d0:
    // 0x1ec2d0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1ec2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_1ec2d4:
    // 0x1ec2d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ec2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1ec2d8:
    // 0x1ec2d8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ec2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1ec2dc:
    // 0x1ec2dc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ec2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ec2e0:
    // 0x1ec2e0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ec2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1ec2e4:
    // 0x1ec2e4: 0x0  nop
    ctx->pc = 0x1ec2e4u;
    // NOP
label_1ec2e8:
    // 0x1ec2e8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ec2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ec2ec:
    // 0x1ec2ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ec2f0:
    // 0x1ec2f0: 0x0  nop
    ctx->pc = 0x1ec2f0u;
    // NOP
label_1ec2f4:
    // 0x1ec2f4: 0x0  nop
    ctx->pc = 0x1ec2f4u;
    // NOP
label_1ec2f8:
    // 0x1ec2f8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_1ec2fc:
    if (ctx->pc == 0x1EC2FCu) {
        ctx->pc = 0x1EC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F8u;
        // 0x1ec2fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC300u;
        goto label_1ec300;
    }
    ctx->pc = 0x1EC2F8u;
    {
        const bool branch_taken_0x1ec2f8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1EC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F8u;
        // 0x1ec2fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2f8) {
            ctx->pc = 0x1EC2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec2e8;
        }
    }
    ctx->pc = 0x1EC300u;
label_1ec300:
    // 0x1ec300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ec304:
    // 0x1ec304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ec308:
    // 0x1ec308: 0x0  nop
    ctx->pc = 0x1ec308u;
    // NOP
label_1ec30c:
    // 0x1ec30c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x1ec30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_1ec310:
    // 0x1ec310: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ec314:
    // 0x1ec314: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ec318:
    if (ctx->pc == 0x1EC318u) {
        ctx->pc = 0x1EC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC314u;
        // 0x1ec318: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC31Cu;
        goto label_1ec31c;
    }
    ctx->pc = 0x1EC314u;
    {
        const bool branch_taken_0x1ec314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec314) {
            ctx->pc = 0x1EC318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC314u;
            // 0x1ec318: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC32Cu;
            goto label_1ec32c;
        }
    }
    ctx->pc = 0x1EC31Cu;
label_1ec31c:
    // 0x1ec31c: 0xc07b098  jal         func_1EC260
label_1ec320:
    if (ctx->pc == 0x1EC320u) {
        ctx->pc = 0x1EC324u;
        goto label_1ec324;
    }
    ctx->pc = 0x1EC31Cu;
    SET_GPR_U32(ctx, 31, 0x1EC324u);
    ctx->pc = 0x1EC260u;
    goto label_1ec260;
    ctx->pc = 0x1EC324u;
label_1ec324:
    // 0x1ec324: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ec324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ec328:
    // 0x1ec328: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1ec328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ec32c:
    // 0x1ec32c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ec330:
    if (ctx->pc == 0x1EC330u) {
        ctx->pc = 0x1EC334u;
        goto label_1ec334;
    }
    ctx->pc = 0x1EC32Cu;
    {
        const bool branch_taken_0x1ec32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec32c) {
            ctx->pc = 0x1EC340u;
            goto label_1ec340;
        }
    }
    ctx->pc = 0x1EC334u;
label_1ec334:
    // 0x1ec334: 0xc07b098  jal         func_1EC260
label_1ec338:
    if (ctx->pc == 0x1EC338u) {
        ctx->pc = 0x1EC33Cu;
        goto label_1ec33c;
    }
    ctx->pc = 0x1EC334u;
    SET_GPR_U32(ctx, 31, 0x1EC33Cu);
    ctx->pc = 0x1EC260u;
    goto label_1ec260;
    ctx->pc = 0x1EC33Cu;
label_1ec33c:
    // 0x1ec33c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ec33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ec340:
    // 0x1ec340: 0xc07a7dc  jal         func_1E9F70
label_1ec344:
    if (ctx->pc == 0x1EC344u) {
        ctx->pc = 0x1EC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC340u;
        // 0x1ec344: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC348u;
        goto label_1ec348;
    }
    ctx->pc = 0x1EC340u;
    SET_GPR_U32(ctx, 31, 0x1EC348u);
    ctx->pc = 0x1EC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC340u;
    // 0x1ec344: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E9F70u, 0x1EC340u, 0x1EC348u)) {
        return;
    }
    ctx->pc = 0x1EC348u;
label_1ec348:
    // 0x1ec348: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ec348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ec34c:
    // 0x1ec34c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec350:
    // 0x1ec350: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ec350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec354:
    // 0x1ec354: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ec354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec358:
    // 0x1ec358: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ec358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec35c:
    // 0x1ec35c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ec35cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec360:
    // 0x1ec360: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ec360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec364:
    // 0x1ec364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec368:
    // 0x1ec368: 0x3e00008  jr          $ra
label_1ec36c:
    if (ctx->pc == 0x1EC36Cu) {
        ctx->pc = 0x1EC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC368u;
        // 0x1ec36c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC370u;
        goto label_1ec370;
    }
    ctx->pc = 0x1EC368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC368u;
        // 0x1ec36c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC370u;
label_1ec370:
    // 0x1ec370: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ec374:
    // 0x1ec374: 0x0  nop
    ctx->pc = 0x1ec374u;
    // NOP
    ctx->pc = 0x1ec378u;
}
