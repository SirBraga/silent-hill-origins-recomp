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

// Function: sub_00308E78
// Address: 0x308e78 - 0x308fc8
void sub_00308E78_0x308e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308E78_0x308e78");
#endif

    switch (ctx->pc) {
        case 0x308e9cu: goto label_308e9c;
        case 0x308eb4u: goto label_308eb4;
        case 0x308eecu: goto label_308eec;
        case 0x308f18u: goto label_308f18;
        case 0x308f44u: goto label_308f44;
        case 0x308f68u: goto label_308f68;
        case 0x308f78u: goto label_308f78;
        case 0x308f94u: goto label_308f94;
        case 0x308fa4u: goto label_308fa4;
        default: break;
    }

    ctx->pc = 0x308e78u;

    // 0x308e78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x308e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x308e7c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x308e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x308e80: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x308e80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x308e84: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x308e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x308e88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x308e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x308e8c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x308e8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x308e90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x308e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x308e94: 0xc0c23f2  jal         func_308FC8
    ctx->pc = 0x308E94u;
    SET_GPR_U32(ctx, 31, 0x308E9Cu);
    ctx->pc = 0x308E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E94u;
    // 0x308e98: 0x3c11006b  lui         $s1, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308FC8u, 0x308E94u, 0x308E9Cu)) {
        return;
    }
    ctx->pc = 0x308E9Cu;
label_308e9c:
    // 0x308e9c: 0x8e30cb58  lw          $s0, -0x34A8($s1)
    ctx->pc = 0x308e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953816)));
    // 0x308ea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x308ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x308ea4: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308EA4u;
    {
        const bool branch_taken_0x308ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x308EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EA4u;
        // 0x308ea8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ea4) {
            ctx->pc = 0x308ED0u;
            goto label_308ed0;
        }
    }
    ctx->pc = 0x308EACu;
    // 0x308eac: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x308EACu;
    SET_GPR_U32(ctx, 31, 0x308EB4u);
    ctx->pc = 0x308EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EACu;
    // 0x308eb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x308EACu, 0x308EB4u)) {
        return;
    }
    ctx->pc = 0x308EB4u;
label_308eb4:
    // 0x308eb4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x308EB4u;
    {
        const bool branch_taken_0x308eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EB4u;
        // 0x308eb8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308eb4) {
            ctx->pc = 0x308FA4u;
            goto label_308fa4;
        }
    }
    ctx->pc = 0x308EBCu;
    // 0x308ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308ec0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x308ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308ec4: 0x0  nop
    ctx->pc = 0x308ec4u;
    // NOP
    // 0x308ec8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x308EC8u;
    {
        const bool branch_taken_0x308ec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x308ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EC8u;
        // 0x308ecc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ec8) {
            ctx->pc = 0x308ED8u;
            goto label_308ed8;
        }
    }
    ctx->pc = 0x308ED0u;
label_308ed0:
    // 0x308ed0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x308ED0u;
    {
        const bool branch_taken_0x308ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308ED0u;
        // 0x308ed4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ed0) {
            ctx->pc = 0x308FA4u;
            goto label_308fa4;
        }
    }
    ctx->pc = 0x308ED8u;
label_308ed8:
    // 0x308ed8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x308ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x308edc: 0x24420e50  addiu       $v0, $v0, 0xE50
    ctx->pc = 0x308edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3664));
    // 0x308ee0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x308ee4: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x308EE4u;
    SET_GPR_U32(ctx, 31, 0x308EECu);
    ctx->pc = 0x308EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EE4u;
    // 0x308ee8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x308EE4u, 0x308EECu)) {
        return;
    }
    ctx->pc = 0x308EECu;
label_308eec:
    // 0x308eec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x308eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x308ef0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308EF0u;
    {
        const bool branch_taken_0x308ef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x308EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EF0u;
        // 0x308ef4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ef0) {
            ctx->pc = 0x308F08u;
            goto label_308f08;
        }
    }
    ctx->pc = 0x308EF8u;
    // 0x308ef8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x308ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x308efc: 0xdc220e58  ld          $v0, 0xE58($at)
    ctx->pc = 0x308efcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B0E58u));
    // 0x308f00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x308F00u;
    {
        const bool branch_taken_0x308f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F00u;
        // 0x308f04: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f00) {
            ctx->pc = 0x308F1Cu;
            goto label_308f1c;
        }
    }
    ctx->pc = 0x308F08u;
label_308f08:
    // 0x308f08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x308f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x308f0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f10: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x308F10u;
    SET_GPR_U32(ctx, 31, 0x308F18u);
    ctx->pc = 0x308F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F10u;
    // 0x308f14: 0xdc45cb50  ld          $a1, -0x34B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x308F10u, 0x308F18u)) {
        return;
    }
    ctx->pc = 0x308F18u;
label_308f18:
    // 0x308f18: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x308f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_308f1c:
    // 0x308f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f20: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x308f20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f24: 0x0  nop
    ctx->pc = 0x308f24u;
    // NOP
    // 0x308f28: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x308F28u;
    {
        const bool branch_taken_0x308f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x308F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F28u;
        // 0x308f2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f28) {
            ctx->pc = 0x308F4Cu;
            goto label_308f4c;
        }
    }
    ctx->pc = 0x308F30u;
    // 0x308f30: 0x8e23cb58  lw          $v1, -0x34A8($s1)
    ctx->pc = 0x308f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953816)));
    // 0x308f34: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308F34u;
    {
        const bool branch_taken_0x308f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F34u;
        // 0x308f38: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f34) {
            ctx->pc = 0x308F60u;
            goto label_308f60;
        }
    }
    ctx->pc = 0x308F3Cu;
    // 0x308f3c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x308F3Cu;
    SET_GPR_U32(ctx, 31, 0x308F44u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x308F3Cu, 0x308F44u)) {
        return;
    }
    ctx->pc = 0x308F44u;
label_308f44:
    // 0x308f44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x308F44u;
    {
        const bool branch_taken_0x308f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F44u;
        // 0x308f48: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f44) {
            ctx->pc = 0x308F7Cu;
            goto label_308f7c;
        }
    }
    ctx->pc = 0x308F4Cu;
label_308f4c:
    // 0x308f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f50: 0x8e22cb58  lw          $v0, -0x34A8($s1)
    ctx->pc = 0x308f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953816)));
    // 0x308f54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x308f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308f58: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308F58u;
    {
        const bool branch_taken_0x308f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x308F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F58u;
        // 0x308f5c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f58) {
            ctx->pc = 0x308F70u;
            goto label_308f70;
        }
    }
    ctx->pc = 0x308F60u;
label_308f60:
    // 0x308f60: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x308F60u;
    SET_GPR_U32(ctx, 31, 0x308F68u);
    ctx->pc = 0x308F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F60u;
    // 0x308f64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x308F60u, 0x308F68u)) {
        return;
    }
    ctx->pc = 0x308F68u;
label_308f68:
    // 0x308f68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x308F68u;
    {
        const bool branch_taken_0x308f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F68u;
        // 0x308f6c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f68) {
            ctx->pc = 0x308F84u;
            goto label_308f84;
        }
    }
    ctx->pc = 0x308F70u;
label_308f70:
    // 0x308f70: 0xc0c489a  jal         func_312268
    ctx->pc = 0x308F70u;
    SET_GPR_U32(ctx, 31, 0x308F78u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x308F70u, 0x308F78u)) {
        return;
    }
    ctx->pc = 0x308F78u;
label_308f78:
    // 0x308f78: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x308f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_308f7c:
    // 0x308f7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x308f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x308f80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x308f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_308f84:
    // 0x308f84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308F84u;
    {
        const bool branch_taken_0x308f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f84) {
            ctx->pc = 0x308F9Cu;
            goto label_308f9c;
        }
    }
    ctx->pc = 0x308F8Cu;
    // 0x308f8c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x308F8Cu;
    SET_GPR_U32(ctx, 31, 0x308F94u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x308F8Cu, 0x308F94u)) {
        return;
    }
    ctx->pc = 0x308F94u;
label_308f94:
    // 0x308f94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x308f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308f98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x308f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_308f9c:
    // 0x308f9c: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x308F9Cu;
    SET_GPR_U32(ctx, 31, 0x308FA4u);
    ctx->pc = 0x308FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F9Cu;
    // 0x308fa0: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x308F9Cu, 0x308FA4u)) {
        return;
    }
    ctx->pc = 0x308FA4u;
label_308fa4:
    // 0x308fa4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x308fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308fa8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x308fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308fac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x308facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308fb0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x308fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x308fb4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x308fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x308fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x308FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FB8u;
        // 0x308fbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308FC0u;
    // 0x308fc0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x308fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x308fc4: 0x0  nop
    ctx->pc = 0x308fc4u;
    // NOP
    ctx->pc = 0x308fc8u;
}
