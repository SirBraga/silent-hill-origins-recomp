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

// Function: sub_00170EF0
// Address: 0x170ef0 - 0x171030
void sub_00170EF0_0x170ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170EF0_0x170ef0");
#endif

    switch (ctx->pc) {
        case 0x170f60u: goto label_170f60;
        case 0x170f98u: goto label_170f98;
        case 0x170fc0u: goto label_170fc0;
        case 0x170ff0u: goto label_170ff0;
        default: break;
    }

    ctx->pc = 0x170ef0u;

    // 0x170ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170ef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170ef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170f04: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x170f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x170f08: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x170F08u;
    {
        const bool branch_taken_0x170f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F08u;
        // 0x170f0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f08) {
            ctx->pc = 0x17101Cu;
            goto label_17101c;
        }
    }
    ctx->pc = 0x170F10u;
    // 0x170f10: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x170f14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170F14u;
    {
        const bool branch_taken_0x170f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F14u;
        // 0x170f18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f14) {
            ctx->pc = 0x170F30u;
            goto label_170f30;
        }
    }
    ctx->pc = 0x170F1Cu;
    // 0x170f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170f20: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x170F20u;
    {
        const bool branch_taken_0x170f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x170f20) {
            ctx->pc = 0x170FB8u;
            goto label_170fb8;
        }
    }
    ctx->pc = 0x170F28u;
    // 0x170f28: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x170F28u;
    {
        const bool branch_taken_0x170f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F28u;
        // 0x170f2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f28) {
            ctx->pc = 0x17101Cu;
            goto label_17101c;
        }
    }
    ctx->pc = 0x170F30u;
label_170f30:
    // 0x170f30: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x170f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x170f34: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x170f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x170f38: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x170f38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x170f3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x170F3Cu;
    {
        const bool branch_taken_0x170f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F3Cu;
        // 0x170f40: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f3c) {
            ctx->pc = 0x170F78u;
            goto label_170f78;
        }
    }
    ctx->pc = 0x170F44u;
    // 0x170f44: 0x2623012c  addiu       $v1, $s1, 0x12C
    ctx->pc = 0x170f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x170f48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170f4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x170f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170f50: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x170F50u;
    {
        const bool branch_taken_0x170f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x170f50) {
            ctx->pc = 0x170F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170F50u;
            // 0x170f54: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170F7Cu;
            goto label_170f7c;
        }
    }
    ctx->pc = 0x170F58u;
    // 0x170f58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x170f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x170f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170f60:
    // 0x170f60: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x170f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x170f64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170F64u;
    {
        const bool branch_taken_0x170f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F64u;
        // 0x170f68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f64) {
            ctx->pc = 0x170F78u;
            goto label_170f78;
        }
    }
    ctx->pc = 0x170F6Cu;
    // 0x170f6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170f70: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x170F70u;
    {
        const bool branch_taken_0x170f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f70) {
            ctx->pc = 0x170F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170F70u;
            // 0x170f74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170f60;
        }
    }
    ctx->pc = 0x170F78u;
label_170f78:
    // 0x170f78: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_170f7c:
    // 0x170f7c: 0x16020027  bne         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x170F7Cu;
    {
        const bool branch_taken_0x170f7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x170F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F7Cu;
        // 0x170f80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f7c) {
            ctx->pc = 0x17101Cu;
            goto label_17101c;
        }
    }
    ctx->pc = 0x170F84u;
    // 0x170f84: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x170f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x170f88: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x170F88u;
    {
        const bool branch_taken_0x170f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F88u;
        // 0x170f8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f88) {
            ctx->pc = 0x171018u;
            goto label_171018;
        }
    }
    ctx->pc = 0x170F90u;
    // 0x170f90: 0x2623012c  addiu       $v1, $s1, 0x12C
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x170f94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x170f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170f98:
    // 0x170f98: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x170f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x170f9c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x170F9Cu;
    {
        const bool branch_taken_0x170f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F9Cu;
        // 0x170fa0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f9c) {
            ctx->pc = 0x171018u;
            goto label_171018;
        }
    }
    ctx->pc = 0x170FA4u;
    // 0x170fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x170fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170fa8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x170FA8u;
    {
        const bool branch_taken_0x170fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FA8u;
        // 0x170fac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fa8) {
            ctx->pc = 0x170F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170f98;
        }
    }
    ctx->pc = 0x170FB0u;
    // 0x170fb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x170FB0u;
    {
        const bool branch_taken_0x170fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FB0u;
        // 0x170fb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fb0) {
            ctx->pc = 0x17101Cu;
            goto label_17101c;
        }
    }
    ctx->pc = 0x170FB8u;
label_170fb8:
    // 0x170fb8: 0xc0c580c  jal         func_316030
    ctx->pc = 0x170FB8u;
    SET_GPR_U32(ctx, 31, 0x170FC0u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x170FB8u, 0x170FC0u)) {
        return;
    }
    ctx->pc = 0x170FC0u;
label_170fc0:
    // 0x170fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170fc4: 0x0  nop
    ctx->pc = 0x170fc4u;
    // NOP
    // 0x170fc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x170fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x170fcc: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x170fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x170fd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170fd4: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x170fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x170fd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170fdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170fdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x170fe0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x170fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170fe4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x170FE4u;
    {
        const bool branch_taken_0x170fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170fe4) {
            ctx->pc = 0x170FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170FE4u;
            // 0x170fe8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171010u;
            goto label_171010;
        }
    }
    ctx->pc = 0x170FECu;
    // 0x170fec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x170fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170ff0:
    // 0x170ff0: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x170ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x170ff4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x170FF4u;
    {
        const bool branch_taken_0x170ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FF4u;
        // 0x170ff8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ff4) {
            ctx->pc = 0x171018u;
            goto label_171018;
        }
    }
    ctx->pc = 0x170FFCu;
    // 0x170ffc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x170ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x171000: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x171000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x171004: 0x5060fffa  beql        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x171004u;
    {
        const bool branch_taken_0x171004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171004) {
            ctx->pc = 0x171008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171004u;
            // 0x171008: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170ff0;
        }
    }
    ctx->pc = 0x17100Cu;
    // 0x17100c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_171010:
    // 0x171010: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x171010u;
    {
        const bool branch_taken_0x171010 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x171014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171010u;
        // 0x171014: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171010) {
            ctx->pc = 0x170FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170ff0;
        }
    }
    ctx->pc = 0x171018u;
label_171018:
    // 0x171018: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x171018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17101c:
    // 0x17101c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17101cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171024: 0x3e00008  jr          $ra
    ctx->pc = 0x171024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171024u;
        // 0x171028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17102Cu;
    // 0x17102c: 0x0  nop
    ctx->pc = 0x17102cu;
    // NOP
    ctx->pc = 0x171030u;
}
