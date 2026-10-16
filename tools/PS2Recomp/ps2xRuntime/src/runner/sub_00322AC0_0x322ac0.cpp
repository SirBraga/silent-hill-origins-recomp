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

// Function: sub_00322AC0
// Address: 0x322ac0 - 0x322c98
void sub_00322AC0_0x322ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322AC0_0x322ac0");
#endif

    switch (ctx->pc) {
        case 0x322ac0u: goto label_322ac0;
        case 0x322ac4u: goto label_322ac4;
        case 0x322ac8u: goto label_322ac8;
        case 0x322accu: goto label_322acc;
        case 0x322ad0u: goto label_322ad0;
        case 0x322ad4u: goto label_322ad4;
        case 0x322ad8u: goto label_322ad8;
        case 0x322adcu: goto label_322adc;
        case 0x322ae0u: goto label_322ae0;
        case 0x322ae4u: goto label_322ae4;
        case 0x322ae8u: goto label_322ae8;
        case 0x322aecu: goto label_322aec;
        case 0x322af0u: goto label_322af0;
        case 0x322af4u: goto label_322af4;
        case 0x322af8u: goto label_322af8;
        case 0x322afcu: goto label_322afc;
        case 0x322b00u: goto label_322b00;
        case 0x322b04u: goto label_322b04;
        case 0x322b08u: goto label_322b08;
        case 0x322b0cu: goto label_322b0c;
        case 0x322b10u: goto label_322b10;
        case 0x322b14u: goto label_322b14;
        case 0x322b18u: goto label_322b18;
        case 0x322b1cu: goto label_322b1c;
        case 0x322b20u: goto label_322b20;
        case 0x322b24u: goto label_322b24;
        case 0x322b28u: goto label_322b28;
        case 0x322b2cu: goto label_322b2c;
        case 0x322b30u: goto label_322b30;
        case 0x322b34u: goto label_322b34;
        case 0x322b38u: goto label_322b38;
        case 0x322b3cu: goto label_322b3c;
        case 0x322b40u: goto label_322b40;
        case 0x322b44u: goto label_322b44;
        case 0x322b48u: goto label_322b48;
        case 0x322b4cu: goto label_322b4c;
        case 0x322b50u: goto label_322b50;
        case 0x322b54u: goto label_322b54;
        case 0x322b58u: goto label_322b58;
        case 0x322b5cu: goto label_322b5c;
        case 0x322b60u: goto label_322b60;
        case 0x322b64u: goto label_322b64;
        case 0x322b68u: goto label_322b68;
        case 0x322b6cu: goto label_322b6c;
        case 0x322b70u: goto label_322b70;
        case 0x322b74u: goto label_322b74;
        case 0x322b78u: goto label_322b78;
        case 0x322b7cu: goto label_322b7c;
        case 0x322b80u: goto label_322b80;
        case 0x322b84u: goto label_322b84;
        case 0x322b88u: goto label_322b88;
        case 0x322b8cu: goto label_322b8c;
        case 0x322b90u: goto label_322b90;
        case 0x322b94u: goto label_322b94;
        case 0x322b98u: goto label_322b98;
        case 0x322b9cu: goto label_322b9c;
        case 0x322ba0u: goto label_322ba0;
        case 0x322ba4u: goto label_322ba4;
        case 0x322ba8u: goto label_322ba8;
        case 0x322bacu: goto label_322bac;
        case 0x322bb0u: goto label_322bb0;
        case 0x322bb4u: goto label_322bb4;
        case 0x322bb8u: goto label_322bb8;
        case 0x322bbcu: goto label_322bbc;
        case 0x322bc0u: goto label_322bc0;
        case 0x322bc4u: goto label_322bc4;
        case 0x322bc8u: goto label_322bc8;
        case 0x322bccu: goto label_322bcc;
        case 0x322bd0u: goto label_322bd0;
        case 0x322bd4u: goto label_322bd4;
        case 0x322bd8u: goto label_322bd8;
        case 0x322bdcu: goto label_322bdc;
        case 0x322be0u: goto label_322be0;
        case 0x322be4u: goto label_322be4;
        case 0x322be8u: goto label_322be8;
        case 0x322becu: goto label_322bec;
        case 0x322bf0u: goto label_322bf0;
        case 0x322bf4u: goto label_322bf4;
        case 0x322bf8u: goto label_322bf8;
        case 0x322bfcu: goto label_322bfc;
        case 0x322c00u: goto label_322c00;
        case 0x322c04u: goto label_322c04;
        case 0x322c08u: goto label_322c08;
        case 0x322c0cu: goto label_322c0c;
        case 0x322c10u: goto label_322c10;
        case 0x322c14u: goto label_322c14;
        case 0x322c18u: goto label_322c18;
        case 0x322c1cu: goto label_322c1c;
        case 0x322c20u: goto label_322c20;
        case 0x322c24u: goto label_322c24;
        case 0x322c28u: goto label_322c28;
        case 0x322c2cu: goto label_322c2c;
        case 0x322c30u: goto label_322c30;
        case 0x322c34u: goto label_322c34;
        case 0x322c38u: goto label_322c38;
        case 0x322c3cu: goto label_322c3c;
        case 0x322c40u: goto label_322c40;
        case 0x322c44u: goto label_322c44;
        case 0x322c48u: goto label_322c48;
        case 0x322c4cu: goto label_322c4c;
        case 0x322c50u: goto label_322c50;
        case 0x322c54u: goto label_322c54;
        case 0x322c58u: goto label_322c58;
        case 0x322c5cu: goto label_322c5c;
        case 0x322c60u: goto label_322c60;
        case 0x322c64u: goto label_322c64;
        case 0x322c68u: goto label_322c68;
        case 0x322c6cu: goto label_322c6c;
        case 0x322c70u: goto label_322c70;
        case 0x322c74u: goto label_322c74;
        case 0x322c78u: goto label_322c78;
        case 0x322c7cu: goto label_322c7c;
        case 0x322c80u: goto label_322c80;
        case 0x322c84u: goto label_322c84;
        case 0x322c88u: goto label_322c88;
        case 0x322c8cu: goto label_322c8c;
        case 0x322c90u: goto label_322c90;
        case 0x322c94u: goto label_322c94;
        default: break;
    }

    ctx->pc = 0x322ac0u;

label_322ac0:
    // 0x322ac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x322ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_322ac4:
    // 0x322ac4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x322ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_322ac8:
    // 0x322ac8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x322ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_322acc:
    // 0x322acc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x322accu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_322ad0:
    // 0x322ad0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x322ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_322ad4:
    // 0x322ad4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x322ad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322ad8:
    // 0x322ad8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x322ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_322adc:
    // 0x322adc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x322adcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ae0:
    // 0x322ae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x322ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_322ae4:
    // 0x322ae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x322ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ae8:
    // 0x322ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_322aec:
    // 0x322aec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x322aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_322af0:
    // 0x322af0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x322af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_322af4:
    // 0x322af4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x322af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_322af8:
    // 0x322af8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322afc:
    // 0x322afc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_322b00:
    if (ctx->pc == 0x322B00u) {
        ctx->pc = 0x322B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AFCu;
        // 0x322b00: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B04u;
        goto label_322b04;
    }
    ctx->pc = 0x322AFCu;
    {
        const bool branch_taken_0x322afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AFCu;
        // 0x322b00: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322afc) {
            ctx->pc = 0x322B0Cu;
            goto label_322b0c;
        }
    }
    ctx->pc = 0x322B04u;
label_322b04:
    // 0x322b04: 0x1000005a  b           . + 4 + (0x5A << 2)
label_322b08:
    if (ctx->pc == 0x322B08u) {
        ctx->pc = 0x322B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B04u;
        // 0x322b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B0Cu;
        goto label_322b0c;
    }
    ctx->pc = 0x322B04u;
    {
        const bool branch_taken_0x322b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B04u;
        // 0x322b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b04) {
            ctx->pc = 0x322C70u;
            goto label_322c70;
        }
    }
    ctx->pc = 0x322B0Cu;
label_322b0c:
    // 0x322b0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x322b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322b10:
    // 0x322b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322b14:
    // 0x322b14: 0xc07defc  jal         func_1F7BF0
label_322b18:
    if (ctx->pc == 0x322B18u) {
        ctx->pc = 0x322B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B14u;
        // 0x322b18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B1Cu;
        goto label_322b1c;
    }
    ctx->pc = 0x322B14u;
    SET_GPR_U32(ctx, 31, 0x322B1Cu);
    ctx->pc = 0x322B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B14u;
    // 0x322b18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x322B14u, 0x322B1Cu)) {
        return;
    }
    ctx->pc = 0x322B1Cu;
label_322b1c:
    // 0x322b1c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_322b20:
    if (ctx->pc == 0x322B20u) {
        ctx->pc = 0x322B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B1Cu;
        // 0x322b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B24u;
        goto label_322b24;
    }
    ctx->pc = 0x322B1Cu;
    {
        const bool branch_taken_0x322b1c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x322B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B1Cu;
        // 0x322b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b1c) {
            ctx->pc = 0x322B50u;
            goto label_322b50;
        }
    }
    ctx->pc = 0x322B24u;
label_322b24:
    // 0x322b24: 0xc07dd98  jal         func_1F7660
label_322b28:
    if (ctx->pc == 0x322B28u) {
        ctx->pc = 0x322B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B24u;
        // 0x322b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B2Cu;
        goto label_322b2c;
    }
    ctx->pc = 0x322B24u;
    SET_GPR_U32(ctx, 31, 0x322B2Cu);
    ctx->pc = 0x322B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B24u;
    // 0x322b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x322B24u, 0x322B2Cu)) {
        return;
    }
    ctx->pc = 0x322B2Cu;
label_322b2c:
    // 0x322b2c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x322b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322b30:
    // 0x322b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322b34:
    // 0x322b34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x322b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_322b38:
    // 0x322b38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322b3c:
    // 0x322b3c: 0x2a0f809  jalr        $s5
label_322b40:
    if (ctx->pc == 0x322B40u) {
        ctx->pc = 0x322B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B3Cu;
        // 0x322b40: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B44u;
        goto label_322b44;
    }
    ctx->pc = 0x322B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x322B44u);
        ctx->pc = 0x322B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B3Cu;
        // 0x322b40: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322B3Cu, 0x322B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322B44u;
label_322b44:
    // 0x322b44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x322b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322b48:
    // 0x322b48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x322b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_322b4c:
    // 0x322b4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x322b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_322b50:
    // 0x322b50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x322b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_322b54:
    // 0x322b54: 0xdc2525a8  ld          $a1, 0x25A8($at)
    ctx->pc = 0x322b54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9640)));
label_322b58:
    // 0x322b58: 0xc07defc  jal         func_1F7BF0
label_322b5c:
    if (ctx->pc == 0x322B5Cu) {
        ctx->pc = 0x322B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B58u;
        // 0x322b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B60u;
        goto label_322b60;
    }
    ctx->pc = 0x322B58u;
    SET_GPR_U32(ctx, 31, 0x322B60u);
    ctx->pc = 0x322B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B58u;
    // 0x322b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x322B58u, 0x322B60u)) {
        return;
    }
    ctx->pc = 0x322B60u;
label_322b60:
    // 0x322b60: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_322b64:
    if (ctx->pc == 0x322B64u) {
        ctx->pc = 0x322B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B60u;
        // 0x322b64: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B68u;
        goto label_322b68;
    }
    ctx->pc = 0x322B60u;
    {
        const bool branch_taken_0x322b60 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x322B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B60u;
        // 0x322b64: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b60) {
            ctx->pc = 0x322BA4u;
            goto label_322ba4;
        }
    }
    ctx->pc = 0x322B68u;
label_322b68:
    // 0x322b68: 0x10000006  b           . + 4 + (0x6 << 2)
label_322b6c:
    if (ctx->pc == 0x322B6Cu) {
        ctx->pc = 0x322B70u;
        goto label_322b70;
    }
    ctx->pc = 0x322B68u;
    {
        const bool branch_taken_0x322b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b68) {
            ctx->pc = 0x322B84u;
            goto label_322b84;
        }
    }
    ctx->pc = 0x322B70u;
label_322b70:
    // 0x322b70: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x322b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_322b74:
    // 0x322b74: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x322b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_322b78:
    // 0x322b78: 0xc07ddb2  jal         func_1F76C8
label_322b7c:
    if (ctx->pc == 0x322B7Cu) {
        ctx->pc = 0x322B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B78u;
        // 0x322b7c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B80u;
        goto label_322b80;
    }
    ctx->pc = 0x322B78u;
    SET_GPR_U32(ctx, 31, 0x322B80u);
    ctx->pc = 0x322B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B78u;
    // 0x322b7c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x322B78u, 0x322B80u)) {
        return;
    }
    ctx->pc = 0x322B80u;
label_322b80:
    // 0x322b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322b84:
    // 0x322b84: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x322b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_322b88:
    // 0x322b88: 0xdc2525b0  ld          $a1, 0x25B0($at)
    ctx->pc = 0x322b88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9648)));
label_322b8c:
    // 0x322b8c: 0xc07defc  jal         func_1F7BF0
label_322b90:
    if (ctx->pc == 0x322B90u) {
        ctx->pc = 0x322B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B8Cu;
        // 0x322b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B94u;
        goto label_322b94;
    }
    ctx->pc = 0x322B8Cu;
    SET_GPR_U32(ctx, 31, 0x322B94u);
    ctx->pc = 0x322B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B8Cu;
    // 0x322b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x322B8Cu, 0x322B94u)) {
        return;
    }
    ctx->pc = 0x322B94u;
label_322b94:
    // 0x322b94: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_322b98:
    if (ctx->pc == 0x322B98u) {
        ctx->pc = 0x322B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B94u;
        // 0x322b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B9Cu;
        goto label_322b9c;
    }
    ctx->pc = 0x322B94u;
    {
        const bool branch_taken_0x322b94 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x322B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B94u;
        // 0x322b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b94) {
            ctx->pc = 0x322B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322b70;
        }
    }
    ctx->pc = 0x322B9Cu;
label_322b9c:
    // 0x322b9c: 0x10000015  b           . + 4 + (0x15 << 2)
label_322ba0:
    if (ctx->pc == 0x322BA0u) {
        ctx->pc = 0x322BA4u;
        goto label_322ba4;
    }
    ctx->pc = 0x322B9Cu;
    {
        const bool branch_taken_0x322b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b9c) {
            ctx->pc = 0x322BF4u;
            goto label_322bf4;
        }
    }
    ctx->pc = 0x322BA4u;
label_322ba4:
    // 0x322ba4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x322ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_322ba8:
    // 0x322ba8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x322ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_322bac:
    // 0x322bac: 0xc07defc  jal         func_1F7BF0
label_322bb0:
    if (ctx->pc == 0x322BB0u) {
        ctx->pc = 0x322BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BACu;
        // 0x322bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BB4u;
        goto label_322bb4;
    }
    ctx->pc = 0x322BACu;
    SET_GPR_U32(ctx, 31, 0x322BB4u);
    ctx->pc = 0x322BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322BACu;
    // 0x322bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x322BACu, 0x322BB4u)) {
        return;
    }
    ctx->pc = 0x322BB4u;
label_322bb4:
    // 0x322bb4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_322bb8:
    if (ctx->pc == 0x322BB8u) {
        ctx->pc = 0x322BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BB4u;
        // 0x322bb8: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BBCu;
        goto label_322bbc;
    }
    ctx->pc = 0x322BB4u;
    {
        const bool branch_taken_0x322bb4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x322BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BB4u;
        // 0x322bb8: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322bb4) {
            ctx->pc = 0x322BF4u;
            goto label_322bf4;
        }
    }
    ctx->pc = 0x322BBCu;
label_322bbc:
    // 0x322bbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_322bc0:
    if (ctx->pc == 0x322BC0u) {
        ctx->pc = 0x322BC4u;
        goto label_322bc4;
    }
    ctx->pc = 0x322BBCu;
    {
        const bool branch_taken_0x322bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322bbc) {
            ctx->pc = 0x322BDCu;
            goto label_322bdc;
        }
    }
    ctx->pc = 0x322BC4u;
label_322bc4:
    // 0x322bc4: 0x0  nop
    ctx->pc = 0x322bc4u;
    // NOP
label_322bc8:
    // 0x322bc8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x322bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_322bcc:
    // 0x322bcc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x322bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_322bd0:
    // 0x322bd0: 0xc07de5c  jal         func_1F7970
label_322bd4:
    if (ctx->pc == 0x322BD4u) {
        ctx->pc = 0x322BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BD0u;
        // 0x322bd4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BD8u;
        goto label_322bd8;
    }
    ctx->pc = 0x322BD0u;
    SET_GPR_U32(ctx, 31, 0x322BD8u);
    ctx->pc = 0x322BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322BD0u;
    // 0x322bd4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x322BD0u, 0x322BD8u)) {
        return;
    }
    ctx->pc = 0x322BD8u;
label_322bd8:
    // 0x322bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322bdc:
    // 0x322bdc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x322bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_322be0:
    // 0x322be0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x322be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_322be4:
    // 0x322be4: 0xc07defc  jal         func_1F7BF0
label_322be8:
    if (ctx->pc == 0x322BE8u) {
        ctx->pc = 0x322BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BE4u;
        // 0x322be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BECu;
        goto label_322bec;
    }
    ctx->pc = 0x322BE4u;
    SET_GPR_U32(ctx, 31, 0x322BECu);
    ctx->pc = 0x322BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322BE4u;
    // 0x322be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x322BE4u, 0x322BECu)) {
        return;
    }
    ctx->pc = 0x322BECu;
label_322bec:
    // 0x322bec: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_322bf0:
    if (ctx->pc == 0x322BF0u) {
        ctx->pc = 0x322BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BECu;
        // 0x322bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BF4u;
        goto label_322bf4;
    }
    ctx->pc = 0x322BECu;
    {
        const bool branch_taken_0x322bec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x322BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BECu;
        // 0x322bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322bec) {
            ctx->pc = 0x322BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322bc8;
        }
    }
    ctx->pc = 0x322BF4u;
label_322bf4:
    // 0x322bf4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x322bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_322bf8:
    // 0x322bf8: 0xdc2525b8  ld          $a1, 0x25B8($at)
    ctx->pc = 0x322bf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9656)));
label_322bfc:
    // 0x322bfc: 0xc07ddb2  jal         func_1F76C8
label_322c00:
    if (ctx->pc == 0x322C00u) {
        ctx->pc = 0x322C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BFCu;
        // 0x322c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C04u;
        goto label_322c04;
    }
    ctx->pc = 0x322BFCu;
    SET_GPR_U32(ctx, 31, 0x322C04u);
    ctx->pc = 0x322C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322BFCu;
    // 0x322c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x322BFCu, 0x322C04u)) {
        return;
    }
    ctx->pc = 0x322C04u;
label_322c04:
    // 0x322c04: 0xc0ca49c  jal         func_329270
label_322c08:
    if (ctx->pc == 0x322C08u) {
        ctx->pc = 0x322C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C04u;
        // 0x322c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C0Cu;
        goto label_322c0c;
    }
    ctx->pc = 0x322C04u;
    SET_GPR_U32(ctx, 31, 0x322C0Cu);
    ctx->pc = 0x322C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C04u;
    // 0x322c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329270u, 0x322C04u, 0x322C0Cu)) {
        return;
    }
    ctx->pc = 0x322C0Cu;
label_322c0c:
    // 0x322c0c: 0xc0c8a8c  jal         func_322A30
label_322c10:
    if (ctx->pc == 0x322C10u) {
        ctx->pc = 0x322C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C0Cu;
        // 0x322c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C14u;
        goto label_322c14;
    }
    ctx->pc = 0x322C0Cu;
    SET_GPR_U32(ctx, 31, 0x322C14u);
    ctx->pc = 0x322C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C0Cu;
    // 0x322c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322A30u, 0x322C0Cu, 0x322C14u)) {
        return;
    }
    ctx->pc = 0x322C14u;
label_322c14:
    // 0x322c14: 0x26672590  addiu       $a3, $s3, 0x2590
    ctx->pc = 0x322c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 9616));
label_322c18:
    // 0x322c18: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x322c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322c1c:
    // 0x322c1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x322c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_322c20:
    // 0x322c20: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x322c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_322c24:
    // 0x322c24: 0xc0c8e96  jal         func_323A58
label_322c28:
    if (ctx->pc == 0x322C28u) {
        ctx->pc = 0x322C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C24u;
        // 0x322c28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C2Cu;
        goto label_322c2c;
    }
    ctx->pc = 0x322C24u;
    SET_GPR_U32(ctx, 31, 0x322C2Cu);
    ctx->pc = 0x322C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C24u;
    // 0x322c28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323A58u, 0x322C24u, 0x322C2Cu)) {
        return;
    }
    ctx->pc = 0x322C2Cu;
label_322c2c:
    // 0x322c2c: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_322c30:
    if (ctx->pc == 0x322C30u) {
        ctx->pc = 0x322C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C2Cu;
        // 0x322c30: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C34u;
        goto label_322c34;
    }
    ctx->pc = 0x322C2Cu;
    {
        const bool branch_taken_0x322c2c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x322C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C2Cu;
        // 0x322c30: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c2c) {
            ctx->pc = 0x322C4Cu;
            goto label_322c4c;
        }
    }
    ctx->pc = 0x322C34u;
label_322c34:
    // 0x322c34: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x322c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_322c38:
    // 0x322c38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x322c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_322c3c:
    // 0x322c3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x322c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_322c40:
    // 0x322c40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x322c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322c44:
    // 0x322c44: 0x10000006  b           . + 4 + (0x6 << 2)
label_322c48:
    if (ctx->pc == 0x322C48u) {
        ctx->pc = 0x322C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C44u;
        // 0x322c48: 0x24e72598  addiu       $a3, $a3, 0x2598 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C4Cu;
        goto label_322c4c;
    }
    ctx->pc = 0x322C44u;
    {
        const bool branch_taken_0x322c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C44u;
        // 0x322c48: 0x24e72598  addiu       $a3, $a3, 0x2598 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c44) {
            ctx->pc = 0x322C60u;
            goto label_322c60;
        }
    }
    ctx->pc = 0x322C4Cu;
label_322c4c:
    // 0x322c4c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x322c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_322c50:
    // 0x322c50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x322c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_322c54:
    // 0x322c54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x322c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_322c58:
    // 0x322c58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x322c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322c5c:
    // 0x322c5c: 0x24e725a0  addiu       $a3, $a3, 0x25A0
    ctx->pc = 0x322c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9632));
label_322c60:
    // 0x322c60: 0xc0c8e96  jal         func_323A58
label_322c64:
    if (ctx->pc == 0x322C64u) {
        ctx->pc = 0x322C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C60u;
        // 0x322c64: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C68u;
        goto label_322c68;
    }
    ctx->pc = 0x322C60u;
    SET_GPR_U32(ctx, 31, 0x322C68u);
    ctx->pc = 0x322C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C60u;
    // 0x322c64: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323A58u, 0x322C60u, 0x322C68u)) {
        return;
    }
    ctx->pc = 0x322C68u;
label_322c68:
    // 0x322c68: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x322c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_322c6c:
    // 0x322c6c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x322c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_322c70:
    // 0x322c70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x322c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_322c74:
    // 0x322c74: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x322c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_322c78:
    // 0x322c78: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x322c78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_322c7c:
    // 0x322c7c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x322c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_322c80:
    // 0x322c80: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x322c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_322c84:
    // 0x322c84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x322c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_322c88:
    // 0x322c88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x322c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_322c8c:
    // 0x322c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322c90:
    // 0x322c90: 0x3e00008  jr          $ra
label_322c94:
    if (ctx->pc == 0x322C94u) {
        ctx->pc = 0x322C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C90u;
        // 0x322c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C98u;
        goto label_fallthrough_0x322c90;
    }
    ctx->pc = 0x322C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C90u;
        // 0x322c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x322c90:
    ctx->pc = 0x322C98u;
}
