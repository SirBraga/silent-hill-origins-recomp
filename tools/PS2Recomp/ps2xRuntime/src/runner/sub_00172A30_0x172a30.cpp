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

// Function: sub_00172A30
// Address: 0x172a30 - 0x172bc8
void sub_00172A30_0x172a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172A30_0x172a30");
#endif

    switch (ctx->pc) {
        case 0x172a4cu: goto label_172a4c;
        case 0x172a60u: goto label_172a60;
        case 0x172a78u: goto label_172a78;
        case 0x172aecu: goto label_172aec;
        case 0x172b04u: goto label_172b04;
        case 0x172b1cu: goto label_172b1c;
        case 0x172b34u: goto label_172b34;
        case 0x172b4cu: goto label_172b4c;
        case 0x172b64u: goto label_172b64;
        case 0x172b84u: goto label_172b84;
        case 0x172ba0u: goto label_172ba0;
        default: break;
    }

    ctx->pc = 0x172a30u;

    // 0x172a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172a34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x172a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172a38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x172a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x172a3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172a44: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x172A44u;
    SET_GPR_U32(ctx, 31, 0x172A4Cu);
    ctx->pc = 0x172A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A44u;
    // 0x172a48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x172A44u, 0x172A4Cu)) {
        return;
    }
    ctx->pc = 0x172A4Cu;
label_172a4c:
    // 0x172a4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x172a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a54: 0x8c46f790  lw          $a2, -0x870($v0)
    ctx->pc = 0x172a54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF790u));
    // 0x172a58: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x172A58u;
    SET_GPR_U32(ctx, 31, 0x172A60u);
    ctx->pc = 0x172A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A58u;
    // 0x172a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x172A58u, 0x172A60u)) {
        return;
    }
    ctx->pc = 0x172A60u;
label_172a60:
    // 0x172a60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172a64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172a68: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x172A68u;
    {
        const bool branch_taken_0x172a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A68u;
        // 0x172a6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a68) {
            ctx->pc = 0x172BB4u;
            goto label_172bb4;
        }
    }
    ctx->pc = 0x172A70u;
    // 0x172a70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x172a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172a74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_172a78:
    // 0x172a78: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x172a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x172a7c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x172A7Cu;
    {
        const bool branch_taken_0x172a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A7Cu;
        // 0x172a80: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a7c) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172A84u;
    // 0x172a84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x172a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x172a88: 0x24425940  addiu       $v0, $v0, 0x5940
    ctx->pc = 0x172a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22848));
    // 0x172a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x172a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172a90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x172a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172a94: 0x800008  jr          $a0
    ctx->pc = 0x172A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172A9Cu: goto label_172a9c;
            case 0x172AA8u: goto label_172aa8;
            case 0x172AB4u: goto label_172ab4;
            case 0x172AC0u: goto label_172ac0;
            case 0x172ACCu: goto label_172acc;
            case 0x172AD8u: goto label_172ad8;
            case 0x172AF4u: goto label_172af4;
            case 0x172B0Cu: goto label_172b0c;
            case 0x172B24u: goto label_172b24;
            case 0x172B3Cu: goto label_172b3c;
            case 0x172B54u: goto label_172b54;
            case 0x172B6Cu: goto label_172b6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x172A9Cu;
label_172a9c:
    // 0x172a9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x172a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172aa0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x172AA0u;
    {
        const bool branch_taken_0x172aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AA0u;
        // 0x172aa4: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172aa0) {
            ctx->pc = 0x172AE0u;
            goto label_172ae0;
        }
    }
    ctx->pc = 0x172AA8u;
label_172aa8:
    // 0x172aa8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172aac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x172AACu;
    {
        const bool branch_taken_0x172aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AACu;
        // 0x172ab0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172aac) {
            ctx->pc = 0x172AE0u;
            goto label_172ae0;
        }
    }
    ctx->pc = 0x172AB4u;
label_172ab4:
    // 0x172ab4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x172ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172AB8u;
    {
        const bool branch_taken_0x172ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AB8u;
        // 0x172abc: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ab8) {
            ctx->pc = 0x172AE0u;
            goto label_172ae0;
        }
    }
    ctx->pc = 0x172AC0u;
label_172ac0:
    // 0x172ac0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x172ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ac4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172AC4u;
    {
        const bool branch_taken_0x172ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AC4u;
        // 0x172ac8: 0x26240074  addiu       $a0, $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ac4) {
            ctx->pc = 0x172AE0u;
            goto label_172ae0;
        }
    }
    ctx->pc = 0x172ACCu;
label_172acc:
    // 0x172acc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172AD0u;
    {
        const bool branch_taken_0x172ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AD0u;
        // 0x172ad4: 0x2624007c  addiu       $a0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ad0) {
            ctx->pc = 0x172AE0u;
            goto label_172ae0;
        }
    }
    ctx->pc = 0x172AD8u;
label_172ad8:
    // 0x172ad8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x172ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172adc: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x172adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_172ae0:
    // 0x172ae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ae4: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x172AE4u;
    SET_GPR_U32(ctx, 31, 0x172AECu);
    ctx->pc = 0x172AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172AE4u;
    // 0x172ae8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x172AE4u, 0x172AECu)) {
        return;
    }
    ctx->pc = 0x172AECu;
label_172aec:
    // 0x172aec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x172AECu;
    {
        const bool branch_taken_0x172aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AECu;
        // 0x172af0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172aec) {
            ctx->pc = 0x172B88u;
            goto label_172b88;
        }
    }
    ctx->pc = 0x172AF4u;
label_172af4:
    // 0x172af4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x172af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172afc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x172AFCu;
    SET_GPR_U32(ctx, 31, 0x172B04u);
    ctx->pc = 0x172B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172AFCu;
    // 0x172b00: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x172AFCu, 0x172B04u)) {
        return;
    }
    ctx->pc = 0x172B04u;
label_172b04:
    // 0x172b04: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x172B04u;
    {
        const bool branch_taken_0x172b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B04u;
        // 0x172b08: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b04) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B0Cu;
label_172b0c:
    // 0x172b0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x172b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b14: 0xc081b56  jal         func_206D58
    ctx->pc = 0x172B14u;
    SET_GPR_U32(ctx, 31, 0x172B1Cu);
    ctx->pc = 0x172B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B14u;
    // 0x172b18: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x172B14u, 0x172B1Cu)) {
        return;
    }
    ctx->pc = 0x172B1Cu;
label_172b1c:
    // 0x172b1c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x172B1Cu;
    {
        const bool branch_taken_0x172b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B1Cu;
        // 0x172b20: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b1c) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B24u;
label_172b24:
    // 0x172b24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b2c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x172B2Cu;
    SET_GPR_U32(ctx, 31, 0x172B34u);
    ctx->pc = 0x172B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B2Cu;
    // 0x172b30: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x172B2Cu, 0x172B34u)) {
        return;
    }
    ctx->pc = 0x172B34u;
label_172b34:
    // 0x172b34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x172B34u;
    {
        const bool branch_taken_0x172b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B34u;
        // 0x172b38: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b34) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B3Cu;
label_172b3c:
    // 0x172b3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x172b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b44: 0xc081b56  jal         func_206D58
    ctx->pc = 0x172B44u;
    SET_GPR_U32(ctx, 31, 0x172B4Cu);
    ctx->pc = 0x172B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B44u;
    // 0x172b48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x172B44u, 0x172B4Cu)) {
        return;
    }
    ctx->pc = 0x172B4Cu;
label_172b4c:
    // 0x172b4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x172B4Cu;
    {
        const bool branch_taken_0x172b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B4Cu;
        // 0x172b50: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b4c) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B54u;
label_172b54:
    // 0x172b54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b5c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x172B5Cu;
    SET_GPR_U32(ctx, 31, 0x172B64u);
    ctx->pc = 0x172B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B5Cu;
    // 0x172b60: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x172B5Cu, 0x172B64u)) {
        return;
    }
    ctx->pc = 0x172B64u;
label_172b64:
    // 0x172b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x172B64u;
    {
        const bool branch_taken_0x172b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B64u;
        // 0x172b68: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b64) {
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B6Cu;
label_172b6c:
    // 0x172b6c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b70: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x172b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x172b74: 0x2625008c  addiu       $a1, $s1, 0x8C
    ctx->pc = 0x172b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x172b78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b7c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x172B7Cu;
    SET_GPR_U32(ctx, 31, 0x172B84u);
    ctx->pc = 0x172B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B7Cu;
    // 0x172b80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x172B7Cu, 0x172B84u)) {
        return;
    }
    ctx->pc = 0x172B84u;
label_172b84:
    // 0x172b84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x172b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_172b88:
    // 0x172b88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172b90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x172b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x172b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172b98: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x172B98u;
    SET_GPR_U32(ctx, 31, 0x172BA0u);
    ctx->pc = 0x172B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B98u;
    // 0x172b9c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x172B98u, 0x172BA0u)) {
        return;
    }
    ctx->pc = 0x172BA0u;
label_172ba0:
    // 0x172ba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172ba8: 0x5460ffb3  bnel        $v1, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x172BA8u;
    {
        const bool branch_taken_0x172ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172ba8) {
            ctx->pc = 0x172BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172BA8u;
            // 0x172bac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172a78;
        }
    }
    ctx->pc = 0x172BB0u;
    // 0x172bb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x172bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172bb4:
    // 0x172bb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x172bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x172BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BBCu;
        // 0x172bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172BC4u;
    // 0x172bc4: 0x0  nop
    ctx->pc = 0x172bc4u;
    // NOP
    ctx->pc = 0x172bc8u;
}
