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

// Function: sub_002A2B70
// Address: 0x2a2b70 - 0x2a2c48
void sub_002A2B70_0x2a2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2B70_0x2a2b70");
#endif

    switch (ctx->pc) {
        case 0x2a2b70u: goto label_2a2b70;
        case 0x2a2b74u: goto label_2a2b74;
        case 0x2a2b78u: goto label_2a2b78;
        case 0x2a2b7cu: goto label_2a2b7c;
        case 0x2a2b80u: goto label_2a2b80;
        case 0x2a2b84u: goto label_2a2b84;
        case 0x2a2b88u: goto label_2a2b88;
        case 0x2a2b8cu: goto label_2a2b8c;
        case 0x2a2b90u: goto label_2a2b90;
        case 0x2a2b94u: goto label_2a2b94;
        case 0x2a2b98u: goto label_2a2b98;
        case 0x2a2b9cu: goto label_2a2b9c;
        case 0x2a2ba0u: goto label_2a2ba0;
        case 0x2a2ba4u: goto label_2a2ba4;
        case 0x2a2ba8u: goto label_2a2ba8;
        case 0x2a2bacu: goto label_2a2bac;
        case 0x2a2bb0u: goto label_2a2bb0;
        case 0x2a2bb4u: goto label_2a2bb4;
        case 0x2a2bb8u: goto label_2a2bb8;
        case 0x2a2bbcu: goto label_2a2bbc;
        case 0x2a2bc0u: goto label_2a2bc0;
        case 0x2a2bc4u: goto label_2a2bc4;
        case 0x2a2bc8u: goto label_2a2bc8;
        case 0x2a2bccu: goto label_2a2bcc;
        case 0x2a2bd0u: goto label_2a2bd0;
        case 0x2a2bd4u: goto label_2a2bd4;
        case 0x2a2bd8u: goto label_2a2bd8;
        case 0x2a2bdcu: goto label_2a2bdc;
        case 0x2a2be0u: goto label_2a2be0;
        case 0x2a2be4u: goto label_2a2be4;
        case 0x2a2be8u: goto label_2a2be8;
        case 0x2a2becu: goto label_2a2bec;
        case 0x2a2bf0u: goto label_2a2bf0;
        case 0x2a2bf4u: goto label_2a2bf4;
        case 0x2a2bf8u: goto label_2a2bf8;
        case 0x2a2bfcu: goto label_2a2bfc;
        case 0x2a2c00u: goto label_2a2c00;
        case 0x2a2c04u: goto label_2a2c04;
        case 0x2a2c08u: goto label_2a2c08;
        case 0x2a2c0cu: goto label_2a2c0c;
        case 0x2a2c10u: goto label_2a2c10;
        case 0x2a2c14u: goto label_2a2c14;
        case 0x2a2c18u: goto label_2a2c18;
        case 0x2a2c1cu: goto label_2a2c1c;
        case 0x2a2c20u: goto label_2a2c20;
        case 0x2a2c24u: goto label_2a2c24;
        case 0x2a2c28u: goto label_2a2c28;
        case 0x2a2c2cu: goto label_2a2c2c;
        case 0x2a2c30u: goto label_2a2c30;
        case 0x2a2c34u: goto label_2a2c34;
        case 0x2a2c38u: goto label_2a2c38;
        case 0x2a2c3cu: goto label_2a2c3c;
        case 0x2a2c40u: goto label_2a2c40;
        case 0x2a2c44u: goto label_2a2c44;
        default: break;
    }

    ctx->pc = 0x2a2b70u;

label_2a2b70:
    // 0x2a2b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a2b74:
    // 0x2a2b74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a2b78:
    // 0x2a2b78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a2b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a2b7c:
    // 0x2a2b7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a2b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b80:
    // 0x2a2b80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a2b84:
    // 0x2a2b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a2b88:
    // 0x2a2b88: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2a2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2a2b8c:
    // 0x2a2b8c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_2a2b90:
    if (ctx->pc == 0x2A2B90u) {
        ctx->pc = 0x2A2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B8Cu;
        // 0x2a2b90: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B94u;
        goto label_2a2b94;
    }
    ctx->pc = 0x2A2B8Cu;
    {
        const bool branch_taken_0x2a2b8c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2a2b8c) {
            ctx->pc = 0x2A2B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2B8Cu;
            // 0x2a2b90: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2B9Cu;
            goto label_2a2b9c;
        }
    }
    ctx->pc = 0x2A2B94u;
label_2a2b94:
    // 0x2a2b94: 0x10000023  b           . + 4 + (0x23 << 2)
label_2a2b98:
    if (ctx->pc == 0x2A2B98u) {
        ctx->pc = 0x2A2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B94u;
        // 0x2a2b98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B9Cu;
        goto label_2a2b9c;
    }
    ctx->pc = 0x2A2B94u;
    {
        const bool branch_taken_0x2a2b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B94u;
        // 0x2a2b98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2b94) {
            ctx->pc = 0x2A2C24u;
            goto label_2a2c24;
        }
    }
    ctx->pc = 0x2A2B9Cu;
label_2a2b9c:
    // 0x2a2b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ba0:
    // 0x2a2ba0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x2a2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2a2ba4:
    // 0x2a2ba4: 0xc0a8ba6  jal         func_2A2E98
label_2a2ba8:
    if (ctx->pc == 0x2A2BA8u) {
        ctx->pc = 0x2A2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BA4u;
        // 0x2a2ba8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BACu;
        goto label_2a2bac;
    }
    ctx->pc = 0x2A2BA4u;
    SET_GPR_U32(ctx, 31, 0x2A2BACu);
    ctx->pc = 0x2A2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BA4u;
    // 0x2a2ba8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A2BA4u, 0x2A2BACu)) {
        return;
    }
    ctx->pc = 0x2A2BACu;
label_2a2bac:
    // 0x2a2bac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bb0:
    // 0x2a2bb0: 0xc0a7556  jal         func_29D558
label_2a2bb4:
    if (ctx->pc == 0x2A2BB4u) {
        ctx->pc = 0x2A2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BB0u;
        // 0x2a2bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BB8u;
        goto label_2a2bb8;
    }
    ctx->pc = 0x2A2BB0u;
    SET_GPR_U32(ctx, 31, 0x2A2BB8u);
    ctx->pc = 0x2A2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BB0u;
    // 0x2a2bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D558u, 0x2A2BB0u, 0x2A2BB8u)) {
        return;
    }
    ctx->pc = 0x2A2BB8u;
label_2a2bb8:
    // 0x2a2bb8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x2a2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2a2bbc:
    // 0x2a2bbc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2a2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2a2bc0:
    // 0x2a2bc0: 0x40f809  jalr        $v0
label_2a2bc4:
    if (ctx->pc == 0x2A2BC4u) {
        ctx->pc = 0x2A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BC0u;
        // 0x2a2bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BC8u;
        goto label_2a2bc8;
    }
    ctx->pc = 0x2A2BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2BC8u);
        ctx->pc = 0x2A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BC0u;
        // 0x2a2bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2BC0u, 0x2A2BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2BC8u;
label_2a2bc8:
    // 0x2a2bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bcc:
    // 0x2a2bcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bd0:
    // 0x2a2bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bd4:
    // 0x2a2bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bd8:
    // 0x2a2bd8: 0xc0a72e0  jal         func_29CB80
label_2a2bdc:
    if (ctx->pc == 0x2A2BDCu) {
        ctx->pc = 0x2A2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BD8u;
        // 0x2a2bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BE0u;
        goto label_2a2be0;
    }
    ctx->pc = 0x2A2BD8u;
    SET_GPR_U32(ctx, 31, 0x2A2BE0u);
    ctx->pc = 0x2A2BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BD8u;
    // 0x2a2bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CB80u, 0x2A2BD8u, 0x2A2BE0u)) {
        return;
    }
    ctx->pc = 0x2A2BE0u;
label_2a2be0:
    // 0x2a2be0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2a2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_2a2be4:
    // 0x2a2be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2be8:
    // 0x2a2be8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2a2be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2a2bec:
    // 0x2a2bec: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2a2becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_2a2bf0:
    // 0x2a2bf0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2a2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2a2bf4:
    // 0x2a2bf4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2a2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2a2bf8:
    // 0x2a2bf8: 0xc0a7170  jal         func_29C5C0
label_2a2bfc:
    if (ctx->pc == 0x2A2BFCu) {
        ctx->pc = 0x2A2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BF8u;
        // 0x2a2bfc: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C00u;
        goto label_2a2c00;
    }
    ctx->pc = 0x2A2BF8u;
    SET_GPR_U32(ctx, 31, 0x2A2C00u);
    ctx->pc = 0x2A2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BF8u;
    // 0x2a2bfc: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C5C0u, 0x2A2BF8u, 0x2A2C00u)) {
        return;
    }
    ctx->pc = 0x2A2C00u;
label_2a2c00:
    // 0x2a2c00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2c04:
    // 0x2a2c04: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x2a2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
label_2a2c08:
    // 0x2a2c08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2c0c:
    // 0x2a2c0c: 0x3463240c  ori         $v1, $v1, 0x240C
    ctx->pc = 0x2a2c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9228);
label_2a2c10:
    // 0x2a2c10: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x2a2c10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_2a2c14:
    // 0x2a2c14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a2c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c18:
    // 0x2a2c18: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2a2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2a2c1c:
    // 0x2a2c1c: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x2a2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
label_2a2c20:
    // 0x2a2c20: 0x210100b  movn        $v0, $s0, $s0
    ctx->pc = 0x2a2c20u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
label_2a2c24:
    // 0x2a2c24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a2c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a2c28:
    // 0x2a2c28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2c2c:
    // 0x2a2c2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2c30:
    // 0x2a2c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2c34:
    // 0x2a2c34: 0x3e00008  jr          $ra
label_2a2c38:
    if (ctx->pc == 0x2A2C38u) {
        ctx->pc = 0x2A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C34u;
        // 0x2a2c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C3Cu;
        goto label_2a2c3c;
    }
    ctx->pc = 0x2A2C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C34u;
        // 0x2a2c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2C3Cu;
label_2a2c3c:
    // 0x2a2c3c: 0x0  nop
    ctx->pc = 0x2a2c3cu;
    // NOP
label_2a2c40:
    // 0x2a2c40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a2c44:
    // 0x2a2c44: 0x0  nop
    ctx->pc = 0x2a2c44u;
    // NOP
    ctx->pc = 0x2a2c48u;
}
