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

// Function: sub_0015CDE8
// Address: 0x15cde8 - 0x15ceb8
void sub_0015CDE8_0x15cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CDE8_0x15cde8");
#endif

    switch (ctx->pc) {
        case 0x15cde8u: goto label_15cde8;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdf0u: goto label_15cdf0;
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15cdf8u: goto label_15cdf8;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        case 0x15ce88u: goto label_15ce88;
        case 0x15ce8cu: goto label_15ce8c;
        case 0x15ce90u: goto label_15ce90;
        case 0x15ce94u: goto label_15ce94;
        case 0x15ce98u: goto label_15ce98;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15cea0u: goto label_15cea0;
        case 0x15cea4u: goto label_15cea4;
        case 0x15cea8u: goto label_15cea8;
        case 0x15ceacu: goto label_15ceac;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15ceb4u: goto label_15ceb4;
        default: break;
    }

    ctx->pc = 0x15cde8u;

label_15cde8:
    // 0x15cde8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15cde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_15cdec:
    // 0x15cdec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_15cdf0:
    // 0x15cdf0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x15cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_15cdf4:
    // 0x15cdf4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x15cdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_15cdf8:
    // 0x15cdf8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15cdf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15cdfc:
    // 0x15cdfc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_15ce00:
    // 0x15ce00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15ce04:
    // 0x15ce04: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x15ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_15ce08:
    // 0x15ce08: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x15ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_15ce0c:
    // 0x15ce0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15ce10:
    // 0x15ce10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ce14:
    // 0x15ce14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15ce18:
    if (ctx->pc == 0x15CE18u) {
        ctx->pc = 0x15CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE14u;
        // 0x15ce18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE1Cu;
        goto label_15ce1c;
    }
    ctx->pc = 0x15CE14u;
    {
        const bool branch_taken_0x15ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE14u;
        // 0x15ce18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce14) {
            ctx->pc = 0x15CE2Cu;
            goto label_15ce2c;
        }
    }
    ctx->pc = 0x15CE1Cu;
label_15ce1c:
    // 0x15ce1c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_15ce20:
    if (ctx->pc == 0x15CE20u) {
        ctx->pc = 0x15CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE1Cu;
        // 0x15ce20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE24u;
        goto label_15ce24;
    }
    ctx->pc = 0x15CE1Cu;
    {
        const bool branch_taken_0x15ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE1Cu;
        // 0x15ce20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce1c) {
            ctx->pc = 0x15CE90u;
            goto label_15ce90;
        }
    }
    ctx->pc = 0x15CE24u;
label_15ce24:
    // 0x15ce24: 0x10000019  b           . + 4 + (0x19 << 2)
label_15ce28:
    if (ctx->pc == 0x15CE28u) {
        ctx->pc = 0x15CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE24u;
        // 0x15ce28: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE2Cu;
        goto label_15ce2c;
    }
    ctx->pc = 0x15CE24u;
    {
        const bool branch_taken_0x15ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE24u;
        // 0x15ce28: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce24) {
            ctx->pc = 0x15CE8Cu;
            goto label_15ce8c;
        }
    }
    ctx->pc = 0x15CE2Cu;
label_15ce2c:
    // 0x15ce2c: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x15ce2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_15ce30:
    // 0x15ce30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ce30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce34:
    // 0x15ce34: 0xc0a1b62  jal         func_286D88
label_15ce38:
    if (ctx->pc == 0x15CE38u) {
        ctx->pc = 0x15CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE34u;
        // 0x15ce38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE3Cu;
        goto label_15ce3c;
    }
    ctx->pc = 0x15CE34u;
    SET_GPR_U32(ctx, 31, 0x15CE3Cu);
    ctx->pc = 0x15CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE34u;
    // 0x15ce38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286D88u, 0x15CE34u, 0x15CE3Cu)) {
        return;
    }
    ctx->pc = 0x15CE3Cu;
label_15ce3c:
    // 0x15ce3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ce3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ce40:
    // 0x15ce40: 0x1a200012  blez        $s1, . + 4 + (0x12 << 2)
label_15ce44:
    if (ctx->pc == 0x15CE44u) {
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE40u;
        // 0x15ce44: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE48u;
        goto label_15ce48;
    }
    ctx->pc = 0x15CE40u;
    {
        const bool branch_taken_0x15ce40 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE40u;
        // 0x15ce44: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce40) {
            ctx->pc = 0x15CE8Cu;
            goto label_15ce8c;
        }
    }
    ctx->pc = 0x15CE48u;
label_15ce48:
    // 0x15ce48: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
label_15ce4c:
    // 0x15ce4c: 0x2455108c  addiu       $s5, $v0, 0x108C
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_15ce50:
    // 0x15ce50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ce50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ce54:
    // 0x15ce54: 0x0  nop
    ctx->pc = 0x15ce54u;
    // NOP
label_15ce58:
    // 0x15ce58: 0xc0a1b56  jal         func_286D58
label_15ce5c:
    if (ctx->pc == 0x15CE5Cu) {
        ctx->pc = 0x15CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE58u;
        // 0x15ce5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE60u;
        goto label_15ce60;
    }
    ctx->pc = 0x15CE58u;
    SET_GPR_U32(ctx, 31, 0x15CE60u);
    ctx->pc = 0x15CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE58u;
    // 0x15ce5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286D58u, 0x15CE58u, 0x15CE60u)) {
        return;
    }
    ctx->pc = 0x15CE60u;
label_15ce60:
    // 0x15ce60: 0xc0a1c20  jal         func_287080
label_15ce64:
    if (ctx->pc == 0x15CE64u) {
        ctx->pc = 0x15CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE60u;
        // 0x15ce64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE68u;
        goto label_15ce68;
    }
    ctx->pc = 0x15CE60u;
    SET_GPR_U32(ctx, 31, 0x15CE68u);
    ctx->pc = 0x15CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE60u;
    // 0x15ce64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287080u, 0x15CE60u, 0x15CE68u)) {
        return;
    }
    ctx->pc = 0x15CE68u;
label_15ce68:
    // 0x15ce68: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_15ce6c:
    // 0x15ce6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ce70:
    // 0x15ce70: 0x60f809  jalr        $v1
label_15ce74:
    if (ctx->pc == 0x15CE74u) {
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x26c430a8  addiu       $a0, $s6, 0x30A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE78u;
        goto label_15ce78;
    }
    ctx->pc = 0x15CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE78u);
        ctx->pc = 0x15CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE70u;
        // 0x15ce74: 0x26c430a8  addiu       $a0, $s6, 0x30A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE70u, 0x15CE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE78u;
label_15ce78:
    // 0x15ce78: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_15ce7c:
    if (ctx->pc == 0x15CE7Cu) {
        ctx->pc = 0x15CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE78u;
        // 0x15ce7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE80u;
        goto label_15ce80;
    }
    ctx->pc = 0x15CE78u;
    {
        const bool branch_taken_0x15ce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE78u;
        // 0x15ce7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce78) {
            ctx->pc = 0x15CE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce24;
        }
    }
    ctx->pc = 0x15CE80u;
label_15ce80:
    // 0x15ce80: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x15ce80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15ce84:
    // 0x15ce84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_15ce88:
    if (ctx->pc == 0x15CE88u) {
        ctx->pc = 0x15CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE84u;
        // 0x15ce88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE8Cu;
        goto label_15ce8c;
    }
    ctx->pc = 0x15CE84u;
    {
        const bool branch_taken_0x15ce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE84u;
        // 0x15ce88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce84) {
            ctx->pc = 0x15CE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce58;
        }
    }
    ctx->pc = 0x15CE8Cu;
label_15ce8c:
    // 0x15ce8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15ce8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ce90:
    // 0x15ce90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15ce90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15ce94:
    // 0x15ce94: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15ce94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15ce98:
    // 0x15ce98: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15ce98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15ce9c:
    // 0x15ce9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15ce9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15cea0:
    // 0x15cea0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15cea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15cea4:
    // 0x15cea4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x15cea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cea8:
    // 0x15cea8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x15cea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ceac:
    // 0x15ceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ceb0:
    // 0x15ceb0: 0x3e00008  jr          $ra
label_15ceb4:
    if (ctx->pc == 0x15CEB4u) {
        ctx->pc = 0x15CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEB0u;
        // 0x15ceb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEB8u;
        goto label_fallthrough_0x15ceb0;
    }
    ctx->pc = 0x15CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEB0u;
        // 0x15ceb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ceb0:
    ctx->pc = 0x15CEB8u;
}
