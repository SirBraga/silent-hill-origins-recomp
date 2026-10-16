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

// Function: sub_0010ED48
// Address: 0x10ed48 - 0x10eea8
void sub_0010ED48_0x10ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ED48_0x10ed48");
#endif

    switch (ctx->pc) {
        case 0x10ed64u: goto label_10ed64;
        case 0x10ed78u: goto label_10ed78;
        case 0x10ed90u: goto label_10ed90;
        case 0x10ee58u: goto label_10ee58;
        case 0x10ee80u: goto label_10ee80;
        default: break;
    }

    ctx->pc = 0x10ed48u;

    // 0x10ed48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ed4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10ed50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10ed54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ed54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ed5c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x10ED5Cu;
    SET_GPR_U32(ctx, 31, 0x10ED64u);
    ctx->pc = 0x10ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED5Cu;
    // 0x10ed60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x10ED5Cu, 0x10ED64u)) {
        return;
    }
    ctx->pc = 0x10ED64u;
label_10ed64:
    // 0x10ed64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10ed68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ed68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed6c: 0x8c464360  lw          $a2, 0x4360($v0)
    ctx->pc = 0x10ed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4360u));
    // 0x10ed70: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x10ED70u;
    SET_GPR_U32(ctx, 31, 0x10ED78u);
    ctx->pc = 0x10ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED70u;
    // 0x10ed74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x10ED70u, 0x10ED78u)) {
        return;
    }
    ctx->pc = 0x10ED78u;
label_10ed78:
    // 0x10ed78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ed80: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x10ED80u;
    {
        const bool branch_taken_0x10ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED80u;
        // 0x10ed84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed80) {
            ctx->pc = 0x10EE94u;
            goto label_10ee94;
        }
    }
    ctx->pc = 0x10ED88u;
    // 0x10ed88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed8c: 0x0  nop
    ctx->pc = 0x10ed8cu;
    // NOP
label_10ed90:
    // 0x10ed90: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10ed94: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x10ed94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x10ed98: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x10ED98u;
    {
        const bool branch_taken_0x10ed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED98u;
        // 0x10ed9c: 0x24100022  addiu       $s0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed98) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDA0u;
    // 0x10eda0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10eda4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10eda8: 0x2442a1e0  addiu       $v0, $v0, -0x5E20
    ctx->pc = 0x10eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943200));
    // 0x10edac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10edb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10edb4: 0x800008  jr          $a0
    ctx->pc = 0x10EDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EDBCu: goto label_10edbc;
            case 0x10EDC4u: goto label_10edc4;
            case 0x10EDCCu: goto label_10edcc;
            case 0x10EDD4u: goto label_10edd4;
            case 0x10EDDCu: goto label_10eddc;
            case 0x10EDE4u: goto label_10ede4;
            case 0x10EDECu: goto label_10edec;
            case 0x10EDF4u: goto label_10edf4;
            case 0x10EDFCu: goto label_10edfc;
            case 0x10EE04u: goto label_10ee04;
            case 0x10EE0Cu: goto label_10ee0c;
            case 0x10EE14u: goto label_10ee14;
            case 0x10EE1Cu: goto label_10ee1c;
            case 0x10EE24u: goto label_10ee24;
            case 0x10EE2Cu: goto label_10ee2c;
            case 0x10EE34u: goto label_10ee34;
            case 0x10EE3Cu: goto label_10ee3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10EDBCu;
label_10edbc:
    // 0x10edbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10EDBCu;
    {
        const bool branch_taken_0x10edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDBCu;
        // 0x10edc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edbc) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDC4u;
label_10edc4:
    // 0x10edc4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10EDC4u;
    {
        const bool branch_taken_0x10edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDC4u;
        // 0x10edc8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edc4) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDCCu;
label_10edcc:
    // 0x10edcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10EDCCu;
    {
        const bool branch_taken_0x10edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDCCu;
        // 0x10edd0: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edcc) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDD4u;
label_10edd4:
    // 0x10edd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10EDD4u;
    {
        const bool branch_taken_0x10edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDD4u;
        // 0x10edd8: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edd4) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDDCu;
label_10eddc:
    // 0x10eddc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10EDDCu;
    {
        const bool branch_taken_0x10eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDDCu;
        // 0x10ede0: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eddc) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDE4u;
label_10ede4:
    // 0x10ede4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x10EDE4u;
    {
        const bool branch_taken_0x10ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDE4u;
        // 0x10ede8: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ede4) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDECu;
label_10edec:
    // 0x10edec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10EDECu;
    {
        const bool branch_taken_0x10edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDECu;
        // 0x10edf0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edec) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDF4u;
label_10edf4:
    // 0x10edf4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10EDF4u;
    {
        const bool branch_taken_0x10edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDF4u;
        // 0x10edf8: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edf4) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EDFCu;
label_10edfc:
    // 0x10edfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EDFCu;
    {
        const bool branch_taken_0x10edfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDFCu;
        // 0x10ee00: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edfc) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE04u;
label_10ee04:
    // 0x10ee04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10EE04u;
    {
        const bool branch_taken_0x10ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE04u;
        // 0x10ee08: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee04) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE0Cu;
label_10ee0c:
    // 0x10ee0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10EE0Cu;
    {
        const bool branch_taken_0x10ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE0Cu;
        // 0x10ee10: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee0c) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE14u;
label_10ee14:
    // 0x10ee14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10EE14u;
    {
        const bool branch_taken_0x10ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE14u;
        // 0x10ee18: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee14) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE1Cu;
label_10ee1c:
    // 0x10ee1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10EE1Cu;
    {
        const bool branch_taken_0x10ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE1Cu;
        // 0x10ee20: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee1c) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE24u;
label_10ee24:
    // 0x10ee24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10EE24u;
    {
        const bool branch_taken_0x10ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE24u;
        // 0x10ee28: 0x2410001a  addiu       $s0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee24) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE2Cu;
label_10ee2c:
    // 0x10ee2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE2Cu;
    {
        const bool branch_taken_0x10ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE2Cu;
        // 0x10ee30: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee2c) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE34u;
label_10ee34:
    // 0x10ee34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10EE34u;
    {
        const bool branch_taken_0x10ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE34u;
        // 0x10ee38: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee34) {
            ctx->pc = 0x10EE40u;
            goto label_10ee40;
        }
    }
    ctx->pc = 0x10EE3Cu;
label_10ee3c:
    // 0x10ee3c: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x10ee3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10ee40:
    // 0x10ee40: 0x3a020022  xori        $v0, $s0, 0x22
    ctx->pc = 0x10ee40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)34);
    // 0x10ee44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EE44u;
    {
        const bool branch_taken_0x10ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE44u;
        // 0x10ee48: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee44) {
            ctx->pc = 0x10EE64u;
            goto label_10ee64;
        }
    }
    ctx->pc = 0x10EE4Cu;
    // 0x10ee4c: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x10ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x10ee50: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x10EE50u;
    SET_GPR_U32(ctx, 31, 0x10EE58u);
    ctx->pc = 0x10EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE50u;
    // 0x10ee54: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x10EE50u, 0x10EE58u)) {
        return;
    }
    ctx->pc = 0x10EE58u;
label_10ee58:
    // 0x10ee58: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x10ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x10ee5c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x10ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x10ee60: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x10ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_10ee64:
    // 0x10ee64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ee68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ee70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ee74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ee78: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x10EE78u;
    SET_GPR_U32(ctx, 31, 0x10EE80u);
    ctx->pc = 0x10EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE78u;
    // 0x10ee7c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x10EE78u, 0x10EE80u)) {
        return;
    }
    ctx->pc = 0x10EE80u;
label_10ee80:
    // 0x10ee80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ee84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ee88: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x10EE88u;
    {
        const bool branch_taken_0x10ee88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE88u;
        // 0x10ee8c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee88) {
            ctx->pc = 0x10ED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ed90;
        }
    }
    ctx->pc = 0x10EE90u;
    // 0x10ee90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10ee90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10ee94:
    // 0x10ee94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10ee94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ee98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE9Cu;
        // 0x10eea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EEA4u;
    // 0x10eea4: 0x0  nop
    ctx->pc = 0x10eea4u;
    // NOP
    ctx->pc = 0x10eea8u;
}
