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

// Function: sub_001DD9B0
// Address: 0x1dd9b0 - 0x1dda70
void sub_001DD9B0_0x1dd9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD9B0_0x1dd9b0");
#endif

    switch (ctx->pc) {
        case 0x1dd9b0u: goto label_1dd9b0;
        case 0x1dd9b4u: goto label_1dd9b4;
        case 0x1dd9b8u: goto label_1dd9b8;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9c0u: goto label_1dd9c0;
        case 0x1dd9c4u: goto label_1dd9c4;
        case 0x1dd9c8u: goto label_1dd9c8;
        case 0x1dd9ccu: goto label_1dd9cc;
        case 0x1dd9d0u: goto label_1dd9d0;
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9d8u: goto label_1dd9d8;
        case 0x1dd9dcu: goto label_1dd9dc;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9e8u: goto label_1dd9e8;
        case 0x1dd9ecu: goto label_1dd9ec;
        case 0x1dd9f0u: goto label_1dd9f0;
        case 0x1dd9f4u: goto label_1dd9f4;
        case 0x1dd9f8u: goto label_1dd9f8;
        case 0x1dd9fcu: goto label_1dd9fc;
        case 0x1dda00u: goto label_1dda00;
        case 0x1dda04u: goto label_1dda04;
        case 0x1dda08u: goto label_1dda08;
        case 0x1dda0cu: goto label_1dda0c;
        case 0x1dda10u: goto label_1dda10;
        case 0x1dda14u: goto label_1dda14;
        case 0x1dda18u: goto label_1dda18;
        case 0x1dda1cu: goto label_1dda1c;
        case 0x1dda20u: goto label_1dda20;
        case 0x1dda24u: goto label_1dda24;
        case 0x1dda28u: goto label_1dda28;
        case 0x1dda2cu: goto label_1dda2c;
        case 0x1dda30u: goto label_1dda30;
        case 0x1dda34u: goto label_1dda34;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda3cu: goto label_1dda3c;
        case 0x1dda40u: goto label_1dda40;
        case 0x1dda44u: goto label_1dda44;
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda4cu: goto label_1dda4c;
        case 0x1dda50u: goto label_1dda50;
        case 0x1dda54u: goto label_1dda54;
        case 0x1dda58u: goto label_1dda58;
        case 0x1dda5cu: goto label_1dda5c;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda64u: goto label_1dda64;
        case 0x1dda68u: goto label_1dda68;
        case 0x1dda6cu: goto label_1dda6c;
        default: break;
    }

    ctx->pc = 0x1dd9b0u;

label_1dd9b0:
    // 0x1dd9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dd9b4:
    // 0x1dd9b4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1dd9b8:
    // 0x1dd9b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dd9bc:
    // 0x1dd9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9c0:
    // 0x1dd9c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dd9c4:
    // 0x1dd9c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dd9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1dd9c8:
    // 0x1dd9c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9cc:
    // 0x1dd9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd9d0:
    // 0x1dd9d0: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x1dd9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1dd9d4:
    // 0x1dd9d4: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x1dd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_1dd9d8:
    // 0x1dd9d8: 0x40f809  jalr        $v0
label_1dd9dc:
    if (ctx->pc == 0x1DD9DCu) {
        ctx->pc = 0x1DD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D8u;
        // 0x1dd9dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD9E0u;
        goto label_1dd9e0;
    }
    ctx->pc = 0x1DD9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD9E0u);
        ctx->pc = 0x1DD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D8u;
        // 0x1dd9dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9D8u, 0x1DD9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD9E0u;
label_1dd9e0:
    // 0x1dd9e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9e4:
    // 0x1dd9e4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1dd9e8:
    if (ctx->pc == 0x1DD9E8u) {
        ctx->pc = 0x1DD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9E4u;
        // 0x1dd9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD9ECu;
        goto label_1dd9ec;
    }
    ctx->pc = 0x1DD9E4u;
    {
        const bool branch_taken_0x1dd9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9E4u;
        // 0x1dd9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9e4) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DD9ECu;
label_1dd9ec:
    // 0x1dd9ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1dd9f0:
    // 0x1dd9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd9f4:
    // 0x1dd9f4: 0x24421c00  addiu       $v0, $v0, 0x1C00
    ctx->pc = 0x1dd9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
label_1dd9f8:
    // 0x1dd9f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1dd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1dd9fc:
    // 0x1dd9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dda00:
    // 0x1dda00: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1dda00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1dda04:
    // 0x1dda04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dda04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dda08:
    // 0x1dda08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dda08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dda0c:
    // 0x1dda0c: 0xc0927be  jal         func_249EF8
label_1dda10:
    if (ctx->pc == 0x1DDA10u) {
        ctx->pc = 0x1DDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA0Cu;
        // 0x1dda10: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA14u;
        goto label_1dda14;
    }
    ctx->pc = 0x1DDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1DDA14u);
    ctx->pc = 0x1DDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA0Cu;
    // 0x1dda10: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1DDA0Cu, 0x1DDA14u)) {
        return;
    }
    ctx->pc = 0x1DDA14u;
label_1dda14:
    // 0x1dda14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dda14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dda18:
    // 0x1dda18: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1dda1c:
    // 0x1dda1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dda1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dda20:
    // 0x1dda20: 0xc09270a  jal         func_249C28
label_1dda24:
    if (ctx->pc == 0x1DDA24u) {
        ctx->pc = 0x1DDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA20u;
        // 0x1dda24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA28u;
        goto label_1dda28;
    }
    ctx->pc = 0x1DDA20u;
    SET_GPR_U32(ctx, 31, 0x1DDA28u);
    ctx->pc = 0x1DDA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA20u;
    // 0x1dda24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x1DDA20u, 0x1DDA28u)) {
        return;
    }
    ctx->pc = 0x1DDA28u;
label_1dda28:
    // 0x1dda28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1dda2c:
    if (ctx->pc == 0x1DDA2Cu) {
        ctx->pc = 0x1DDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA28u;
        // 0x1dda2c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA30u;
        goto label_1dda30;
    }
    ctx->pc = 0x1DDA28u;
    {
        const bool branch_taken_0x1dda28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda28) {
            ctx->pc = 0x1DDA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDA28u;
            // 0x1dda2c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDA40u;
            goto label_1dda40;
        }
    }
    ctx->pc = 0x1DDA30u;
label_1dda30:
    // 0x1dda30: 0xc09d478  jal         func_2751E0
label_1dda34:
    if (ctx->pc == 0x1DDA34u) {
        ctx->pc = 0x1DDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA30u;
        // 0x1dda34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA38u;
        goto label_1dda38;
    }
    ctx->pc = 0x1DDA30u;
    SET_GPR_U32(ctx, 31, 0x1DDA38u);
    ctx->pc = 0x1DDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA30u;
    // 0x1dda34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2751E0u, 0x1DDA30u, 0x1DDA38u)) {
        return;
    }
    ctx->pc = 0x1DDA38u;
label_1dda38:
    // 0x1dda38: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1dda38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1dda3c:
    // 0x1dda3c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dda40:
    // 0x1dda40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1dda44:
    if (ctx->pc == 0x1DDA44u) {
        ctx->pc = 0x1DDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA40u;
        // 0x1dda44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA48u;
        goto label_1dda48;
    }
    ctx->pc = 0x1DDA40u;
    {
        const bool branch_taken_0x1dda40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA40u;
        // 0x1dda44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda40) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DDA48u;
label_1dda48:
    // 0x1dda48: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x1dda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_1dda4c:
    // 0x1dda4c: 0x40f809  jalr        $v0
label_1dda50:
    if (ctx->pc == 0x1DDA50u) {
        ctx->pc = 0x1DDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA4Cu;
        // 0x1dda50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA54u;
        goto label_1dda54;
    }
    ctx->pc = 0x1DDA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DDA54u);
        ctx->pc = 0x1DDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA4Cu;
        // 0x1dda50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA4Cu, 0x1DDA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDA54u;
label_1dda54:
    // 0x1dda54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dda54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dda58:
    // 0x1dda58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dda58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dda5c:
    // 0x1dda5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dda5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dda60:
    // 0x1dda60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dda60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dda64:
    // 0x1dda64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dda64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dda68:
    // 0x1dda68: 0x3e00008  jr          $ra
label_1dda6c:
    if (ctx->pc == 0x1DDA6Cu) {
        ctx->pc = 0x1DDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA68u;
        // 0x1dda6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA70u;
        goto label_fallthrough_0x1dda68;
    }
    ctx->pc = 0x1DDA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA68u;
        // 0x1dda6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dda68:
    ctx->pc = 0x1DDA70u;
}
