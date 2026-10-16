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

// Function: sub_00175A70
// Address: 0x175a70 - 0x175b90
void sub_00175A70_0x175a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A70_0x175a70");
#endif

    switch (ctx->pc) {
        case 0x175a8cu: goto label_175a8c;
        case 0x175aa0u: goto label_175aa0;
        case 0x175ab8u: goto label_175ab8;
        case 0x175aecu: goto label_175aec;
        case 0x175b04u: goto label_175b04;
        case 0x175b1cu: goto label_175b1c;
        case 0x175b34u: goto label_175b34;
        case 0x175b4cu: goto label_175b4c;
        case 0x175b6cu: goto label_175b6c;
        default: break;
    }

    ctx->pc = 0x175a70u;

    // 0x175a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175a74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x175a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x175a78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x175a7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175a84: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x175A84u;
    SET_GPR_U32(ctx, 31, 0x175A8Cu);
    ctx->pc = 0x175A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A84u;
    // 0x175a88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x175A84u, 0x175A8Cu)) {
        return;
    }
    ctx->pc = 0x175A8Cu;
label_175a8c:
    // 0x175a8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x175a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a94: 0x8c46f820  lw          $a2, -0x7E0($v0)
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF820u));
    // 0x175a98: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x175A98u;
    SET_GPR_U32(ctx, 31, 0x175AA0u);
    ctx->pc = 0x175A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A98u;
    // 0x175a9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x175A98u, 0x175AA0u)) {
        return;
    }
    ctx->pc = 0x175AA0u;
label_175aa0:
    // 0x175aa0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x175aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175aa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175aa8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x175AA8u;
    {
        const bool branch_taken_0x175aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AA8u;
        // 0x175aac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175aa8) {
            ctx->pc = 0x175B80u;
            goto label_175b80;
        }
    }
    ctx->pc = 0x175AB0u;
    // 0x175ab0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x175ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ab4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x175ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_175ab8:
    // 0x175ab8: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x175ab8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x175abc: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x175ABCu;
    {
        const bool branch_taken_0x175abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ABCu;
        // 0x175ac0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175abc) {
            ctx->pc = 0x175B50u;
            goto label_175b50;
        }
    }
    ctx->pc = 0x175AC4u;
    // 0x175ac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x175ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x175ac8: 0x24426200  addiu       $v0, $v0, 0x6200
    ctx->pc = 0x175ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x175acc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175ad0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175ad4: 0x800008  jr          $a0
    ctx->pc = 0x175AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175ADCu: goto label_175adc;
            case 0x175AF4u: goto label_175af4;
            case 0x175B0Cu: goto label_175b0c;
            case 0x175B24u: goto label_175b24;
            case 0x175B3Cu: goto label_175b3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175ADCu;
label_175adc:
    // 0x175adc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ae4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175AE4u;
    SET_GPR_U32(ctx, 31, 0x175AECu);
    ctx->pc = 0x175AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AE4u;
    // 0x175ae8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175AE4u, 0x175AECu)) {
        return;
    }
    ctx->pc = 0x175AECu;
label_175aec:
    // 0x175aec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x175AECu;
    {
        const bool branch_taken_0x175aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AECu;
        // 0x175af0: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175aec) {
            ctx->pc = 0x175B50u;
            goto label_175b50;
        }
    }
    ctx->pc = 0x175AF4u;
label_175af4:
    // 0x175af4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175afc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175AFCu;
    SET_GPR_U32(ctx, 31, 0x175B04u);
    ctx->pc = 0x175B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AFCu;
    // 0x175b00: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175AFCu, 0x175B04u)) {
        return;
    }
    ctx->pc = 0x175B04u;
label_175b04:
    // 0x175b04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x175B04u;
    {
        const bool branch_taken_0x175b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B04u;
        // 0x175b08: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b04) {
            ctx->pc = 0x175B50u;
            goto label_175b50;
        }
    }
    ctx->pc = 0x175B0Cu;
label_175b0c:
    // 0x175b0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b14: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175B14u;
    SET_GPR_U32(ctx, 31, 0x175B1Cu);
    ctx->pc = 0x175B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B14u;
    // 0x175b18: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175B14u, 0x175B1Cu)) {
        return;
    }
    ctx->pc = 0x175B1Cu;
label_175b1c:
    // 0x175b1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x175B1Cu;
    {
        const bool branch_taken_0x175b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B1Cu;
        // 0x175b20: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b1c) {
            ctx->pc = 0x175B50u;
            goto label_175b50;
        }
    }
    ctx->pc = 0x175B24u;
label_175b24:
    // 0x175b24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b2c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175B2Cu;
    SET_GPR_U32(ctx, 31, 0x175B34u);
    ctx->pc = 0x175B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B2Cu;
    // 0x175b30: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175B2Cu, 0x175B34u)) {
        return;
    }
    ctx->pc = 0x175B34u;
label_175b34:
    // 0x175b34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175B34u;
    {
        const bool branch_taken_0x175b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B34u;
        // 0x175b38: 0xae220068  sw          $v0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b34) {
            ctx->pc = 0x175B50u;
            goto label_175b50;
        }
    }
    ctx->pc = 0x175B3Cu;
label_175b3c:
    // 0x175b3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x175b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b44: 0xc081b56  jal         func_206D58
    ctx->pc = 0x175B44u;
    SET_GPR_U32(ctx, 31, 0x175B4Cu);
    ctx->pc = 0x175B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B44u;
    // 0x175b48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x175B44u, 0x175B4Cu)) {
        return;
    }
    ctx->pc = 0x175B4Cu;
label_175b4c:
    // 0x175b4c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x175b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_175b50:
    // 0x175b50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x175b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175b5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175b64: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x175B64u;
    SET_GPR_U32(ctx, 31, 0x175B6Cu);
    ctx->pc = 0x175B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B64u;
    // 0x175b68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x175B64u, 0x175B6Cu)) {
        return;
    }
    ctx->pc = 0x175B6Cu;
label_175b6c:
    // 0x175b6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x175b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175b74: 0x5460ffd0  bnel        $v1, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x175B74u;
    {
        const bool branch_taken_0x175b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b74) {
            ctx->pc = 0x175B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175B74u;
            // 0x175b78: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175ab8;
        }
    }
    ctx->pc = 0x175B7Cu;
    // 0x175b7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175b80:
    // 0x175b80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b88: 0x3e00008  jr          $ra
    ctx->pc = 0x175B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B88u;
        // 0x175b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175B90u;
}
