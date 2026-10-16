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

// Function: sub_001C4F48
// Address: 0x1c4f48 - 0x1c5008
void sub_001C4F48_0x1c4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4F48_0x1c4f48");
#endif

    switch (ctx->pc) {
        case 0x1c4f48u: goto label_1c4f48;
        case 0x1c4f4cu: goto label_1c4f4c;
        case 0x1c4f50u: goto label_1c4f50;
        case 0x1c4f54u: goto label_1c4f54;
        case 0x1c4f58u: goto label_1c4f58;
        case 0x1c4f5cu: goto label_1c4f5c;
        case 0x1c4f60u: goto label_1c4f60;
        case 0x1c4f64u: goto label_1c4f64;
        case 0x1c4f68u: goto label_1c4f68;
        case 0x1c4f6cu: goto label_1c4f6c;
        case 0x1c4f70u: goto label_1c4f70;
        case 0x1c4f74u: goto label_1c4f74;
        case 0x1c4f78u: goto label_1c4f78;
        case 0x1c4f7cu: goto label_1c4f7c;
        case 0x1c4f80u: goto label_1c4f80;
        case 0x1c4f84u: goto label_1c4f84;
        case 0x1c4f88u: goto label_1c4f88;
        case 0x1c4f8cu: goto label_1c4f8c;
        case 0x1c4f90u: goto label_1c4f90;
        case 0x1c4f94u: goto label_1c4f94;
        case 0x1c4f98u: goto label_1c4f98;
        case 0x1c4f9cu: goto label_1c4f9c;
        case 0x1c4fa0u: goto label_1c4fa0;
        case 0x1c4fa4u: goto label_1c4fa4;
        case 0x1c4fa8u: goto label_1c4fa8;
        case 0x1c4facu: goto label_1c4fac;
        case 0x1c4fb0u: goto label_1c4fb0;
        case 0x1c4fb4u: goto label_1c4fb4;
        case 0x1c4fb8u: goto label_1c4fb8;
        case 0x1c4fbcu: goto label_1c4fbc;
        case 0x1c4fc0u: goto label_1c4fc0;
        case 0x1c4fc4u: goto label_1c4fc4;
        case 0x1c4fc8u: goto label_1c4fc8;
        case 0x1c4fccu: goto label_1c4fcc;
        case 0x1c4fd0u: goto label_1c4fd0;
        case 0x1c4fd4u: goto label_1c4fd4;
        case 0x1c4fd8u: goto label_1c4fd8;
        case 0x1c4fdcu: goto label_1c4fdc;
        case 0x1c4fe0u: goto label_1c4fe0;
        case 0x1c4fe4u: goto label_1c4fe4;
        case 0x1c4fe8u: goto label_1c4fe8;
        case 0x1c4fecu: goto label_1c4fec;
        case 0x1c4ff0u: goto label_1c4ff0;
        case 0x1c4ff4u: goto label_1c4ff4;
        case 0x1c4ff8u: goto label_1c4ff8;
        case 0x1c4ffcu: goto label_1c4ffc;
        case 0x1c5000u: goto label_1c5000;
        case 0x1c5004u: goto label_1c5004;
        default: break;
    }

    ctx->pc = 0x1c4f48u;

label_1c4f48:
    // 0x1c4f48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c4f4c:
    // 0x1c4f4c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c4f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4f50:
    // 0x1c4f50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c4f54:
    // 0x1c4f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f58:
    // 0x1c4f58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c4f5c:
    // 0x1c4f5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1c4f60:
    // 0x1c4f60: 0x26110304  addiu       $s1, $s0, 0x304
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
label_1c4f64:
    // 0x1c4f64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c4f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f68:
    // 0x1c4f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c4f6c:
    // 0x1c4f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f70:
    // 0x1c4f70: 0xc0c493d  jal         func_3124F4
label_1c4f74:
    if (ctx->pc == 0x1C4F74u) {
        ctx->pc = 0x1C4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F70u;
        // 0x1c4f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F78u;
        goto label_1c4f78;
    }
    ctx->pc = 0x1C4F70u;
    SET_GPR_U32(ctx, 31, 0x1C4F78u);
    ctx->pc = 0x1C4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F70u;
    // 0x1c4f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C4F70u, 0x1C4F78u)) {
        return;
    }
    ctx->pc = 0x1C4F78u;
label_1c4f78:
    // 0x1c4f78: 0x8e0302e4  lw          $v1, 0x2E4($s0)
    ctx->pc = 0x1c4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_1c4f7c:
    // 0x1c4f7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1c4f80:
    if (ctx->pc == 0x1C4F80u) {
        ctx->pc = 0x1C4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F7Cu;
        // 0x1c4f80: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F84u;
        goto label_1c4f84;
    }
    ctx->pc = 0x1C4F7Cu;
    {
        const bool branch_taken_0x1c4f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F7Cu;
        // 0x1c4f80: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f7c) {
            ctx->pc = 0x1C4FB0u;
            goto label_1c4fb0;
        }
    }
    ctx->pc = 0x1C4F84u;
label_1c4f84:
    // 0x1c4f84: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1c4f88:
    if (ctx->pc == 0x1C4F88u) {
        ctx->pc = 0x1C4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F84u;
        // 0x1c4f88: 0x2445e7f8  addiu       $a1, $v0, -0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F8Cu;
        goto label_1c4f8c;
    }
    ctx->pc = 0x1C4F84u;
    {
        const bool branch_taken_0x1c4f84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F84u;
        // 0x1c4f88: 0x2445e7f8  addiu       $a1, $v0, -0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f84) {
            ctx->pc = 0x1C4F94u;
            goto label_1c4f94;
        }
    }
    ctx->pc = 0x1C4F8Cu;
label_1c4f8c:
    // 0x1c4f8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c4f90:
    if (ctx->pc == 0x1C4F90u) {
        ctx->pc = 0x1C4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F8Cu;
        // 0x1c4f90: 0x8e0702f4  lw          $a3, 0x2F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F94u;
        goto label_1c4f94;
    }
    ctx->pc = 0x1C4F8Cu;
    {
        const bool branch_taken_0x1c4f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F8Cu;
        // 0x1c4f90: 0x8e0702f4  lw          $a3, 0x2F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f8c) {
            ctx->pc = 0x1C4F98u;
            goto label_1c4f98;
        }
    }
    ctx->pc = 0x1C4F94u;
label_1c4f94:
    // 0x1c4f94: 0x8e0702f8  lw          $a3, 0x2F8($s0)
    ctx->pc = 0x1c4f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_1c4f98:
    // 0x1c4f98: 0x8e0602fc  lw          $a2, 0x2FC($s0)
    ctx->pc = 0x1c4f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
label_1c4f9c:
    // 0x1c4f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4fa0:
    // 0x1c4fa0: 0xc0c5380  jal         func_314E00
label_1c4fa4:
    if (ctx->pc == 0x1C4FA4u) {
        ctx->pc = 0x1C4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA0u;
        // 0x1c4fa4: 0x8e080300  lw          $t0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FA8u;
        goto label_1c4fa8;
    }
    ctx->pc = 0x1C4FA0u;
    SET_GPR_U32(ctx, 31, 0x1C4FA8u);
    ctx->pc = 0x1C4FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FA0u;
    // 0x1c4fa4: 0x8e080300  lw          $t0, 0x300($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1C4FA0u, 0x1C4FA8u)) {
        return;
    }
    ctx->pc = 0x1C4FA8u;
label_1c4fa8:
    // 0x1c4fa8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c4fac:
    if (ctx->pc == 0x1C4FACu) {
        ctx->pc = 0x1C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA8u;
        // 0x1c4fac: 0x8e0602d0  lw          $a2, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FB0u;
        goto label_1c4fb0;
    }
    ctx->pc = 0x1C4FA8u;
    {
        const bool branch_taken_0x1c4fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA8u;
        // 0x1c4fac: 0x8e0602d0  lw          $a2, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa8) {
            ctx->pc = 0x1C4FD4u;
            goto label_1c4fd4;
        }
    }
    ctx->pc = 0x1C4FB0u;
label_1c4fb0:
    // 0x1c4fb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1c4fb4:
    // 0x1c4fb4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1c4fb8:
    if (ctx->pc == 0x1C4FB8u) {
        ctx->pc = 0x1C4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FB4u;
        // 0x1c4fb8: 0x2445e810  addiu       $a1, $v0, -0x17F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FBCu;
        goto label_1c4fbc;
    }
    ctx->pc = 0x1C4FB4u;
    {
        const bool branch_taken_0x1c4fb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FB4u;
        // 0x1c4fb8: 0x2445e810  addiu       $a1, $v0, -0x17F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fb4) {
            ctx->pc = 0x1C4FC4u;
            goto label_1c4fc4;
        }
    }
    ctx->pc = 0x1C4FBCu;
label_1c4fbc:
    // 0x1c4fbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c4fc0:
    if (ctx->pc == 0x1C4FC0u) {
        ctx->pc = 0x1C4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FBCu;
        // 0x1c4fc0: 0x8e0602f4  lw          $a2, 0x2F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FC4u;
        goto label_1c4fc4;
    }
    ctx->pc = 0x1C4FBCu;
    {
        const bool branch_taken_0x1c4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FBCu;
        // 0x1c4fc0: 0x8e0602f4  lw          $a2, 0x2F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fbc) {
            ctx->pc = 0x1C4FC8u;
            goto label_1c4fc8;
        }
    }
    ctx->pc = 0x1C4FC4u;
label_1c4fc4:
    // 0x1c4fc4: 0x8e0602f8  lw          $a2, 0x2F8($s0)
    ctx->pc = 0x1c4fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_1c4fc8:
    // 0x1c4fc8: 0xc0c5380  jal         func_314E00
label_1c4fcc:
    if (ctx->pc == 0x1C4FCCu) {
        ctx->pc = 0x1C4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FC8u;
        // 0x1c4fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FD0u;
        goto label_1c4fd0;
    }
    ctx->pc = 0x1C4FC8u;
    SET_GPR_U32(ctx, 31, 0x1C4FD0u);
    ctx->pc = 0x1C4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FC8u;
    // 0x1c4fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1C4FC8u, 0x1C4FD0u)) {
        return;
    }
    ctx->pc = 0x1C4FD0u;
label_1c4fd0:
    // 0x1c4fd0: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x1c4fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_1c4fd4:
    // 0x1c4fd4: 0x26050304  addiu       $a1, $s0, 0x304
    ctx->pc = 0x1c4fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
label_1c4fd8:
    // 0x1c4fd8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c4fdc:
    // 0x1c4fdc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1c4fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1c4fe0:
    // 0x1c4fe0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1c4fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1c4fe4:
    // 0x1c4fe4: 0x60f809  jalr        $v1
label_1c4fe8:
    if (ctx->pc == 0x1C4FE8u) {
        ctx->pc = 0x1C4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FE4u;
        // 0x1c4fe8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FECu;
        goto label_1c4fec;
    }
    ctx->pc = 0x1C4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C4FECu);
        ctx->pc = 0x1C4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FE4u;
        // 0x1c4fe8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FE4u, 0x1C4FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4FECu;
label_1c4fec:
    // 0x1c4fec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c4fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4ff0:
    // 0x1c4ff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4ff4:
    // 0x1c4ff4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c4ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4ff8:
    // 0x1c4ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4ffc:
    // 0x1c4ffc: 0x3e00008  jr          $ra
label_1c5000:
    if (ctx->pc == 0x1C5000u) {
        ctx->pc = 0x1C5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FFCu;
        // 0x1c5000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5004u;
        goto label_1c5004;
    }
    ctx->pc = 0x1C4FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FFCu;
        // 0x1c5000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5004u;
label_1c5004:
    // 0x1c5004: 0x0  nop
    ctx->pc = 0x1c5004u;
    // NOP
    ctx->pc = 0x1c5008u;
}
