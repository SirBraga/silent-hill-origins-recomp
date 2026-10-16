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

// Function: sub_001E4AC0
// Address: 0x1e4ac0 - 0x1e4cc0
void sub_001E4AC0_0x1e4ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4AC0_0x1e4ac0");
#endif

    switch (ctx->pc) {
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c74u: goto label_1e4c74;
        default: break;
    }

    ctx->pc = 0x1e4ac0u;

    // 0x1e4ac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e4ac4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e4ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1e4ac8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1e4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1e4acc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e4accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ad4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1e4ad8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1e4adc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1e4ae0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1e4ae4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e4ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e4ae8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1e4ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1e4aec: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1e4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1e4af0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1e4af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4af8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4AF8u;
    SET_GPR_U32(ctx, 31, 0x1E4B00u);
    ctx->pc = 0x1E4AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AF8u;
    // 0x1e4afc: 0x24050106  addiu       $a1, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4AF8u, 0x1E4B00u)) {
        return;
    }
    ctx->pc = 0x1E4B00u;
label_1e4b00:
    // 0x1e4b00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4b08: 0x53282a  slt         $a1, $v0, $s3
    ctx->pc = 0x1e4b08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1e4b0c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e4b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1e4b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e4b14: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1e4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e4b18: 0x2663007f  addiu       $v1, $s3, 0x7F
    ctx->pc = 0x1e4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 127));
    // 0x1e4b1c: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x1e4b1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6));
    // 0x1e4b20: 0x265180b  movn        $v1, $s3, $a1
    ctx->pc = 0x1e4b20u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19));
    // 0x1e4b24: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1e4b24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1e4b28: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E4B28u;
    {
        const bool branch_taken_0x1e4b28 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1E4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B28u;
        // 0x1e4b2c: 0x41083  sra         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b28) {
            ctx->pc = 0x1E4B70u;
            goto label_1e4b70;
        }
    }
    ctx->pc = 0x1E4B30u;
    // 0x1e4b30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e4b34: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1e4b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b38: 0x2a438  dsll        $s4, $v0, 16
    ctx->pc = 0x1e4b38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << 16);
    // 0x1e4b3c: 0x24121600  addiu       $s2, $zero, 0x1600
    ctx->pc = 0x1e4b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    // 0x1e4b40: 0x24111400  addiu       $s1, $zero, 0x1400
    ctx->pc = 0x1e4b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x1e4b44: 0x0  nop
    ctx->pc = 0x1e4b44u;
    // NOP
label_1e4b48:
    // 0x1e4b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b4c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B54u);
    ctx->pc = 0x1E4B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B4Cu;
    // 0x1e4b50: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4B4Cu, 0x1E4B54u)) {
        return;
    }
    ctx->pc = 0x1E4B54u;
label_1e4b54:
    // 0x1e4b54: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x1e4b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x1e4b58: 0x2542825  or          $a1, $s2, $s4
    ctx->pc = 0x1e4b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 20));
    // 0x1e4b5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B64u);
    ctx->pc = 0x1E4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B5Cu;
    // 0x1e4b60: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4B5Cu, 0x1E4B64u)) {
        return;
    }
    ctx->pc = 0x1E4B64u;
label_1e4b64:
    // 0x1e4b64: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1e4b68: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E4B68u;
    {
        const bool branch_taken_0x1e4b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B68u;
        // 0x1e4b6c: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b68) {
            ctx->pc = 0x1E4B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4b48;
        }
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e4b74: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4B74u;
    SET_GPR_U32(ctx, 31, 0x1E4B7Cu);
    ctx->pc = 0x1E4B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B74u;
    // 0x1e4b78: 0x24050094  addiu       $a1, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4B74u, 0x1E4B7Cu)) {
        return;
    }
    ctx->pc = 0x1E4B7Cu;
label_1e4b7c:
    // 0x1e4b7c: 0x2662007f  addiu       $v0, $s3, 0x7F
    ctx->pc = 0x1e4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 127));
    // 0x1e4b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b84: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1e4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1e4b88: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4B88u;
    SET_GPR_U32(ctx, 31, 0x1E4B90u);
    ctx->pc = 0x1E4B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B88u;
    // 0x1e4b8c: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4B88u, 0x1E4B90u)) {
        return;
    }
    ctx->pc = 0x1E4B90u;
label_1e4b90:
    // 0x1e4b90: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e4b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e4b94: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e4b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e4b98: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e4b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e4b9c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E4BA4u);
    ctx->pc = 0x1E4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B9Cu;
    // 0x1e4ba0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4B9Cu, 0x1E4BA4u)) {
        return;
    }
    ctx->pc = 0x1E4BA4u;
label_1e4ba4:
    // 0x1e4ba4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4ba8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4bac: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1e4bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1e4bb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bb4: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x1e4bb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19));
    // 0x1e4bb8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1e4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1e4bbc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4bc0:
    // 0x1e4bc0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e4bc4: 0xc42823  subu        $a1, $a2, $a0
    ctx->pc = 0x1e4bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1e4bc8: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x1e4bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1e4bcc: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e4bccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1e4bd0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1e4bd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x1e4bd4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4bd8: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1e4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1e4bdc: 0x239c3  sra         $a3, $v0, 7
    ctx->pc = 0x1e4bdcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1e4be0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e4be4: 0x18e00026  blez        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E4BE4u;
    {
        const bool branch_taken_0x1e4be4 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x1E4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BE4u;
        // 0x1e4be8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4be4) {
            ctx->pc = 0x1E4C80u;
            goto label_1e4c80;
        }
    }
    ctx->pc = 0x1E4BECu;
    // 0x1e4bec: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1e4becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e4bf0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e4bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e4bf8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1e4bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e4bfc: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1e4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1e4c00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e4c04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e4c08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e4c0c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e4c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e4c10: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x1e4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1e4c14: 0x3f438  dsll        $fp, $v1, 16
    ctx->pc = 0x1e4c14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 16);
    // 0x1e4c18: 0x2bc38  dsll        $s7, $v0, 16
    ctx->pc = 0x1e4c18u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << 16);
    // 0x1e4c1c: 0x4b438  dsll        $s6, $a0, 16
    ctx->pc = 0x1e4c1cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) << 16);
    // 0x1e4c20: 0x5ac38  dsll        $s5, $a1, 16
    ctx->pc = 0x1e4c20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << 16);
    // 0x1e4c24: 0x24141600  addiu       $s4, $zero, 0x1600
    ctx->pc = 0x1e4c24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    // 0x1e4c28: 0x24130410  addiu       $s3, $zero, 0x410
    ctx->pc = 0x1e4c28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1e4c2c: 0x24121400  addiu       $s2, $zero, 0x1400
    ctx->pc = 0x1e4c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x1e4c30: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1e4c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e4c34: 0x0  nop
    ctx->pc = 0x1e4c34u;
    // NOP
label_1e4c38:
    // 0x1e4c38: 0x23e2825  or          $a1, $s1, $fp
    ctx->pc = 0x1e4c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 30));
    // 0x1e4c3c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C44u);
    ctx->pc = 0x1E4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C3Cu;
    // 0x1e4c40: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4C3Cu, 0x1E4C44u)) {
        return;
    }
    ctx->pc = 0x1E4C44u;
label_1e4c44:
    // 0x1e4c44: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x1e4c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e4c48: 0x2562825  or          $a1, $s2, $s6
    ctx->pc = 0x1e4c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 22));
    // 0x1e4c4c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C54u);
    ctx->pc = 0x1E4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C4Cu;
    // 0x1e4c50: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4C4Cu, 0x1E4C54u)) {
        return;
    }
    ctx->pc = 0x1E4C54u;
label_1e4c54:
    // 0x1e4c54: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x1e4c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x1e4c58: 0x2772825  or          $a1, $s3, $s7
    ctx->pc = 0x1e4c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 23));
    // 0x1e4c5c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C64u);
    ctx->pc = 0x1E4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C5Cu;
    // 0x1e4c60: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4C5Cu, 0x1E4C64u)) {
        return;
    }
    ctx->pc = 0x1E4C64u;
label_1e4c64:
    // 0x1e4c64: 0x26730400  addiu       $s3, $s3, 0x400
    ctx->pc = 0x1e4c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x1e4c68: 0x2952825  or          $a1, $s4, $s5
    ctx->pc = 0x1e4c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
    // 0x1e4c6c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C74u);
    ctx->pc = 0x1E4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4C6Cu;
    // 0x1e4c70: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4C6Cu, 0x1E4C74u)) {
        return;
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1e4c78: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E4C78u;
    {
        const bool branch_taken_0x1e4c78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C78u;
        // 0x1e4c7c: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c78) {
            ctx->pc = 0x1E4C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4c38;
        }
    }
    ctx->pc = 0x1E4C80u;
label_1e4c80:
    // 0x1e4c80: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4c84: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1e4c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e4c88: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1E4C88u;
    {
        const bool branch_taken_0x1e4c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C88u;
        // 0x1e4c8c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c88) {
            ctx->pc = 0x1E4BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4bc0;
        }
    }
    ctx->pc = 0x1E4C90u;
    // 0x1e4c90: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e4c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4c94: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e4c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4c98: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e4c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4c9c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e4c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4ca0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4ca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4ca8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1e4ca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4cac: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1e4cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4cb0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e4cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB8u;
        // 0x1e4cbc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4CC0u;
}
