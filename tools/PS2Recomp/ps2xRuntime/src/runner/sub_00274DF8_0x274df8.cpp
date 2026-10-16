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

// Function: sub_00274DF8
// Address: 0x274df8 - 0x274fd0
void sub_00274DF8_0x274df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274DF8_0x274df8");
#endif

    switch (ctx->pc) {
        case 0x274df8u: goto label_274df8;
        case 0x274dfcu: goto label_274dfc;
        case 0x274e00u: goto label_274e00;
        case 0x274e04u: goto label_274e04;
        case 0x274e08u: goto label_274e08;
        case 0x274e0cu: goto label_274e0c;
        case 0x274e10u: goto label_274e10;
        case 0x274e14u: goto label_274e14;
        case 0x274e18u: goto label_274e18;
        case 0x274e1cu: goto label_274e1c;
        case 0x274e20u: goto label_274e20;
        case 0x274e24u: goto label_274e24;
        case 0x274e28u: goto label_274e28;
        case 0x274e2cu: goto label_274e2c;
        case 0x274e30u: goto label_274e30;
        case 0x274e34u: goto label_274e34;
        case 0x274e38u: goto label_274e38;
        case 0x274e3cu: goto label_274e3c;
        case 0x274e40u: goto label_274e40;
        case 0x274e44u: goto label_274e44;
        case 0x274e48u: goto label_274e48;
        case 0x274e4cu: goto label_274e4c;
        case 0x274e50u: goto label_274e50;
        case 0x274e54u: goto label_274e54;
        case 0x274e58u: goto label_274e58;
        case 0x274e5cu: goto label_274e5c;
        case 0x274e60u: goto label_274e60;
        case 0x274e64u: goto label_274e64;
        case 0x274e68u: goto label_274e68;
        case 0x274e6cu: goto label_274e6c;
        case 0x274e70u: goto label_274e70;
        case 0x274e74u: goto label_274e74;
        case 0x274e78u: goto label_274e78;
        case 0x274e7cu: goto label_274e7c;
        case 0x274e80u: goto label_274e80;
        case 0x274e84u: goto label_274e84;
        case 0x274e88u: goto label_274e88;
        case 0x274e8cu: goto label_274e8c;
        case 0x274e90u: goto label_274e90;
        case 0x274e94u: goto label_274e94;
        case 0x274e98u: goto label_274e98;
        case 0x274e9cu: goto label_274e9c;
        case 0x274ea0u: goto label_274ea0;
        case 0x274ea4u: goto label_274ea4;
        case 0x274ea8u: goto label_274ea8;
        case 0x274eacu: goto label_274eac;
        case 0x274eb0u: goto label_274eb0;
        case 0x274eb4u: goto label_274eb4;
        case 0x274eb8u: goto label_274eb8;
        case 0x274ebcu: goto label_274ebc;
        case 0x274ec0u: goto label_274ec0;
        case 0x274ec4u: goto label_274ec4;
        case 0x274ec8u: goto label_274ec8;
        case 0x274eccu: goto label_274ecc;
        case 0x274ed0u: goto label_274ed0;
        case 0x274ed4u: goto label_274ed4;
        case 0x274ed8u: goto label_274ed8;
        case 0x274edcu: goto label_274edc;
        case 0x274ee0u: goto label_274ee0;
        case 0x274ee4u: goto label_274ee4;
        case 0x274ee8u: goto label_274ee8;
        case 0x274eecu: goto label_274eec;
        case 0x274ef0u: goto label_274ef0;
        case 0x274ef4u: goto label_274ef4;
        case 0x274ef8u: goto label_274ef8;
        case 0x274efcu: goto label_274efc;
        case 0x274f00u: goto label_274f00;
        case 0x274f04u: goto label_274f04;
        case 0x274f08u: goto label_274f08;
        case 0x274f0cu: goto label_274f0c;
        case 0x274f10u: goto label_274f10;
        case 0x274f14u: goto label_274f14;
        case 0x274f18u: goto label_274f18;
        case 0x274f1cu: goto label_274f1c;
        case 0x274f20u: goto label_274f20;
        case 0x274f24u: goto label_274f24;
        case 0x274f28u: goto label_274f28;
        case 0x274f2cu: goto label_274f2c;
        case 0x274f30u: goto label_274f30;
        case 0x274f34u: goto label_274f34;
        case 0x274f38u: goto label_274f38;
        case 0x274f3cu: goto label_274f3c;
        case 0x274f40u: goto label_274f40;
        case 0x274f44u: goto label_274f44;
        case 0x274f48u: goto label_274f48;
        case 0x274f4cu: goto label_274f4c;
        case 0x274f50u: goto label_274f50;
        case 0x274f54u: goto label_274f54;
        case 0x274f58u: goto label_274f58;
        case 0x274f5cu: goto label_274f5c;
        case 0x274f60u: goto label_274f60;
        case 0x274f64u: goto label_274f64;
        case 0x274f68u: goto label_274f68;
        case 0x274f6cu: goto label_274f6c;
        case 0x274f70u: goto label_274f70;
        case 0x274f74u: goto label_274f74;
        case 0x274f78u: goto label_274f78;
        case 0x274f7cu: goto label_274f7c;
        case 0x274f80u: goto label_274f80;
        case 0x274f84u: goto label_274f84;
        case 0x274f88u: goto label_274f88;
        case 0x274f8cu: goto label_274f8c;
        case 0x274f90u: goto label_274f90;
        case 0x274f94u: goto label_274f94;
        case 0x274f98u: goto label_274f98;
        case 0x274f9cu: goto label_274f9c;
        case 0x274fa0u: goto label_274fa0;
        case 0x274fa4u: goto label_274fa4;
        case 0x274fa8u: goto label_274fa8;
        case 0x274facu: goto label_274fac;
        case 0x274fb0u: goto label_274fb0;
        case 0x274fb4u: goto label_274fb4;
        case 0x274fb8u: goto label_274fb8;
        case 0x274fbcu: goto label_274fbc;
        case 0x274fc0u: goto label_274fc0;
        case 0x274fc4u: goto label_274fc4;
        case 0x274fc8u: goto label_274fc8;
        case 0x274fccu: goto label_274fcc;
        default: break;
    }

    ctx->pc = 0x274df8u;

label_274df8:
    // 0x274df8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x274df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_274dfc:
    // 0x274dfc: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x274dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_274e00:
    // 0x274e00: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x274e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_274e04:
    // 0x274e04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x274e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_274e08:
    // 0x274e08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x274e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_274e0c:
    // 0x274e0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x274e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_274e10:
    // 0x274e10: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x274e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274e14:
    // 0x274e14: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x274e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_274e18:
    // 0x274e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x274e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_274e1c:
    // 0x274e1c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x274e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_274e20:
    // 0x274e20: 0x89603  sra         $s2, $t0, 24
    ctx->pc = 0x274e20u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 8), 24));
label_274e24:
    // 0x274e24: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x274e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_274e28:
    // 0x274e28: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x274e28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_274e2c:
    // 0x274e2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x274e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_274e30:
    // 0x274e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274e34:
    // 0x274e34: 0xc0c4ab8  jal         func_312AE0
label_274e38:
    if (ctx->pc == 0x274E38u) {
        ctx->pc = 0x274E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E34u;
        // 0x274e38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274E3Cu;
        goto label_274e3c;
    }
    ctx->pc = 0x274E34u;
    SET_GPR_U32(ctx, 31, 0x274E3Cu);
    ctx->pc = 0x274E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274E34u;
    // 0x274e38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x274E34u, 0x274E3Cu)) {
        return;
    }
    ctx->pc = 0x274E3Cu;
label_274e3c:
    // 0x274e3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274e40:
    // 0x274e40: 0xc0c4ab8  jal         func_312AE0
label_274e44:
    if (ctx->pc == 0x274E44u) {
        ctx->pc = 0x274E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E40u;
        // 0x274e44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274E48u;
        goto label_274e48;
    }
    ctx->pc = 0x274E40u;
    SET_GPR_U32(ctx, 31, 0x274E48u);
    ctx->pc = 0x274E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274E40u;
    // 0x274e44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x274E40u, 0x274E48u)) {
        return;
    }
    ctx->pc = 0x274E48u;
label_274e48:
    // 0x274e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x274e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274e4c:
    // 0x274e4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x274e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_274e50:
    // 0x274e50: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x274e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_274e54:
    // 0x274e54: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x274e54u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274e58:
    // 0x274e58: 0x16000052  bnez        $s0, . + 4 + (0x52 << 2)
label_274e5c:
    if (ctx->pc == 0x274E5Cu) {
        ctx->pc = 0x274E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E58u;
        // 0x274e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274E60u;
        goto label_274e60;
    }
    ctx->pc = 0x274E58u;
    {
        const bool branch_taken_0x274e58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x274E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E58u;
        // 0x274e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e58) {
            ctx->pc = 0x274FA4u;
            goto label_274fa4;
        }
    }
    ctx->pc = 0x274E60u;
label_274e60:
    // 0x274e60: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x274e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_274e64:
    // 0x274e64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x274e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274e68:
    // 0x274e68: 0x8c621094  lw          $v0, 0x1094($v1)
    ctx->pc = 0x274e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4244)));
label_274e6c:
    // 0x274e6c: 0x40f809  jalr        $v0
label_274e70:
    if (ctx->pc == 0x274E70u) {
        ctx->pc = 0x274E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E6Cu;
        // 0x274e70: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274E74u;
        goto label_274e74;
    }
    ctx->pc = 0x274E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x274E74u);
        ctx->pc = 0x274E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E6Cu;
        // 0x274e70: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E6Cu, 0x274E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274E74u;
label_274e74:
    // 0x274e74: 0x620004a  bltz        $s1, . + 4 + (0x4A << 2)
label_274e78:
    if (ctx->pc == 0x274E78u) {
        ctx->pc = 0x274E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E74u;
        // 0x274e78: 0x2764021  addu        $t0, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274E7Cu;
        goto label_274e7c;
    }
    ctx->pc = 0x274E74u;
    {
        const bool branch_taken_0x274e74 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x274E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E74u;
        // 0x274e78: 0x2764021  addu        $t0, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e74) {
            ctx->pc = 0x274FA0u;
            goto label_274fa0;
        }
    }
    ctx->pc = 0x274E7Cu;
label_274e7c:
    // 0x274e7c: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_274e80:
    // 0x274e80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274e84:
    // 0x274e84: 0x71023  negu        $v0, $a3
    ctx->pc = 0x274e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_274e88:
    // 0x274e88: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x274e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_274e8c:
    // 0x274e8c: 0x240a002f  addiu       $t2, $zero, 0x2F
    ctx->pc = 0x274e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_274e90:
    // 0x274e90: 0x2409005c  addiu       $t1, $zero, 0x5C
    ctx->pc = 0x274e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_274e94:
    // 0x274e94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x274e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274e98:
    // 0x274e98: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_274e9c:
    if (ctx->pc == 0x274E9Cu) {
        ctx->pc = 0x274E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E98u;
        // 0x274e9c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EA0u;
        goto label_274ea0;
    }
    ctx->pc = 0x274E98u;
    {
        const bool branch_taken_0x274e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E98u;
        // 0x274e9c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e98) {
            ctx->pc = 0x274F24u;
            goto label_274f24;
        }
    }
    ctx->pc = 0x274EA0u;
label_274ea0:
    // 0x274ea0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x274ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_274ea4:
    // 0x274ea4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_274ea8:
    if (ctx->pc == 0x274EA8u) {
        ctx->pc = 0x274EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EA4u;
        // 0x274ea8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EACu;
        goto label_274eac;
    }
    ctx->pc = 0x274EA4u;
    {
        const bool branch_taken_0x274ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EA4u;
        // 0x274ea8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ea4) {
            ctx->pc = 0x274EFCu;
            goto label_274efc;
        }
    }
    ctx->pc = 0x274EACu;
label_274eac:
    // 0x274eac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_274eb0:
    if (ctx->pc == 0x274EB0u) {
        ctx->pc = 0x274EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EACu;
        // 0x274eb0: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EB4u;
        goto label_274eb4;
    }
    ctx->pc = 0x274EACu;
    {
        const bool branch_taken_0x274eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274eac) {
            ctx->pc = 0x274EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274EACu;
            // 0x274eb0: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274EDCu;
            goto label_274edc;
        }
    }
    ctx->pc = 0x274EB4u;
label_274eb4:
    // 0x274eb4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_274eb8:
    // 0x274eb8: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274ebc:
    if (ctx->pc == 0x274EBCu) {
        ctx->pc = 0x274EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EB8u;
        // 0x274ebc: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EC0u;
        goto label_274ec0;
    }
    ctx->pc = 0x274EB8u;
    {
        const bool branch_taken_0x274eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EB8u;
        // 0x274ebc: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274eb8) {
            ctx->pc = 0x274EC8u;
            goto label_274ec8;
        }
    }
    ctx->pc = 0x274EC0u;
label_274ec0:
    // 0x274ec0: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274ec4:
    if (ctx->pc == 0x274EC4u) {
        ctx->pc = 0x274EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EC0u;
        // 0x274ec4: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EC8u;
        goto label_274ec8;
    }
    ctx->pc = 0x274EC0u;
    {
        const bool branch_taken_0x274ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274ec0) {
            ctx->pc = 0x274EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274EC0u;
            // 0x274ec4: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274ECCu;
            goto label_274ecc;
        }
    }
    ctx->pc = 0x274EC8u;
label_274ec8:
    // 0x274ec8: 0xa1120000  sb          $s2, 0x0($t0)
    ctx->pc = 0x274ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 18));
label_274ecc:
    // 0x274ecc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274ed0:
    // 0x274ed0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_274ed4:
    // 0x274ed4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x274ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_274ed8:
    // 0x274ed8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x274ed8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_274edc:
    // 0x274edc: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274ee0:
    if (ctx->pc == 0x274EE0u) {
        ctx->pc = 0x274EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EDCu;
        // 0x274ee0: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EE4u;
        goto label_274ee4;
    }
    ctx->pc = 0x274EDCu;
    {
        const bool branch_taken_0x274edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EDCu;
        // 0x274ee0: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274edc) {
            ctx->pc = 0x274EECu;
            goto label_274eec;
        }
    }
    ctx->pc = 0x274EE4u;
label_274ee4:
    // 0x274ee4: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274ee8:
    if (ctx->pc == 0x274EE8u) {
        ctx->pc = 0x274EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EE4u;
        // 0x274ee8: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EECu;
        goto label_274eec;
    }
    ctx->pc = 0x274EE4u;
    {
        const bool branch_taken_0x274ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274ee4) {
            ctx->pc = 0x274EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274EE4u;
            // 0x274ee8: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274EF0u;
            goto label_274ef0;
        }
    }
    ctx->pc = 0x274EECu;
label_274eec:
    // 0x274eec: 0xa0d20000  sb          $s2, 0x0($a2)
    ctx->pc = 0x274eecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 18));
label_274ef0:
    // 0x274ef0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274ef4:
    // 0x274ef4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_274ef8:
    // 0x274ef8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x274ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_274efc:
    // 0x274efc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x274efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_274f00:
    // 0x274f00: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274f04:
    if (ctx->pc == 0x274F04u) {
        ctx->pc = 0x274F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F00u;
        // 0x274f04: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F08u;
        goto label_274f08;
    }
    ctx->pc = 0x274F00u;
    {
        const bool branch_taken_0x274f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F00u;
        // 0x274f04: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f00) {
            ctx->pc = 0x274F10u;
            goto label_274f10;
        }
    }
    ctx->pc = 0x274F08u;
label_274f08:
    // 0x274f08: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274f0c:
    if (ctx->pc == 0x274F0Cu) {
        ctx->pc = 0x274F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F08u;
        // 0x274f0c: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F10u;
        goto label_274f10;
    }
    ctx->pc = 0x274F08u;
    {
        const bool branch_taken_0x274f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274f08) {
            ctx->pc = 0x274F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274F08u;
            // 0x274f0c: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274F14u;
            goto label_274f14;
        }
    }
    ctx->pc = 0x274F10u;
label_274f10:
    // 0x274f10: 0xa0d20000  sb          $s2, 0x0($a2)
    ctx->pc = 0x274f10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 18));
label_274f14:
    // 0x274f14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274f18:
    // 0x274f18: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x274f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_274f1c:
    // 0x274f1c: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
label_274f20:
    if (ctx->pc == 0x274F20u) {
        ctx->pc = 0x274F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F1Cu;
        // 0x274f20: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F24u;
        goto label_274f24;
    }
    ctx->pc = 0x274F1Cu;
    {
        const bool branch_taken_0x274f1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F1Cu;
        // 0x274f20: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f1c) {
            ctx->pc = 0x274FA0u;
            goto label_274fa0;
        }
    }
    ctx->pc = 0x274F24u;
label_274f24:
    // 0x274f24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x274f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_274f28:
    // 0x274f28: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x274f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_274f2c:
    // 0x274f2c: 0x0  nop
    ctx->pc = 0x274f2cu;
    // NOP
label_274f30:
    // 0x274f30: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x274f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_274f34:
    // 0x274f34: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274f38:
    if (ctx->pc == 0x274F38u) {
        ctx->pc = 0x274F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F34u;
        // 0x274f38: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F3Cu;
        goto label_274f3c;
    }
    ctx->pc = 0x274F34u;
    {
        const bool branch_taken_0x274f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F34u;
        // 0x274f38: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f34) {
            ctx->pc = 0x274F44u;
            goto label_274f44;
        }
    }
    ctx->pc = 0x274F3Cu;
label_274f3c:
    // 0x274f3c: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274f40:
    if (ctx->pc == 0x274F40u) {
        ctx->pc = 0x274F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F3Cu;
        // 0x274f40: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F44u;
        goto label_274f44;
    }
    ctx->pc = 0x274F3Cu;
    {
        const bool branch_taken_0x274f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274f3c) {
            ctx->pc = 0x274F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274F3Cu;
            // 0x274f40: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274F48u;
            goto label_274f48;
        }
    }
    ctx->pc = 0x274F44u;
label_274f44:
    // 0x274f44: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x274f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
label_274f48:
    // 0x274f48: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x274f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_274f4c:
    // 0x274f4c: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274f50:
    if (ctx->pc == 0x274F50u) {
        ctx->pc = 0x274F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F4Cu;
        // 0x274f50: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F54u;
        goto label_274f54;
    }
    ctx->pc = 0x274F4Cu;
    {
        const bool branch_taken_0x274f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F4Cu;
        // 0x274f50: 0x90a40001  lbu         $a0, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f4c) {
            ctx->pc = 0x274F5Cu;
            goto label_274f5c;
        }
    }
    ctx->pc = 0x274F54u;
label_274f54:
    // 0x274f54: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274f58:
    if (ctx->pc == 0x274F58u) {
        ctx->pc = 0x274F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F54u;
        // 0x274f58: 0xa0640001  sb          $a0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F5Cu;
        goto label_274f5c;
    }
    ctx->pc = 0x274F54u;
    {
        const bool branch_taken_0x274f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274f54) {
            ctx->pc = 0x274F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274F54u;
            // 0x274f58: 0xa0640001  sb          $a0, 0x1($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274F60u;
            goto label_274f60;
        }
    }
    ctx->pc = 0x274F5Cu;
label_274f5c:
    // 0x274f5c: 0xa0720001  sb          $s2, 0x1($v1)
    ctx->pc = 0x274f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 18));
label_274f60:
    // 0x274f60: 0x80a20002  lb          $v0, 0x2($a1)
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_274f64:
    // 0x274f64: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274f68:
    if (ctx->pc == 0x274F68u) {
        ctx->pc = 0x274F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F64u;
        // 0x274f68: 0x90a40002  lbu         $a0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F6Cu;
        goto label_274f6c;
    }
    ctx->pc = 0x274F64u;
    {
        const bool branch_taken_0x274f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F64u;
        // 0x274f68: 0x90a40002  lbu         $a0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f64) {
            ctx->pc = 0x274F74u;
            goto label_274f74;
        }
    }
    ctx->pc = 0x274F6Cu;
label_274f6c:
    // 0x274f6c: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274f70:
    if (ctx->pc == 0x274F70u) {
        ctx->pc = 0x274F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F6Cu;
        // 0x274f70: 0xa0640002  sb          $a0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F74u;
        goto label_274f74;
    }
    ctx->pc = 0x274F6Cu;
    {
        const bool branch_taken_0x274f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274f6c) {
            ctx->pc = 0x274F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274F6Cu;
            // 0x274f70: 0xa0640002  sb          $a0, 0x2($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274F78u;
            goto label_274f78;
        }
    }
    ctx->pc = 0x274F74u;
label_274f74:
    // 0x274f74: 0xa0720002  sb          $s2, 0x2($v1)
    ctx->pc = 0x274f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 18));
label_274f78:
    // 0x274f78: 0x80a20003  lb          $v0, 0x3($a1)
    ctx->pc = 0x274f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_274f7c:
    // 0x274f7c: 0x104a0003  beq         $v0, $t2, . + 4 + (0x3 << 2)
label_274f80:
    if (ctx->pc == 0x274F80u) {
        ctx->pc = 0x274F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F7Cu;
        // 0x274f80: 0x90a40003  lbu         $a0, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F84u;
        goto label_274f84;
    }
    ctx->pc = 0x274F7Cu;
    {
        const bool branch_taken_0x274f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x274F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F7Cu;
        // 0x274f80: 0x90a40003  lbu         $a0, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f7c) {
            ctx->pc = 0x274F8Cu;
            goto label_274f8c;
        }
    }
    ctx->pc = 0x274F84u;
label_274f84:
    // 0x274f84: 0x54490002  bnel        $v0, $t1, . + 4 + (0x2 << 2)
label_274f88:
    if (ctx->pc == 0x274F88u) {
        ctx->pc = 0x274F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F84u;
        // 0x274f88: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274F8Cu;
        goto label_274f8c;
    }
    ctx->pc = 0x274F84u;
    {
        const bool branch_taken_0x274f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x274f84) {
            ctx->pc = 0x274F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274F84u;
            // 0x274f88: 0xa0640003  sb          $a0, 0x3($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274F90u;
            goto label_274f90;
        }
    }
    ctx->pc = 0x274F8Cu;
label_274f8c:
    // 0x274f8c: 0xa0720003  sb          $s2, 0x3($v1)
    ctx->pc = 0x274f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 18));
label_274f90:
    // 0x274f90: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_274f94:
    // 0x274f94: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x274f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_274f98:
    // 0x274f98: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
label_274f9c:
    if (ctx->pc == 0x274F9Cu) {
        ctx->pc = 0x274F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F98u;
        // 0x274f9c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FA0u;
        goto label_274fa0;
    }
    ctx->pc = 0x274F98u;
    {
        const bool branch_taken_0x274f98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x274F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F98u;
        // 0x274f9c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f98) {
            ctx->pc = 0x274F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274f30;
        }
    }
    ctx->pc = 0x274FA0u;
label_274fa0:
    // 0x274fa0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x274fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_274fa4:
    // 0x274fa4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x274fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_274fa8:
    // 0x274fa8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x274fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_274fac:
    // 0x274fac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x274facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_274fb0:
    // 0x274fb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x274fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274fb4:
    // 0x274fb4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x274fb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274fb8:
    // 0x274fb8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x274fb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274fbc:
    // 0x274fbc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x274fbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_274fc0:
    // 0x274fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_274fc4:
    // 0x274fc4: 0x3e00008  jr          $ra
label_274fc8:
    if (ctx->pc == 0x274FC8u) {
        ctx->pc = 0x274FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FC4u;
        // 0x274fc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FCCu;
        goto label_274fcc;
    }
    ctx->pc = 0x274FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FC4u;
        // 0x274fc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274FCCu;
label_274fcc:
    // 0x274fcc: 0x0  nop
    ctx->pc = 0x274fccu;
    // NOP
    ctx->pc = 0x274fd0u;
}
