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

// Function: sub_00275F30
// Address: 0x275f30 - 0x276040
void sub_00275F30_0x275f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275F30_0x275f30");
#endif

    switch (ctx->pc) {
        case 0x275fc0u: goto label_275fc0;
        case 0x276020u: goto label_276020;
        case 0x27602cu: goto label_27602c;
        default: break;
    }

    ctx->pc = 0x275f30u;

    // 0x275f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275f34: 0x8f8287b4  lw          $v0, -0x784C($gp)
    ctx->pc = 0x275f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
    // 0x275f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275f3c: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x275F3Cu;
    {
        const bool branch_taken_0x275f3c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x275F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F3Cu;
        // 0x275f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f3c) {
            ctx->pc = 0x276010u;
            goto label_276010;
        }
    }
    ctx->pc = 0x275F44u;
    // 0x275f44: 0x3c090070  lui         $t1, 0x70
    ctx->pc = 0x275f44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)112 << 16));
    // 0x275f48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x275f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f4c: 0x25265668  addiu       $a2, $t1, 0x5668
    ctx->pc = 0x275f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 22120));
    // 0x275f50: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x275f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x275f54: 0x19000013  blez        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x275F54u;
    {
        const bool branch_taken_0x275f54 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x275F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F54u;
        // 0x275f58: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f54) {
            ctx->pc = 0x275FA4u;
            goto label_275fa4;
        }
    }
    ctx->pc = 0x275F5Cu;
    // 0x275f5c: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x275F5Cu;
    {
        const bool branch_taken_0x275f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f5c) {
            ctx->pc = 0x275F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F5Cu;
            // 0x275f60: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FC4u;
            goto label_275fc4;
        }
    }
    ctx->pc = 0x275F64u;
    // 0x275f64: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x275f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275f68: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x275F68u;
    {
        const bool branch_taken_0x275f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275f68) {
            ctx->pc = 0x275F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F68u;
            // 0x275f6c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FA8u;
            goto label_275fa8;
        }
    }
    ctx->pc = 0x275F70u;
    // 0x275f70: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x275f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x275f74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x275F74u;
    {
        const bool branch_taken_0x275f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275f74) {
            ctx->pc = 0x275F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275F74u;
            // 0x275f78: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275F94u;
            goto label_275f94;
        }
    }
    ctx->pc = 0x275F7Cu;
    // 0x275f7c: 0x8d225668  lw          $v0, 0x5668($t1)
    ctx->pc = 0x275f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 22120)));
    // 0x275f80: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x275F80u;
    {
        const bool branch_taken_0x275f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x275F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F80u;
        // 0x275f84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f80) {
            ctx->pc = 0x275FCCu;
            goto label_275fcc;
        }
    }
    ctx->pc = 0x275F88u;
    // 0x275f88: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x275f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x275f8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x275f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x275f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_275f94:
    // 0x275f94: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x275F94u;
    {
        const bool branch_taken_0x275f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x275F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F94u;
        // 0x275f98: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f94) {
            ctx->pc = 0x275FCCu;
            goto label_275fcc;
        }
    }
    ctx->pc = 0x275F9Cu;
    // 0x275f9c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x275f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x275fa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x275fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_275fa4:
    // 0x275fa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x275fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_275fa8:
    // 0x275fa8: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x275FA8u;
    {
        const bool branch_taken_0x275fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x275FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FA8u;
        // 0x275fac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fa8) {
            ctx->pc = 0x275FCCu;
            goto label_275fcc;
        }
    }
    ctx->pc = 0x275FB0u;
    // 0x275fb0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x275fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x275fb4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x275fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x275fb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x275FB8u;
    {
        const bool branch_taken_0x275fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FB8u;
        // 0x275fbc: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fb8) {
            ctx->pc = 0x276010u;
            goto label_276010;
        }
    }
    ctx->pc = 0x275FC0u;
label_275fc0:
    // 0x275fc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_275fc4:
    // 0x275fc4: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275FC4u;
    {
        const bool branch_taken_0x275fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x275fc4) {
            ctx->pc = 0x275FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275FC4u;
            // 0x275fc8: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275FD4u;
            goto label_275fd4;
        }
    }
    ctx->pc = 0x275FCCu;
label_275fcc:
    // 0x275fcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x275FCCu;
    {
        const bool branch_taken_0x275fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FCCu;
        // 0x275fd0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fcc) {
            ctx->pc = 0x276030u;
            goto label_276030;
        }
    }
    ctx->pc = 0x275FD4u;
label_275fd4:
    // 0x275fd4: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275FD4u;
    {
        const bool branch_taken_0x275fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x275FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FD4u;
        // 0x275fd8: 0x24c30030  addiu       $v1, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fd4) {
            ctx->pc = 0x275FF4u;
            goto label_275ff4;
        }
    }
    ctx->pc = 0x275FDCu;
    // 0x275fdc: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x275fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x275fe0: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275FE0u;
    {
        const bool branch_taken_0x275fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x275FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FE0u;
        // 0x275fe4: 0x24c30060  addiu       $v1, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fe0) {
            ctx->pc = 0x275FF4u;
            goto label_275ff4;
        }
    }
    ctx->pc = 0x275FE8u;
    // 0x275fe8: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x275fec: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275FECu;
    {
        const bool branch_taken_0x275fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x275FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FECu;
        // 0x275ff0: 0x24c30090  addiu       $v1, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275fec) {
            ctx->pc = 0x275FFCu;
            goto label_275ffc;
        }
    }
    ctx->pc = 0x275FF4u;
label_275ff4:
    // 0x275ff4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x275FF4u;
    {
        const bool branch_taken_0x275ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FF4u;
        // 0x275ff8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ff4) {
            ctx->pc = 0x276030u;
            goto label_276030;
        }
    }
    ctx->pc = 0x275FFCu;
label_275ffc:
    // 0x275ffc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x276000: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x276000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x276004: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x276004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x276008: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x276008u;
    {
        const bool branch_taken_0x276008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276008u;
        // 0x27600c: 0x24c600c0  addiu       $a2, $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276008) {
            ctx->pc = 0x275FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275fc0;
        }
    }
    ctx->pc = 0x276010u;
label_276010:
    // 0x276010: 0x240201b7  addiu       $v0, $zero, 0x1B7
    ctx->pc = 0x276010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x276014: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x276014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276018: 0xc092848  jal         func_24A120
    ctx->pc = 0x276018u;
    SET_GPR_U32(ctx, 31, 0x276020u);
    ctx->pc = 0x27601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276018u;
    // 0x27601c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x276018u, 0x276020u)) {
        return;
    }
    ctx->pc = 0x276020u;
label_276020:
    // 0x276020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276024: 0xc09281a  jal         func_24A068
    ctx->pc = 0x276024u;
    SET_GPR_U32(ctx, 31, 0x27602Cu);
    ctx->pc = 0x276028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276024u;
    // 0x276028: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x276024u, 0x27602Cu)) {
        return;
    }
    ctx->pc = 0x27602Cu;
label_27602c:
    // 0x27602c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27602cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276030:
    // 0x276030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276034: 0x3e00008  jr          $ra
    ctx->pc = 0x276034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276034u;
        // 0x276038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27603Cu;
    // 0x27603c: 0x0  nop
    ctx->pc = 0x27603cu;
    // NOP
    ctx->pc = 0x276040u;
}
