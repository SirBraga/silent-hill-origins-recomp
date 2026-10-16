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

// Function: sub_001C7EE8
// Address: 0x1c7ee8 - 0x1c8000
void sub_001C7EE8_0x1c7ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7EE8_0x1c7ee8");
#endif

    switch (ctx->pc) {
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        default: break;
    }

    ctx->pc = 0x1c7ee8u;

label_1c7ee8:
    // 0x1c7ee8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c7eec:
    // 0x1c7eec: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1c7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1c7ef0:
    // 0x1c7ef0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c7ef4:
    // 0x1c7ef4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c7ef8:
    // 0x1c7ef8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1c7efc:
    // 0x1c7efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f00:
    // 0x1c7f00: 0xc4af9918  lwc1        $f15, -0x66E8($a1)
    ctx->pc = 0x1c7f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294940952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c7f04:
    // 0x1c7f04: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x1c7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_1c7f08:
    // 0x1c7f08: 0xc44d9908  lwc1        $f13, -0x66F8($v0)
    ctx->pc = 0x1c7f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c7f0c:
    // 0x1c7f0c: 0xc46e9914  lwc1        $f14, -0x66EC($v1)
    ctx->pc = 0x1c7f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1c7f10:
    // 0x1c7f10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c7f14:
    // 0x1c7f14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c7f18:
    // 0x1c7f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c7f1c:
    // 0x1c7f1c: 0xc06d02e  jal         func_1B40B8
label_1c7f20:
    if (ctx->pc == 0x1C7F20u) {
        ctx->pc = 0x1C7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F1Cu;
        // 0x1c7f20: 0x26050288  addiu       $a1, $s0, 0x288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F24u;
        goto label_1c7f24;
    }
    ctx->pc = 0x1C7F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F24u);
    ctx->pc = 0x1C7F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F1Cu;
    // 0x1c7f20: 0x26050288  addiu       $a1, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B40B8u, 0x1C7F1Cu, 0x1C7F24u)) {
        return;
    }
    ctx->pc = 0x1C7F24u;
label_1c7f24:
    // 0x1c7f24: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_1c7f28:
    if (ctx->pc == 0x1C7F28u) {
        ctx->pc = 0x1C7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F24u;
        // 0x1c7f28: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F2Cu;
        goto label_1c7f2c;
    }
    ctx->pc = 0x1C7F24u;
    {
        const bool branch_taken_0x1c7f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f24) {
            ctx->pc = 0x1C7F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7F24u;
            // 0x1c7f28: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7FECu;
            goto label_1c7fec;
        }
    }
    ctx->pc = 0x1C7F2Cu;
label_1c7f2c:
    // 0x1c7f2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c7f30:
    // 0x1c7f30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1c7f34:
    // 0x1c7f34: 0x8c5198f0  lw          $s1, -0x6710($v0)
    ctx->pc = 0x1c7f34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940912)));
label_1c7f38:
    // 0x1c7f38: 0x2472f5a8  addiu       $s2, $v1, -0xA58
    ctx->pc = 0x1c7f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964648));
label_1c7f3c:
    // 0x1c7f3c: 0xc07d234  jal         func_1F48D0
label_1c7f40:
    if (ctx->pc == 0x1C7F40u) {
        ctx->pc = 0x1C7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F3Cu;
        // 0x1c7f40: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F44u;
        goto label_1c7f44;
    }
    ctx->pc = 0x1C7F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F44u);
    ctx->pc = 0x1C7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F3Cu;
    // 0x1c7f40: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C7F3Cu, 0x1C7F44u)) {
        return;
    }
    ctx->pc = 0x1C7F44u;
label_1c7f44:
    // 0x1c7f44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c7f48:
    if (ctx->pc == 0x1C7F48u) {
        ctx->pc = 0x1C7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F44u;
        // 0x1c7f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F4Cu;
        goto label_1c7f4c;
    }
    ctx->pc = 0x1C7F44u;
    {
        const bool branch_taken_0x1c7f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F44u;
        // 0x1c7f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f44) {
            ctx->pc = 0x1C7F6Cu;
            goto label_1c7f6c;
        }
    }
    ctx->pc = 0x1C7F4Cu;
label_1c7f4c:
    // 0x1c7f4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f50:
    // 0x1c7f50: 0xc07d3d6  jal         func_1F4F58
label_1c7f54:
    if (ctx->pc == 0x1C7F54u) {
        ctx->pc = 0x1C7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F50u;
        // 0x1c7f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F58u;
        goto label_1c7f58;
    }
    ctx->pc = 0x1C7F50u;
    SET_GPR_U32(ctx, 31, 0x1C7F58u);
    ctx->pc = 0x1C7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F50u;
    // 0x1c7f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C7F50u, 0x1C7F58u)) {
        return;
    }
    ctx->pc = 0x1C7F58u;
label_1c7f58:
    // 0x1c7f58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c7f5c:
    if (ctx->pc == 0x1C7F5Cu) {
        ctx->pc = 0x1C7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F58u;
        // 0x1c7f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F60u;
        goto label_1c7f60;
    }
    ctx->pc = 0x1C7F58u;
    {
        const bool branch_taken_0x1c7f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F58u;
        // 0x1c7f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f58) {
            ctx->pc = 0x1C7F6Cu;
            goto label_1c7f6c;
        }
    }
    ctx->pc = 0x1C7F60u;
label_1c7f60:
    // 0x1c7f60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c7f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f64:
    // 0x1c7f64: 0xc07d348  jal         func_1F4D20
label_1c7f68:
    if (ctx->pc == 0x1C7F68u) {
        ctx->pc = 0x1C7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F64u;
        // 0x1c7f68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F6Cu;
        goto label_1c7f6c;
    }
    ctx->pc = 0x1C7F64u;
    SET_GPR_U32(ctx, 31, 0x1C7F6Cu);
    ctx->pc = 0x1C7F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F64u;
    // 0x1c7f68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1C7F64u, 0x1C7F6Cu)) {
        return;
    }
    ctx->pc = 0x1C7F6Cu;
label_1c7f6c:
    // 0x1c7f6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7f70:
    // 0x1c7f70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c7f74:
    if (ctx->pc == 0x1C7F74u) {
        ctx->pc = 0x1C7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F70u;
        // 0x1c7f74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F78u;
        goto label_1c7f78;
    }
    ctx->pc = 0x1C7F70u;
    {
        const bool branch_taken_0x1c7f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F70u;
        // 0x1c7f74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f70) {
            ctx->pc = 0x1C7FB4u;
            goto label_1c7fb4;
        }
    }
    ctx->pc = 0x1C7F78u;
label_1c7f78:
    // 0x1c7f78: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1c7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
label_1c7f7c:
    // 0x1c7f7c: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x1c7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
label_1c7f80:
    // 0x1c7f80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7f84:
    // 0x1c7f84: 0xae03026c  sw          $v1, 0x26C($s0)
    ctx->pc = 0x1c7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
label_1c7f88:
    // 0x1c7f88: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_1c7f8c:
    // 0x1c7f8c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1c7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_1c7f90:
    // 0x1c7f90: 0xae030268  sw          $v1, 0x268($s0)
    ctx->pc = 0x1c7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 3));
label_1c7f94:
    // 0x1c7f94: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c7f98:
    // 0x1c7f98: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c7f9c:
    // 0x1c7f9c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c7f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c7fa0:
    // 0x1c7fa0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c7fa4:
    // 0x1c7fa4: 0x60f809  jalr        $v1
label_1c7fa8:
    if (ctx->pc == 0x1C7FA8u) {
        ctx->pc = 0x1C7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FA4u;
        // 0x1c7fa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FACu;
        goto label_1c7fac;
    }
    ctx->pc = 0x1C7FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7FACu);
        ctx->pc = 0x1C7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FA4u;
        // 0x1c7fa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7FA4u, 0x1C7FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7FACu;
label_1c7fac:
    // 0x1c7fac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1c7fb0:
    if (ctx->pc == 0x1C7FB0u) {
        ctx->pc = 0x1C7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FACu;
        // 0x1c7fb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FB4u;
        goto label_1c7fb4;
    }
    ctx->pc = 0x1C7FACu;
    {
        const bool branch_taken_0x1c7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FACu;
        // 0x1c7fb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fac) {
            ctx->pc = 0x1C7FECu;
            goto label_1c7fec;
        }
    }
    ctx->pc = 0x1C7FB4u;
label_1c7fb4:
    // 0x1c7fb4: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1c7fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c7fb8:
    // 0x1c7fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7fbc:
    // 0x1c7fbc: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c7fc0:
    // 0x1c7fc0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c7fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c7fc4:
    // 0x1c7fc4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c7fc8:
    // 0x1c7fc8: 0x60f809  jalr        $v1
label_1c7fcc:
    if (ctx->pc == 0x1C7FCCu) {
        ctx->pc = 0x1C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC8u;
        // 0x1c7fcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FD0u;
        goto label_1c7fd0;
    }
    ctx->pc = 0x1C7FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7FD0u);
        ctx->pc = 0x1C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC8u;
        // 0x1c7fcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7FC8u, 0x1C7FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7FD0u;
label_1c7fd0:
    // 0x1c7fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7fd4:
    // 0x1c7fd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7fd8:
    // 0x1c7fd8: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1c7fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_1c7fdc:
    // 0x1c7fdc: 0xae030274  sw          $v1, 0x274($s0)
    ctx->pc = 0x1c7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
label_1c7fe0:
    // 0x1c7fe0: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1c7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_1c7fe4:
    // 0x1c7fe4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c7fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_1c7fe8:
    // 0x1c7fe8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c7fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7fec:
    // 0x1c7fec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c7fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7ff0:
    // 0x1c7ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c7ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7ff4:
    // 0x1c7ff4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7ff8:
    // 0x1c7ff8: 0x3e00008  jr          $ra
label_1c7ffc:
    if (ctx->pc == 0x1C7FFCu) {
        ctx->pc = 0x1C7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FF8u;
        // 0x1c7ffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8000u;
        goto label_fallthrough_0x1c7ff8;
    }
    ctx->pc = 0x1C7FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FF8u;
        // 0x1c7ffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7ff8:
    ctx->pc = 0x1C8000u;
}
