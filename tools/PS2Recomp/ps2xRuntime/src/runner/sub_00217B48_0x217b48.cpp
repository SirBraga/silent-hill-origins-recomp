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

// Function: sub_00217B48
// Address: 0x217b48 - 0x217d70
void sub_00217B48_0x217b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217B48_0x217b48");
#endif

    switch (ctx->pc) {
        case 0x217b74u: goto label_217b74;
        case 0x217ba4u: goto label_217ba4;
        case 0x217bc0u: goto label_217bc0;
        case 0x217c04u: goto label_217c04;
        case 0x217c14u: goto label_217c14;
        case 0x217c24u: goto label_217c24;
        case 0x217c34u: goto label_217c34;
        case 0x217c44u: goto label_217c44;
        case 0x217c54u: goto label_217c54;
        case 0x217c64u: goto label_217c64;
        case 0x217c78u: goto label_217c78;
        case 0x217c8cu: goto label_217c8c;
        case 0x217ca0u: goto label_217ca0;
        case 0x217cb4u: goto label_217cb4;
        case 0x217cccu: goto label_217ccc;
        case 0x217ce0u: goto label_217ce0;
        case 0x217cf4u: goto label_217cf4;
        case 0x217d0cu: goto label_217d0c;
        case 0x217d2cu: goto label_217d2c;
        case 0x217d40u: goto label_217d40;
        case 0x217d54u: goto label_217d54;
        default: break;
    }

    ctx->pc = 0x217b48u;

    // 0x217b48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217b4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x217b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x217b50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x217b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x217b54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b58: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x217B58u;
    {
        const bool branch_taken_0x217b58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B58u;
        // 0x217b5c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b58) {
            ctx->pc = 0x217B88u;
            goto label_217b88;
        }
    }
    ctx->pc = 0x217B60u;
    // 0x217b60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x217b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b6c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217B6Cu;
    SET_GPR_U32(ctx, 31, 0x217B74u);
    ctx->pc = 0x217B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B6Cu;
    // 0x217b70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217B6Cu, 0x217B74u)) {
        return;
    }
    ctx->pc = 0x217B74u;
label_217b74:
    // 0x217b74: 0x3c030c01  lui         $v1, 0xC01
    ctx->pc = 0x217b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3073 << 16));
    // 0x217b78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x217b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b7c: 0x34631b59  ori         $v1, $v1, 0x1B59
    ctx->pc = 0x217b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7001);
    // 0x217b80: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217B80u;
    {
        const bool branch_taken_0x217b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x217B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B80u;
        // 0x217b84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b80) {
            ctx->pc = 0x217B90u;
            goto label_217b90;
        }
    }
    ctx->pc = 0x217B88u;
label_217b88:
    // 0x217b88: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x217B88u;
    {
        const bool branch_taken_0x217b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B88u;
        // 0x217b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b88) {
            ctx->pc = 0x217D58u;
            goto label_217d58;
        }
    }
    ctx->pc = 0x217B90u;
label_217b90:
    // 0x217b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x217b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x217b98: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x217b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x217b9c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217B9Cu;
    SET_GPR_U32(ctx, 31, 0x217BA4u);
    ctx->pc = 0x217BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B9Cu;
    // 0x217ba0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217B9Cu, 0x217BA4u)) {
        return;
    }
    ctx->pc = 0x217BA4u;
label_217ba4:
    // 0x217ba4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x217ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x217ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217bac: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x217BACu;
    {
        const bool branch_taken_0x217bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x217BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BACu;
        // 0x217bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bac) {
            ctx->pc = 0x217D58u;
            goto label_217d58;
        }
    }
    ctx->pc = 0x217BB4u;
    // 0x217bb4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x217bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x217bb8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x217BB8u;
    SET_GPR_U32(ctx, 31, 0x217BC0u);
    ctx->pc = 0x217BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BB8u;
    // 0x217bbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x217BB8u, 0x217BC0u)) {
        return;
    }
    ctx->pc = 0x217BC0u;
label_217bc0:
    // 0x217bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bc8: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x217bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x217bcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217bd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x217bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x217bd4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x217bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x217bd8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x217bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x217bdc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x217bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x217be0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x217be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x217be4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x217be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x217be8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x217be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x217bec: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x217becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x217bf0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x217bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x217bf4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x217bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x217bf8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x217bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x217bfc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217BFCu;
    SET_GPR_U32(ctx, 31, 0x217C04u);
    ctx->pc = 0x217C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BFCu;
    // 0x217c00: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217BFCu, 0x217C04u)) {
        return;
    }
    ctx->pc = 0x217C04u;
label_217c04:
    // 0x217c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c08: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x217c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x217c0c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217C0Cu;
    SET_GPR_U32(ctx, 31, 0x217C14u);
    ctx->pc = 0x217C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C0Cu;
    // 0x217c10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217C0Cu, 0x217C14u)) {
        return;
    }
    ctx->pc = 0x217C14u;
label_217c14:
    // 0x217c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c18: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x217c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x217c1c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217C1Cu;
    SET_GPR_U32(ctx, 31, 0x217C24u);
    ctx->pc = 0x217C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C1Cu;
    // 0x217c20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217C1Cu, 0x217C24u)) {
        return;
    }
    ctx->pc = 0x217C24u;
label_217c24:
    // 0x217c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c28: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x217c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x217c2c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217C2Cu;
    SET_GPR_U32(ctx, 31, 0x217C34u);
    ctx->pc = 0x217C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C2Cu;
    // 0x217c30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217C2Cu, 0x217C34u)) {
        return;
    }
    ctx->pc = 0x217C34u;
label_217c34:
    // 0x217c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c38: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x217c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x217c3c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217C3Cu;
    SET_GPR_U32(ctx, 31, 0x217C44u);
    ctx->pc = 0x217C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C3Cu;
    // 0x217c40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217C3Cu, 0x217C44u)) {
        return;
    }
    ctx->pc = 0x217C44u;
label_217c44:
    // 0x217c44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c4c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x217C4Cu;
    SET_GPR_U32(ctx, 31, 0x217C54u);
    ctx->pc = 0x217C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C4Cu;
    // 0x217c50: 0x2605002c  addiu       $a1, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x217C4Cu, 0x217C54u)) {
        return;
    }
    ctx->pc = 0x217C54u;
label_217c54:
    // 0x217c54: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x217c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x217c58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217c5c: 0xc080924  jal         func_202490
    ctx->pc = 0x217C5Cu;
    SET_GPR_U32(ctx, 31, 0x217C64u);
    ctx->pc = 0x217C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C5Cu;
    // 0x217c60: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217C5Cu, 0x217C64u)) {
        return;
    }
    ctx->pc = 0x217C64u;
label_217c64:
    // 0x217c64: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x217c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x217c68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217c6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x217c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x217c70: 0xc080924  jal         func_202490
    ctx->pc = 0x217C70u;
    SET_GPR_U32(ctx, 31, 0x217C78u);
    ctx->pc = 0x217C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C70u;
    // 0x217c74: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217C70u, 0x217C78u)) {
        return;
    }
    ctx->pc = 0x217C78u;
label_217c78:
    // 0x217c78: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x217c7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217c80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x217c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x217c84: 0xc080924  jal         func_202490
    ctx->pc = 0x217C84u;
    SET_GPR_U32(ctx, 31, 0x217C8Cu);
    ctx->pc = 0x217C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C84u;
    // 0x217c88: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217C84u, 0x217C8Cu)) {
        return;
    }
    ctx->pc = 0x217C8Cu;
label_217c8c:
    // 0x217c8c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x217c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x217c90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217c94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x217c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x217c98: 0xc080924  jal         func_202490
    ctx->pc = 0x217C98u;
    SET_GPR_U32(ctx, 31, 0x217CA0u);
    ctx->pc = 0x217C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C98u;
    // 0x217c9c: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217C98u, 0x217CA0u)) {
        return;
    }
    ctx->pc = 0x217CA0u;
label_217ca0:
    // 0x217ca0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x217ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x217ca4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217ca8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x217ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x217cac: 0xc080924  jal         func_202490
    ctx->pc = 0x217CACu;
    SET_GPR_U32(ctx, 31, 0x217CB4u);
    ctx->pc = 0x217CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CACu;
    // 0x217cb0: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217CACu, 0x217CB4u)) {
        return;
    }
    ctx->pc = 0x217CB4u;
label_217cb4:
    // 0x217cb4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x217cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x217cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217cc0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x217cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x217cc4: 0xc093546  jal         func_24D518
    ctx->pc = 0x217CC4u;
    SET_GPR_U32(ctx, 31, 0x217CCCu);
    ctx->pc = 0x217CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CC4u;
    // 0x217cc8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x217CC4u, 0x217CCCu)) {
        return;
    }
    ctx->pc = 0x217CCCu;
label_217ccc:
    // 0x217ccc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x217cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x217cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cd4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x217cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217cd8: 0xc093546  jal         func_24D518
    ctx->pc = 0x217CD8u;
    SET_GPR_U32(ctx, 31, 0x217CE0u);
    ctx->pc = 0x217CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CD8u;
    // 0x217cdc: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x217CD8u, 0x217CE0u)) {
        return;
    }
    ctx->pc = 0x217CE0u;
label_217ce0:
    // 0x217ce0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x217ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217ce4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x217CE4u;
    {
        const bool branch_taken_0x217ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE4u;
        // 0x217ce8: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ce4) {
            ctx->pc = 0x217D14u;
            goto label_217d14;
        }
    }
    ctx->pc = 0x217CECu;
    // 0x217cec: 0xc080924  jal         func_202490
    ctx->pc = 0x217CECu;
    SET_GPR_U32(ctx, 31, 0x217CF4u);
    ctx->pc = 0x217CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CECu;
    // 0x217cf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x217CECu, 0x217CF4u)) {
        return;
    }
    ctx->pc = 0x217CF4u;
label_217cf4:
    // 0x217cf4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x217cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cfc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x217cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x217d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d04: 0xc093546  jal         func_24D518
    ctx->pc = 0x217D04u;
    SET_GPR_U32(ctx, 31, 0x217D0Cu);
    ctx->pc = 0x217D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D04u;
    // 0x217d08: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x217D04u, 0x217D0Cu)) {
        return;
    }
    ctx->pc = 0x217D0Cu;
label_217d0c:
    // 0x217d0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x217D0Cu;
    {
        const bool branch_taken_0x217d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D0Cu;
        // 0x217d10: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d0c) {
            ctx->pc = 0x217D1Cu;
            goto label_217d1c;
        }
    }
    ctx->pc = 0x217D14u;
label_217d14:
    // 0x217d14: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x217d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x217d18: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x217d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_217d1c:
    // 0x217d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d20: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x217d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x217d24: 0xc093546  jal         func_24D518
    ctx->pc = 0x217D24u;
    SET_GPR_U32(ctx, 31, 0x217D2Cu);
    ctx->pc = 0x217D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D24u;
    // 0x217d28: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x217D24u, 0x217D2Cu)) {
        return;
    }
    ctx->pc = 0x217D2Cu;
label_217d2c:
    // 0x217d2c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x217d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x217d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x217d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217d38: 0xc093546  jal         func_24D518
    ctx->pc = 0x217D38u;
    SET_GPR_U32(ctx, 31, 0x217D40u);
    ctx->pc = 0x217D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D38u;
    // 0x217d3c: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x217D38u, 0x217D40u)) {
        return;
    }
    ctx->pc = 0x217D40u;
label_217d40:
    // 0x217d40: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x217d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d48: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x217d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x217d4c: 0xc093546  jal         func_24D518
    ctx->pc = 0x217D4Cu;
    SET_GPR_U32(ctx, 31, 0x217D54u);
    ctx->pc = 0x217D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D4Cu;
    // 0x217d50: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x217D4Cu, 0x217D54u)) {
        return;
    }
    ctx->pc = 0x217D54u;
label_217d54:
    // 0x217d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217d58:
    // 0x217d58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x217d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217d5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217d64: 0x3e00008  jr          $ra
    ctx->pc = 0x217D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D64u;
        // 0x217d68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217D6Cu;
    // 0x217d6c: 0x0  nop
    ctx->pc = 0x217d6cu;
    // NOP
    ctx->pc = 0x217d70u;
}
