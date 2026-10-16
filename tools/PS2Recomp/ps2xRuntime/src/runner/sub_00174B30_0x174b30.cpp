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

// Function: sub_00174B30
// Address: 0x174b30 - 0x174c80
void sub_00174B30_0x174b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174B30_0x174b30");
#endif

    switch (ctx->pc) {
        case 0x174b4cu: goto label_174b4c;
        case 0x174b60u: goto label_174b60;
        case 0x174b78u: goto label_174b78;
        case 0x174bacu: goto label_174bac;
        case 0x174bc4u: goto label_174bc4;
        case 0x174bdcu: goto label_174bdc;
        case 0x174bf4u: goto label_174bf4;
        case 0x174c0cu: goto label_174c0c;
        case 0x174c24u: goto label_174c24;
        case 0x174c3cu: goto label_174c3c;
        case 0x174c5cu: goto label_174c5c;
        default: break;
    }

    ctx->pc = 0x174b30u;

    // 0x174b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174b34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x174b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174b38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174b3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x174b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174b44: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x174B44u;
    SET_GPR_U32(ctx, 31, 0x174B4Cu);
    ctx->pc = 0x174B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B44u;
    // 0x174b48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x174B44u, 0x174B4Cu)) {
        return;
    }
    ctx->pc = 0x174B4Cu;
label_174b4c:
    // 0x174b4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x174b50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b54: 0x8c46f7f0  lw          $a2, -0x810($v0)
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF7F0u));
    // 0x174b58: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x174B58u;
    SET_GPR_U32(ctx, 31, 0x174B60u);
    ctx->pc = 0x174B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B58u;
    // 0x174b5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x174B58u, 0x174B60u)) {
        return;
    }
    ctx->pc = 0x174B60u;
label_174b60:
    // 0x174b60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174b68: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x174B68u;
    {
        const bool branch_taken_0x174b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B68u;
        // 0x174b6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b68) {
            ctx->pc = 0x174C70u;
            goto label_174c70;
        }
    }
    ctx->pc = 0x174B70u;
    // 0x174b70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x174b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_174b78:
    // 0x174b78: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x174b7c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x174B7Cu;
    {
        const bool branch_taken_0x174b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b7c) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174B84u;
    // 0x174b84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174b88: 0x24425f30  addiu       $v0, $v0, 0x5F30
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
    // 0x174b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x174b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174b94: 0x800008  jr          $a0
    ctx->pc = 0x174B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174B9Cu: goto label_174b9c;
            case 0x174BB4u: goto label_174bb4;
            case 0x174BCCu: goto label_174bcc;
            case 0x174BE4u: goto label_174be4;
            case 0x174BFCu: goto label_174bfc;
            case 0x174C14u: goto label_174c14;
            case 0x174C2Cu: goto label_174c2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174B94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x174B9Cu;
label_174b9c:
    // 0x174b9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ba4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174BA4u;
    SET_GPR_U32(ctx, 31, 0x174BACu);
    ctx->pc = 0x174BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BA4u;
    // 0x174ba8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174BA4u, 0x174BACu)) {
        return;
    }
    ctx->pc = 0x174BACu;
label_174bac:
    // 0x174bac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x174BACu;
    {
        const bool branch_taken_0x174bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BACu;
        // 0x174bb0: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bac) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174BB4u;
label_174bb4:
    // 0x174bb4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bbc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174BBCu;
    SET_GPR_U32(ctx, 31, 0x174BC4u);
    ctx->pc = 0x174BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BBCu;
    // 0x174bc0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174BBCu, 0x174BC4u)) {
        return;
    }
    ctx->pc = 0x174BC4u;
label_174bc4:
    // 0x174bc4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x174BC4u;
    {
        const bool branch_taken_0x174bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BC4u;
        // 0x174bc8: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bc4) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174BCCu;
label_174bcc:
    // 0x174bcc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bd4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174BD4u;
    SET_GPR_U32(ctx, 31, 0x174BDCu);
    ctx->pc = 0x174BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BD4u;
    // 0x174bd8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174BD4u, 0x174BDCu)) {
        return;
    }
    ctx->pc = 0x174BDCu;
label_174bdc:
    // 0x174bdc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x174BDCu;
    {
        const bool branch_taken_0x174bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BDCu;
        // 0x174be0: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bdc) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174BE4u;
label_174be4:
    // 0x174be4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bec: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174BECu;
    SET_GPR_U32(ctx, 31, 0x174BF4u);
    ctx->pc = 0x174BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BECu;
    // 0x174bf0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174BECu, 0x174BF4u)) {
        return;
    }
    ctx->pc = 0x174BF4u;
label_174bf4:
    // 0x174bf4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x174BF4u;
    {
        const bool branch_taken_0x174bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF4u;
        // 0x174bf8: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bf4) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174BFCu;
label_174bfc:
    // 0x174bfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c04: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174C04u;
    SET_GPR_U32(ctx, 31, 0x174C0Cu);
    ctx->pc = 0x174C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C04u;
    // 0x174c08: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174C04u, 0x174C0Cu)) {
        return;
    }
    ctx->pc = 0x174C0Cu;
label_174c0c:
    // 0x174c0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174C0Cu;
    {
        const bool branch_taken_0x174c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C0Cu;
        // 0x174c10: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c0c) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174C14u;
label_174c14:
    // 0x174c14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x174c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c1c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x174C1Cu;
    SET_GPR_U32(ctx, 31, 0x174C24u);
    ctx->pc = 0x174C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C1Cu;
    // 0x174c20: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x174C1Cu, 0x174C24u)) {
        return;
    }
    ctx->pc = 0x174C24u;
label_174c24:
    // 0x174c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174C24u;
    {
        const bool branch_taken_0x174c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C24u;
        // 0x174c28: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c24) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174C2Cu;
label_174c2c:
    // 0x174c2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x174c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c30: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x174c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x174c34: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x174C34u;
    SET_GPR_U32(ctx, 31, 0x174C3Cu);
    ctx->pc = 0x174C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C34u;
    // 0x174c38: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x174C34u, 0x174C3Cu)) {
        return;
    }
    ctx->pc = 0x174C3Cu;
label_174c3c:
    // 0x174c3c: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x174c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_174c40:
    // 0x174c40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x174c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174c4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174c50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174c54: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x174C54u;
    SET_GPR_U32(ctx, 31, 0x174C5Cu);
    ctx->pc = 0x174C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C54u;
    // 0x174c58: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x174C54u, 0x174C5Cu)) {
        return;
    }
    ctx->pc = 0x174C5Cu;
label_174c5c:
    // 0x174c5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x174c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174c64: 0x5460ffc4  bnel        $v1, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x174C64u;
    {
        const bool branch_taken_0x174c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c64) {
            ctx->pc = 0x174C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174C64u;
            // 0x174c68: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174b78;
        }
    }
    ctx->pc = 0x174C6Cu;
    // 0x174c6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x174c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174c70:
    // 0x174c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c78: 0x3e00008  jr          $ra
    ctx->pc = 0x174C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C78u;
        // 0x174c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C80u;
}
