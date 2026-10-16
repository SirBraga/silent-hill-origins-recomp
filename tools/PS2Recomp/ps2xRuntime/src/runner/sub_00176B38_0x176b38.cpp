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

// Function: sub_00176B38
// Address: 0x176b38 - 0x176d70
void sub_00176B38_0x176b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176B38_0x176b38");
#endif

    switch (ctx->pc) {
        case 0x176b94u: goto label_176b94;
        case 0x176b9cu: goto label_176b9c;
        case 0x176bb0u: goto label_176bb0;
        case 0x176bb8u: goto label_176bb8;
        case 0x176bccu: goto label_176bcc;
        case 0x176bd4u: goto label_176bd4;
        case 0x176be8u: goto label_176be8;
        case 0x176bf0u: goto label_176bf0;
        case 0x176c04u: goto label_176c04;
        case 0x176c0cu: goto label_176c0c;
        case 0x176c20u: goto label_176c20;
        case 0x176c28u: goto label_176c28;
        case 0x176c3cu: goto label_176c3c;
        case 0x176c54u: goto label_176c54;
        case 0x176c68u: goto label_176c68;
        case 0x176c74u: goto label_176c74;
        case 0x176c7cu: goto label_176c7c;
        case 0x176c84u: goto label_176c84;
        case 0x176c8cu: goto label_176c8c;
        case 0x176c94u: goto label_176c94;
        case 0x176cb4u: goto label_176cb4;
        case 0x176cc0u: goto label_176cc0;
        case 0x176ce0u: goto label_176ce0;
        case 0x176d20u: goto label_176d20;
        case 0x176d44u: goto label_176d44;
        case 0x176d50u: goto label_176d50;
        default: break;
    }

    ctx->pc = 0x176b38u;

    // 0x176b38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x176b3c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176b40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x176b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x176b44: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x176b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x176b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x176b50: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x176b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x176b54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176b58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x176b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x176b5c: 0x248469e8  addiu       $a0, $a0, 0x69E8
    ctx->pc = 0x176b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27112));
    // 0x176b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176b64: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x176b64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x176b68: 0x246369c8  addiu       $v1, $v1, 0x69C8
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27080));
    // 0x176b6c: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x176b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
    // 0x176b70: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x176b74: 0x261042d8  addiu       $s0, $s0, 0x42D8
    ctx->pc = 0x176b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17112));
    // 0x176b78: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x176b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x176b7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x176b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b80: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x176b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x176b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b88: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x176b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x176b8c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x176B8Cu;
    SET_GPR_U32(ctx, 31, 0x176B94u);
    ctx->pc = 0x176B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B8Cu;
    // 0x176b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x176B8Cu, 0x176B94u)) {
        return;
    }
    ctx->pc = 0x176B94u;
label_176b94:
    // 0x176b94: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x176B94u;
    SET_GPR_U32(ctx, 31, 0x176B9Cu);
    ctx->pc = 0x176B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B94u;
    // 0x176b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x176B94u, 0x176B9Cu)) {
        return;
    }
    ctx->pc = 0x176B9Cu;
label_176b9c:
    // 0x176b9c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x176b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x176ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ba4: 0x261042d0  addiu       $s0, $s0, 0x42D0
    ctx->pc = 0x176ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17104));
    // 0x176ba8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x176BA8u;
    SET_GPR_U32(ctx, 31, 0x176BB0u);
    ctx->pc = 0x176BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BA8u;
    // 0x176bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x176BA8u, 0x176BB0u)) {
        return;
    }
    ctx->pc = 0x176BB0u;
label_176bb0:
    // 0x176bb0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x176BB0u;
    SET_GPR_U32(ctx, 31, 0x176BB8u);
    ctx->pc = 0x176BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BB0u;
    // 0x176bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x176BB0u, 0x176BB8u)) {
        return;
    }
    ctx->pc = 0x176BB8u;
label_176bb8:
    // 0x176bb8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x176bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bc0: 0x261042e0  addiu       $s0, $s0, 0x42E0
    ctx->pc = 0x176bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17120));
    // 0x176bc4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x176BC4u;
    SET_GPR_U32(ctx, 31, 0x176BCCu);
    ctx->pc = 0x176BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BC4u;
    // 0x176bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x176BC4u, 0x176BCCu)) {
        return;
    }
    ctx->pc = 0x176BCCu;
label_176bcc:
    // 0x176bcc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x176BCCu;
    SET_GPR_U32(ctx, 31, 0x176BD4u);
    ctx->pc = 0x176BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BCCu;
    // 0x176bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x176BCCu, 0x176BD4u)) {
        return;
    }
    ctx->pc = 0x176BD4u;
label_176bd4:
    // 0x176bd4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x176bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x176bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bdc: 0x261042e8  addiu       $s0, $s0, 0x42E8
    ctx->pc = 0x176bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17128));
    // 0x176be0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x176BE0u;
    SET_GPR_U32(ctx, 31, 0x176BE8u);
    ctx->pc = 0x176BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BE0u;
    // 0x176be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x176BE0u, 0x176BE8u)) {
        return;
    }
    ctx->pc = 0x176BE8u;
label_176be8:
    // 0x176be8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x176BE8u;
    SET_GPR_U32(ctx, 31, 0x176BF0u);
    ctx->pc = 0x176BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BE8u;
    // 0x176bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x176BE8u, 0x176BF0u)) {
        return;
    }
    ctx->pc = 0x176BF0u;
label_176bf0:
    // 0x176bf0: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x176bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x176bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bf8: 0x2610eed8  addiu       $s0, $s0, -0x1128
    ctx->pc = 0x176bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962904));
    // 0x176bfc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x176BFCu;
    SET_GPR_U32(ctx, 31, 0x176C04u);
    ctx->pc = 0x176C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BFCu;
    // 0x176c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x176BFCu, 0x176C04u)) {
        return;
    }
    ctx->pc = 0x176C04u;
label_176c04:
    // 0x176c04: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x176C04u;
    SET_GPR_U32(ctx, 31, 0x176C0Cu);
    ctx->pc = 0x176C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C04u;
    // 0x176c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x176C04u, 0x176C0Cu)) {
        return;
    }
    ctx->pc = 0x176C0Cu;
label_176c0c:
    // 0x176c0c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x176c10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176C10u;
    {
        const bool branch_taken_0x176c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c10) {
            ctx->pc = 0x176C20u;
            goto label_176c20;
        }
    }
    ctx->pc = 0x176C18u;
    // 0x176c18: 0xc09799a  jal         func_25E668
    ctx->pc = 0x176C18u;
    SET_GPR_U32(ctx, 31, 0x176C20u);
    ctx->pc = 0x176C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C18u;
    // 0x176c1c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x176C18u, 0x176C20u)) {
        return;
    }
    ctx->pc = 0x176C20u;
label_176c20:
    // 0x176c20: 0xc094b64  jal         func_252D90
    ctx->pc = 0x176C20u;
    SET_GPR_U32(ctx, 31, 0x176C28u);
    ctx->pc = 0x176C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C20u;
    // 0x176c24: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252D90u, 0x176C20u, 0x176C28u)) {
        return;
    }
    ctx->pc = 0x176C28u;
label_176c28:
    // 0x176c28: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x176c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x176c2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x176C2Cu;
    {
        const bool branch_taken_0x176c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c2c) {
            ctx->pc = 0x176C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176C2Cu;
            // 0x176c30: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176C40u;
            goto label_176c40;
        }
    }
    ctx->pc = 0x176C34u;
    // 0x176c34: 0xc094b64  jal         func_252D90
    ctx->pc = 0x176C34u;
    SET_GPR_U32(ctx, 31, 0x176C3Cu);
    ctx->pc = 0x252D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252D90u, 0x176C34u, 0x176C3Cu)) {
        return;
    }
    ctx->pc = 0x176C3Cu;
label_176c3c:
    // 0x176c3c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x176c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_176c40:
    // 0x176c40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x176C40u;
    {
        const bool branch_taken_0x176c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C40u;
        // 0x176c44: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c40) {
            ctx->pc = 0x176C6Cu;
            goto label_176c6c;
        }
    }
    ctx->pc = 0x176C48u;
    // 0x176c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c4c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x176C4Cu;
    SET_GPR_U32(ctx, 31, 0x176C54u);
    ctx->pc = 0x176C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C4Cu;
    // 0x176c50: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x176C4Cu, 0x176C54u)) {
        return;
    }
    ctx->pc = 0x176C54u;
label_176c54:
    // 0x176c54: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x176c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x176c58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176C58u;
    {
        const bool branch_taken_0x176c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c58) {
            ctx->pc = 0x176C6Cu;
            goto label_176c6c;
        }
    }
    ctx->pc = 0x176C60u;
    // 0x176c60: 0xc092932  jal         func_24A4C8
    ctx->pc = 0x176C60u;
    SET_GPR_U32(ctx, 31, 0x176C68u);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x176C60u, 0x176C68u)) {
        return;
    }
    ctx->pc = 0x176C68u;
label_176c68:
    // 0x176c68: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x176c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_176c6c:
    // 0x176c6c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x176C6Cu;
    SET_GPR_U32(ctx, 31, 0x176C74u);
    ctx->pc = 0x176C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C6Cu;
    // 0x176c70: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x176C6Cu, 0x176C74u)) {
        return;
    }
    ctx->pc = 0x176C74u;
label_176c74:
    // 0x176c74: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x176C74u;
    SET_GPR_U32(ctx, 31, 0x176C7Cu);
    ctx->pc = 0x176C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C74u;
    // 0x176c78: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x176C74u, 0x176C7Cu)) {
        return;
    }
    ctx->pc = 0x176C7Cu;
label_176c7c:
    // 0x176c7c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x176C7Cu;
    SET_GPR_U32(ctx, 31, 0x176C84u);
    ctx->pc = 0x176C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C7Cu;
    // 0x176c80: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x176C7Cu, 0x176C84u)) {
        return;
    }
    ctx->pc = 0x176C84u;
label_176c84:
    // 0x176c84: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x176C84u;
    SET_GPR_U32(ctx, 31, 0x176C8Cu);
    ctx->pc = 0x176C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C84u;
    // 0x176c88: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x176C84u, 0x176C8Cu)) {
        return;
    }
    ctx->pc = 0x176C8Cu;
label_176c8c:
    // 0x176c8c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x176C8Cu;
    SET_GPR_U32(ctx, 31, 0x176C94u);
    ctx->pc = 0x176C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C8Cu;
    // 0x176c90: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x176C8Cu, 0x176C94u)) {
        return;
    }
    ctx->pc = 0x176C94u;
label_176c94:
    // 0x176c94: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x176c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x176c98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x176C98u;
    {
        const bool branch_taken_0x176c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C98u;
        // 0x176c9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c98) {
            ctx->pc = 0x176CB8u;
            goto label_176cb8;
        }
    }
    ctx->pc = 0x176CA0u;
    // 0x176ca0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x176ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x176ca4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x176CA4u;
    {
        const bool branch_taken_0x176ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ca4) {
            ctx->pc = 0x176CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176CA4u;
            // 0x176ca8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176CB8u;
            goto label_176cb8;
        }
    }
    ctx->pc = 0x176CACu;
    // 0x176cac: 0xc0861e0  jal         func_218780
    ctx->pc = 0x176CACu;
    SET_GPR_U32(ctx, 31, 0x176CB4u);
    ctx->pc = 0x176CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CACu;
    // 0x176cb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218780u, 0x176CACu, 0x176CB4u)) {
        return;
    }
    ctx->pc = 0x176CB4u;
label_176cb4:
    // 0x176cb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176cb8:
    // 0x176cb8: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x176CB8u;
    SET_GPR_U32(ctx, 31, 0x176CC0u);
    ctx->pc = 0x176CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CB8u;
    // 0x176cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x176CB8u, 0x176CC0u)) {
        return;
    }
    ctx->pc = 0x176CC0u;
label_176cc0:
    // 0x176cc0: 0x263000a4  addiu       $s0, $s1, 0xA4
    ctx->pc = 0x176cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x176cc4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176cc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x176cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176ccc: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x176cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x176cd0: 0x26320044  addiu       $s2, $s1, 0x44
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x176cd4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x176CD4u;
    {
        const bool branch_taken_0x176cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CD4u;
        // 0x176cd8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cd4) {
            ctx->pc = 0x176D38u;
            goto label_176d38;
        }
    }
    ctx->pc = 0x176CDCu;
    // 0x176cdc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_176ce0:
    // 0x176ce0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x176CE0u;
    {
        const bool branch_taken_0x176ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ce0) {
            ctx->pc = 0x176CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176CE0u;
            // 0x176ce4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176D30u;
            goto label_176d30;
        }
    }
    ctx->pc = 0x176CE8u;
    // 0x176ce8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x176ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x176cec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176CECu;
    {
        const bool branch_taken_0x176cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CECu;
        // 0x176cf0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cec) {
            ctx->pc = 0x176CFCu;
            goto label_176cfc;
        }
    }
    ctx->pc = 0x176CF4u;
    // 0x176cf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176CF4u;
    {
        const bool branch_taken_0x176cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CF4u;
        // 0x176cf8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cf4) {
            ctx->pc = 0x176D00u;
            goto label_176d00;
        }
    }
    ctx->pc = 0x176CFCu;
label_176cfc:
    // 0x176cfc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x176cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_176d00:
    // 0x176d00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x176d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x176d04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176D04u;
    {
        const bool branch_taken_0x176d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D04u;
        // 0x176d08: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d04) {
            ctx->pc = 0x176D14u;
            goto label_176d14;
        }
    }
    ctx->pc = 0x176D0Cu;
    // 0x176d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176D0Cu;
    {
        const bool branch_taken_0x176d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D0Cu;
        // 0x176d10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d0c) {
            ctx->pc = 0x176D18u;
            goto label_176d18;
        }
    }
    ctx->pc = 0x176D14u;
label_176d14:
    // 0x176d14: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x176d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_176d18:
    // 0x176d18: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x176D18u;
    SET_GPR_U32(ctx, 31, 0x176D20u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x176D18u, 0x176D20u)) {
        return;
    }
    ctx->pc = 0x176D20u;
label_176d20:
    // 0x176d20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176d24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x176d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x176d28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x176d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x176d2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_176d30:
    // 0x176d30: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x176D30u;
    {
        const bool branch_taken_0x176d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176d30) {
            ctx->pc = 0x176D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176D30u;
            // 0x176d34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176ce0;
        }
    }
    ctx->pc = 0x176D38u;
label_176d38:
    // 0x176d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d3c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x176D3Cu;
    SET_GPR_U32(ctx, 31, 0x176D44u);
    ctx->pc = 0x176D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D3Cu;
    // 0x176d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F158u, 0x176D3Cu, 0x176D44u)) {
        return;
    }
    ctx->pc = 0x176D44u;
label_176d44:
    // 0x176d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d48: 0xc04f084  jal         func_13C210
    ctx->pc = 0x176D48u;
    SET_GPR_U32(ctx, 31, 0x176D50u);
    ctx->pc = 0x176D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D48u;
    // 0x176d4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x176D48u, 0x176D50u)) {
        return;
    }
    ctx->pc = 0x176D50u;
label_176d50:
    // 0x176d50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x176d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176d54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x176d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x176d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d64: 0x3e00008  jr          $ra
    ctx->pc = 0x176D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D64u;
        // 0x176d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176D6Cu;
    // 0x176d6c: 0x0  nop
    ctx->pc = 0x176d6cu;
    // NOP
    ctx->pc = 0x176d70u;
}
