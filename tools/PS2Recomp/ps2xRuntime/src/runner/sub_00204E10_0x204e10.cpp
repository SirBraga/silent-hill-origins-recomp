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

// Function: sub_00204E10
// Address: 0x204e10 - 0x204fc8
void sub_00204E10_0x204e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204E10_0x204e10");
#endif

    switch (ctx->pc) {
        case 0x204e34u: goto label_204e34;
        case 0x204e84u: goto label_204e84;
        case 0x204e94u: goto label_204e94;
        case 0x204eacu: goto label_204eac;
        case 0x204eb8u: goto label_204eb8;
        case 0x204ed0u: goto label_204ed0;
        case 0x204ee4u: goto label_204ee4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204f08u: goto label_204f08;
        case 0x204f20u: goto label_204f20;
        case 0x204f2cu: goto label_204f2c;
        case 0x204f44u: goto label_204f44;
        case 0x204f58u: goto label_204f58;
        case 0x204f6cu: goto label_204f6c;
        case 0x204f78u: goto label_204f78;
        default: break;
    }

    ctx->pc = 0x204e10u;

    // 0x204e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x204e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x204e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x204e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204e24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204e2c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x204E2Cu;
    SET_GPR_U32(ctx, 31, 0x204E34u);
    ctx->pc = 0x204E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E2Cu;
    // 0x204e30: 0xae260020  sw          $a2, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x204E2Cu, 0x204E34u)) {
        return;
    }
    ctx->pc = 0x204E34u;
label_204e34:
    // 0x204e34: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x204e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204e38: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x204e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x204e3c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x204e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x204e40: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x204E40u;
    {
        const bool branch_taken_0x204e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E40u;
        // 0x204e44: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e40) {
            ctx->pc = 0x204FB4u;
            goto label_204fb4;
        }
    }
    ctx->pc = 0x204E48u;
    // 0x204e48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x204e4c: 0x18600045  blez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x204E4Cu;
    {
        const bool branch_taken_0x204e4c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x204E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E4Cu;
        // 0x204e50: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e4c) {
            ctx->pc = 0x204F64u;
            goto label_204f64;
        }
    }
    ctx->pc = 0x204E54u;
    // 0x204e54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204E54u;
    {
        const bool branch_taken_0x204e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E54u;
        // 0x204e58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e54) {
            ctx->pc = 0x204E70u;
            goto label_204e70;
        }
    }
    ctx->pc = 0x204E5Cu;
    // 0x204e5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204e60: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x204E60u;
    {
        const bool branch_taken_0x204e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E60u;
        // 0x204e64: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e60) {
            ctx->pc = 0x204EF0u;
            goto label_204ef0;
        }
    }
    ctx->pc = 0x204E68u;
    // 0x204e68: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x204E68u;
    {
        const bool branch_taken_0x204e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e68) {
            ctx->pc = 0x204F64u;
            goto label_204f64;
        }
    }
    ctx->pc = 0x204E70u;
label_204e70:
    // 0x204e70: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x204e74: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x204e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204e78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e7c: 0xc0817da  jal         func_205F68
    ctx->pc = 0x204E7Cu;
    SET_GPR_U32(ctx, 31, 0x204E84u);
    ctx->pc = 0x204E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E7Cu;
    // 0x204e80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x204E7Cu, 0x204E84u)) {
        return;
    }
    ctx->pc = 0x204E84u;
label_204e84:
    // 0x204e84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x204e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x204e88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x204e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204e8c: 0xc080924  jal         func_202490
    ctx->pc = 0x204E8Cu;
    SET_GPR_U32(ctx, 31, 0x204E94u);
    ctx->pc = 0x204E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E8Cu;
    // 0x204e90: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x204E8Cu, 0x204E94u)) {
        return;
    }
    ctx->pc = 0x204E94u;
label_204e94:
    // 0x204e94: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x204e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x204e98: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x204e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204e9c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x204e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ea4: 0xc0817da  jal         func_205F68
    ctx->pc = 0x204EA4u;
    SET_GPR_U32(ctx, 31, 0x204EACu);
    ctx->pc = 0x204EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EA4u;
    // 0x204ea8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x204EA4u, 0x204EACu)) {
        return;
    }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x204eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x204eb0: 0xc080924  jal         func_202490
    ctx->pc = 0x204EB0u;
    SET_GPR_U32(ctx, 31, 0x204EB8u);
    ctx->pc = 0x204EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EB0u;
    // 0x204eb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x204EB0u, 0x204EB8u)) {
        return;
    }
    ctx->pc = 0x204EB8u;
label_204eb8:
    // 0x204eb8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x204eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x204ebc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x204ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x204ec0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x204ec4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x204ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204ec8: 0xc093620  jal         func_24D880
    ctx->pc = 0x204EC8u;
    SET_GPR_U32(ctx, 31, 0x204ED0u);
    ctx->pc = 0x204ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EC8u;
    // 0x204ecc: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x204EC8u, 0x204ED0u)) {
        return;
    }
    ctx->pc = 0x204ED0u;
label_204ed0:
    // 0x204ed0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x204ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204ed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204ed8: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x204ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x204edc: 0xc0817da  jal         func_205F68
    ctx->pc = 0x204EDCu;
    SET_GPR_U32(ctx, 31, 0x204EE4u);
    ctx->pc = 0x204EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EDCu;
    // 0x204ee0: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x204EDCu, 0x204EE4u)) {
        return;
    }
    ctx->pc = 0x204EE4u;
label_204ee4:
    // 0x204ee4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204ee8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x204EE8u;
    {
        const bool branch_taken_0x204ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EE8u;
        // 0x204eec: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ee8) {
            ctx->pc = 0x204F64u;
            goto label_204f64;
        }
    }
    ctx->pc = 0x204EF0u;
label_204ef0:
    // 0x204ef0: 0xc093546  jal         func_24D518
    ctx->pc = 0x204EF0u;
    SET_GPR_U32(ctx, 31, 0x204EF8u);
    ctx->pc = 0x204EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204EF0u;
    // 0x204ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x204EF0u, 0x204EF8u)) {
        return;
    }
    ctx->pc = 0x204EF8u;
label_204ef8:
    // 0x204ef8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x204ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x204efc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204f00: 0xc080924  jal         func_202490
    ctx->pc = 0x204F00u;
    SET_GPR_U32(ctx, 31, 0x204F08u);
    ctx->pc = 0x204F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F00u;
    // 0x204f04: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x204F00u, 0x204F08u)) {
        return;
    }
    ctx->pc = 0x204F08u;
label_204f08:
    // 0x204f08: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x204f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f10: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204f14: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x204f18: 0xc093546  jal         func_24D518
    ctx->pc = 0x204F18u;
    SET_GPR_U32(ctx, 31, 0x204F20u);
    ctx->pc = 0x204F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F18u;
    // 0x204f1c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x204F18u, 0x204F20u)) {
        return;
    }
    ctx->pc = 0x204F20u;
label_204f20:
    // 0x204f20: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x204f24: 0xc080924  jal         func_202490
    ctx->pc = 0x204F24u;
    SET_GPR_U32(ctx, 31, 0x204F2Cu);
    ctx->pc = 0x204F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F24u;
    // 0x204f28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x204F24u, 0x204F2Cu)) {
        return;
    }
    ctx->pc = 0x204F2Cu;
label_204f2c:
    // 0x204f2c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x204f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x204f30: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x204f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204f34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x204f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x204f38: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x204f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x204f3c: 0xc093620  jal         func_24D880
    ctx->pc = 0x204F3Cu;
    SET_GPR_U32(ctx, 31, 0x204F44u);
    ctx->pc = 0x204F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F3Cu;
    // 0x204f40: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x204F3Cu, 0x204F44u)) {
        return;
    }
    ctx->pc = 0x204F44u;
label_204f44:
    // 0x204f44: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x204f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204f48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f4c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x204f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x204f50: 0xc0817da  jal         func_205F68
    ctx->pc = 0x204F50u;
    SET_GPR_U32(ctx, 31, 0x204F58u);
    ctx->pc = 0x204F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F50u;
    // 0x204f54: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F68u, 0x204F50u, 0x204F58u)) {
        return;
    }
    ctx->pc = 0x204F58u;
label_204f58:
    // 0x204f58: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x204f5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x204f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x204f60: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x204f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_204f64:
    // 0x204f64: 0xc0815b2  jal         func_2056C8
    ctx->pc = 0x204F64u;
    SET_GPR_U32(ctx, 31, 0x204F6Cu);
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x204F64u, 0x204F6Cu)) {
        return;
    }
    ctx->pc = 0x204F6Cu;
label_204f6c:
    // 0x204f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f70: 0xc080858  jal         func_202160
    ctx->pc = 0x204F70u;
    SET_GPR_U32(ctx, 31, 0x204F78u);
    ctx->pc = 0x204F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F70u;
    // 0x204f74: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x204F70u, 0x204F78u)) {
        return;
    }
    ctx->pc = 0x204F78u;
label_204f78:
    // 0x204f78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204f7c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x204f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x204f80: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x204f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x204f84: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204f88: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x204f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x204f8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204f90: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204F90u;
    {
        const bool branch_taken_0x204f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204f90) {
            ctx->pc = 0x204F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204F90u;
            // 0x204f94: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204F98u;
            goto label_204f98;
        }
    }
    ctx->pc = 0x204F98u;
label_204f98:
    // 0x204f98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x204f9c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204F9Cu;
    {
        const bool branch_taken_0x204f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f9c) {
            ctx->pc = 0x204FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204F9Cu;
            // 0x204fa0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204FA4u;
            goto label_204fa4;
        }
    }
    ctx->pc = 0x204FA4u;
label_204fa4:
    // 0x204fa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204fa8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x204fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x204fac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204fb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x204fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_204fb4:
    // 0x204fb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x204fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x204FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FC0u;
        // 0x204fc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204FC8u;
}
