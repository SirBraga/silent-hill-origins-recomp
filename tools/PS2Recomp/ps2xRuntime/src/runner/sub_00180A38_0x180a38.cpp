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

// Function: sub_00180A38
// Address: 0x180a38 - 0x180b88
void sub_00180A38_0x180a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180A38_0x180a38");
#endif

    switch (ctx->pc) {
        case 0x180a70u: goto label_180a70;
        case 0x180a84u: goto label_180a84;
        case 0x180a8cu: goto label_180a8c;
        case 0x180aa0u: goto label_180aa0;
        case 0x180aa8u: goto label_180aa8;
        case 0x180ac4u: goto label_180ac4;
        case 0x180accu: goto label_180acc;
        case 0x180aecu: goto label_180aec;
        case 0x180af4u: goto label_180af4;
        case 0x180b04u: goto label_180b04;
        case 0x180b10u: goto label_180b10;
        case 0x180b44u: goto label_180b44;
        case 0x180b74u: goto label_180b74;
        default: break;
    }

    ctx->pc = 0x180a38u;

    // 0x180a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180a3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x180a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x180a40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x180a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x180a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180a4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x180a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x180a50: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x180A50u;
    {
        const bool branch_taken_0x180a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A50u;
        // 0x180a54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a50) {
            ctx->pc = 0x180B78u;
            goto label_180b78;
        }
    }
    ctx->pc = 0x180A58u;
    // 0x180a58: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x180a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x180a5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180A5Cu;
    {
        const bool branch_taken_0x180a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A5Cu;
        // 0x180a60: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a5c) {
            ctx->pc = 0x180A74u;
            goto label_180a74;
        }
    }
    ctx->pc = 0x180A64u;
    // 0x180a64: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x180a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x180a68: 0xc060ae6  jal         func_182B98
    ctx->pc = 0x180A68u;
    SET_GPR_U32(ctx, 31, 0x180A70u);
    ctx->pc = 0x180A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A68u;
    // 0x180a6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182B98u, 0x180A68u, 0x180A70u)) {
        return;
    }
    ctx->pc = 0x180A70u;
label_180a70:
    // 0x180a70: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x180a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_180a74:
    // 0x180a74: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x180a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x180a78: 0x8c62830c  lw          $v0, -0x7CF4($v1)
    ctx->pc = 0x180a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935308)));
    // 0x180a7c: 0xc076224  jal         func_1D8890
    ctx->pc = 0x180A7Cu;
    SET_GPR_U32(ctx, 31, 0x180A84u);
    ctx->pc = 0x180A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A7Cu;
    // 0x180a80: 0xac4401a0  sw          $a0, 0x1A0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8890u, 0x180A7Cu, 0x180A84u)) {
        return;
    }
    ctx->pc = 0x180A84u;
label_180a84:
    // 0x180a84: 0xc06091a  jal         func_182468
    ctx->pc = 0x180A84u;
    SET_GPR_U32(ctx, 31, 0x180A8Cu);
    ctx->pc = 0x180A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A84u;
    // 0x180a88: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182468u, 0x180A84u, 0x180A8Cu)) {
        return;
    }
    ctx->pc = 0x180A8Cu;
label_180a8c:
    // 0x180a8c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x180a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x180a90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180A90u;
    {
        const bool branch_taken_0x180a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A90u;
        // 0x180a94: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a90) {
            ctx->pc = 0x180AACu;
            goto label_180aac;
        }
    }
    ctx->pc = 0x180A98u;
    // 0x180a98: 0xc0bae6a  jal         func_2EB9A8
    ctx->pc = 0x180A98u;
    SET_GPR_U32(ctx, 31, 0x180AA0u);
    ctx->pc = 0x180A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A98u;
    // 0x180a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB9A8u, 0x180A98u, 0x180AA0u)) {
        return;
    }
    ctx->pc = 0x180AA0u;
label_180aa0:
    // 0x180aa0: 0xc0baea2  jal         func_2EBA88
    ctx->pc = 0x180AA0u;
    SET_GPR_U32(ctx, 31, 0x180AA8u);
    ctx->pc = 0x180AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AA0u;
    // 0x180aa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EBA88u, 0x180AA0u, 0x180AA8u)) {
        return;
    }
    ctx->pc = 0x180AA8u;
label_180aa8:
    // 0x180aa8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x180aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_180aac:
    // 0x180aac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x180ab0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180AB0u;
    {
        const bool branch_taken_0x180ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AB0u;
        // 0x180ab4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ab0) {
            ctx->pc = 0x180AD4u;
            goto label_180ad4;
        }
    }
    ctx->pc = 0x180AB8u;
    // 0x180ab8: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x180abc: 0xc0438e6  jal         func_10E398
    ctx->pc = 0x180ABCu;
    SET_GPR_U32(ctx, 31, 0x180AC4u);
    ctx->pc = 0x180AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180ABCu;
    // 0x180ac0: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E398u, 0x180ABCu, 0x180AC4u)) {
        return;
    }
    ctx->pc = 0x180AC4u;
label_180ac4:
    // 0x180ac4: 0xc0438d0  jal         func_10E340
    ctx->pc = 0x180AC4u;
    SET_GPR_U32(ctx, 31, 0x180ACCu);
    ctx->pc = 0x180AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AC4u;
    // 0x180ac8: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E340u, 0x180AC4u, 0x180ACCu)) {
        return;
    }
    ctx->pc = 0x180ACCu;
label_180acc:
    // 0x180acc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x180accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x180ad0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x180ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_180ad4:
    // 0x180ad4: 0x8c6289f8  lw          $v0, -0x7608($v1)
    ctx->pc = 0x180ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937080)));
    // 0x180ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180AD8u;
    {
        const bool branch_taken_0x180ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ad8) {
            ctx->pc = 0x180AECu;
            goto label_180aec;
        }
    }
    ctx->pc = 0x180AE0u;
    // 0x180ae0: 0xac6089f8  sw          $zero, -0x7608($v1)
    ctx->pc = 0x180ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937080), GPR_U32(ctx, 0));
    // 0x180ae4: 0xc0760b2  jal         func_1D82C8
    ctx->pc = 0x180AE4u;
    SET_GPR_U32(ctx, 31, 0x180AECu);
    ctx->pc = 0x180AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AE4u;
    // 0x180ae8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D82C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D82C8u, 0x180AE4u, 0x180AECu)) {
        return;
    }
    ctx->pc = 0x180AECu;
label_180aec:
    // 0x180aec: 0xc075d76  jal         func_1D75D8
    ctx->pc = 0x180AECu;
    SET_GPR_U32(ctx, 31, 0x180AF4u);
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x180AECu, 0x180AF4u)) {
        return;
    }
    ctx->pc = 0x180AF4u;
label_180af4:
    // 0x180af4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x180af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x180af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180afc: 0xc05eee2  jal         func_17BB88
    ctx->pc = 0x180AFCu;
    SET_GPR_U32(ctx, 31, 0x180B04u);
    ctx->pc = 0x180B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180AFCu;
    // 0x180b00: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x180AFCu, 0x180B04u)) {
        return;
    }
    ctx->pc = 0x180B04u;
label_180b04:
    // 0x180b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b08: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x180B08u;
    SET_GPR_U32(ctx, 31, 0x180B10u);
    ctx->pc = 0x180B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B08u;
    // 0x180b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x180B08u, 0x180B10u)) {
        return;
    }
    ctx->pc = 0x180B10u;
label_180b10:
    // 0x180b10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x180b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x180b14: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x180b18: 0x8c44bcd8  lw          $a0, -0x4328($v0)
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBCD8u));
    // 0x180b1c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x180b20: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180B20u;
    {
        const bool branch_taken_0x180b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x180B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B20u;
        // 0x180b24: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b20) {
            ctx->pc = 0x180B44u;
            goto label_180b44;
        }
    }
    ctx->pc = 0x180B28u;
    // 0x180b28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x180b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180b2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180B2Cu;
    {
        const bool branch_taken_0x180b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B2Cu;
        // 0x180b30: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b2c) {
            ctx->pc = 0x180B48u;
            goto label_180b48;
        }
    }
    ctx->pc = 0x180B34u;
    // 0x180b34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x180b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x180b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x180b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b3c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x180B3Cu;
    SET_GPR_U32(ctx, 31, 0x180B44u);
    ctx->pc = 0x180B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B3Cu;
    // 0x180b40: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x180B3Cu, 0x180B44u)) {
        return;
    }
    ctx->pc = 0x180B44u;
label_180b44:
    // 0x180b44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x180b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_180b48:
    // 0x180b48: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x180b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x180b4c: 0x8c44fa68  lw          $a0, -0x598($v0)
    ctx->pc = 0x180b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965864)));
    // 0x180b50: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x180B50u;
    {
        const bool branch_taken_0x180b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x180B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B50u;
        // 0x180b54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b50) {
            ctx->pc = 0x180B78u;
            goto label_180b78;
        }
    }
    ctx->pc = 0x180B58u;
    // 0x180b58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180b5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180B5Cu;
    {
        const bool branch_taken_0x180b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B5Cu;
        // 0x180b60: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b5c) {
            ctx->pc = 0x180B7Cu;
            goto label_180b7c;
        }
    }
    ctx->pc = 0x180B64u;
    // 0x180b64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x180b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x180b68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x180b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b6c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x180B6Cu;
    SET_GPR_U32(ctx, 31, 0x180B74u);
    ctx->pc = 0x180B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B6Cu;
    // 0x180b70: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x180B6Cu, 0x180B74u)) {
        return;
    }
    ctx->pc = 0x180B74u;
label_180b74:
    // 0x180b74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x180b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_180b78:
    // 0x180b78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x180b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_180b7c:
    // 0x180b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180b80: 0x3e00008  jr          $ra
    ctx->pc = 0x180B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B80u;
        // 0x180b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B88u;
}
