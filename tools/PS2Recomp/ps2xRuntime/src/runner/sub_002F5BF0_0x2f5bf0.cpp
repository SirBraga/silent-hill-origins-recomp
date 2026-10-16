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

// Function: sub_002F5BF0
// Address: 0x2f5bf0 - 0x2f6110
void sub_002F5BF0_0x2f5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5BF0_0x2f5bf0");
#endif

    switch (ctx->pc) {
        case 0x2f5c3cu: goto label_2f5c3c;
        case 0x2f5c78u: goto label_2f5c78;
        case 0x2f5c90u: goto label_2f5c90;
        case 0x2f5cb0u: goto label_2f5cb0;
        case 0x2f5cbcu: goto label_2f5cbc;
        case 0x2f5cd0u: goto label_2f5cd0;
        case 0x2f5ce0u: goto label_2f5ce0;
        case 0x2f5ce8u: goto label_2f5ce8;
        case 0x2f5d28u: goto label_2f5d28;
        case 0x2f5d6cu: goto label_2f5d6c;
        case 0x2f5d98u: goto label_2f5d98;
        case 0x2f5db0u: goto label_2f5db0;
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e84u: goto label_2f5e84;
        case 0x2f5e8cu: goto label_2f5e8c;
        case 0x2f5e98u: goto label_2f5e98;
        case 0x2f5eb0u: goto label_2f5eb0;
        case 0x2f5ec0u: goto label_2f5ec0;
        case 0x2f5ed4u: goto label_2f5ed4;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f90u: goto label_2f5f90;
        case 0x2f5fecu: goto label_2f5fec;
        case 0x2f5ffcu: goto label_2f5ffc;
        case 0x2f6020u: goto label_2f6020;
        case 0x2f6068u: goto label_2f6068;
        case 0x2f6084u: goto label_2f6084;
        default: break;
    }

    ctx->pc = 0x2f5bf0u;

    // 0x2f5bf0: 0x27bdfa00  addiu       $sp, $sp, -0x600
    ctx->pc = 0x2f5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965760));
    // 0x2f5bf4: 0xffb605c0  sd          $s6, 0x5C0($sp)
    ctx->pc = 0x2f5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1472), GPR_U64(ctx, 22));
    // 0x2f5bf8: 0xffb705d0  sd          $s7, 0x5D0($sp)
    ctx->pc = 0x2f5bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1488), GPR_U64(ctx, 23));
    // 0x2f5bfc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f5bfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c00: 0xffb10570  sd          $s1, 0x570($sp)
    ctx->pc = 0x2f5c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1392), GPR_U64(ctx, 17));
    // 0x2f5c04: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2f5c04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c08: 0xffb00560  sd          $s0, 0x560($sp)
    ctx->pc = 0x2f5c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1376), GPR_U64(ctx, 16));
    // 0x2f5c0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2f5c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c10: 0xffbf05f0  sd          $ra, 0x5F0($sp)
    ctx->pc = 0x2f5c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 31));
    // 0x2f5c14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f5c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c18: 0xffbe05e0  sd          $fp, 0x5E0($sp)
    ctx->pc = 0x2f5c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1504), GPR_U64(ctx, 30));
    // 0x2f5c1c: 0xffb505b0  sd          $s5, 0x5B0($sp)
    ctx->pc = 0x2f5c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1456), GPR_U64(ctx, 21));
    // 0x2f5c20: 0xffb405a0  sd          $s4, 0x5A0($sp)
    ctx->pc = 0x2f5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1440), GPR_U64(ctx, 20));
    // 0x2f5c24: 0xffb30590  sd          $s3, 0x590($sp)
    ctx->pc = 0x2f5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1424), GPR_U64(ctx, 19));
    // 0x2f5c28: 0xffb20580  sd          $s2, 0x580($sp)
    ctx->pc = 0x2f5c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1408), GPR_U64(ctx, 18));
    // 0x2f5c2c: 0xafa70544  sw          $a3, 0x544($sp)
    ctx->pc = 0x2f5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1348), GPR_U32(ctx, 7));
    // 0x2f5c30: 0xafa90548  sw          $t1, 0x548($sp)
    ctx->pc = 0x2f5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1352), GPR_U32(ctx, 9));
    // 0x2f5c34: 0xc0bdf7a  jal         func_2F7DE8
    ctx->pc = 0x2F5C34u;
    SET_GPR_U32(ctx, 31, 0x2F5C3Cu);
    ctx->pc = 0x2F5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C34u;
    // 0x2f5c38: 0xafa0054c  sw          $zero, 0x54C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7DE8u, 0x2F5C34u, 0x2F5C3Cu)) {
        return;
    }
    ctx->pc = 0x2F5C3Cu;
label_2f5c3c:
    // 0x2f5c3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5C3Cu;
    {
        const bool branch_taken_0x2f5c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C3Cu;
        // 0x2f5c40: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c3c) {
            ctx->pc = 0x2F5C50u;
            goto label_2f5c50;
        }
    }
    ctx->pc = 0x2F5C44u;
    // 0x2f5c44: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5c48: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x2F5C48u;
    {
        const bool branch_taken_0x2f5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C48u;
        // 0x2f5c4c: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c48) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5C50u;
label_2f5c50:
    // 0x2f5c50: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f5c54: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x2f5c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f5c58: 0x2442b748  addiu       $v0, $v0, -0x48B8
    ctx->pc = 0x2f5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948680));
    // 0x2f5c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5c60: 0x8c44088c  lw          $a0, 0x88C($v0)
    ctx->pc = 0x2f5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
    // 0x2f5c64: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2F5C64u;
    {
        const bool branch_taken_0x2f5c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C64u;
        // 0x2f5c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c64) {
            ctx->pc = 0x2F5E8Cu;
            goto label_2f5e8c;
        }
    }
    ctx->pc = 0x2F5C6Cu;
    // 0x2f5c6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c70: 0xc0bc816  jal         func_2F2058
    ctx->pc = 0x2F5C70u;
    SET_GPR_U32(ctx, 31, 0x2F5C78u);
    ctx->pc = 0x2F5C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C70u;
    // 0x2f5c74: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2058u, 0x2F5C70u, 0x2F5C78u)) {
        return;
    }
    ctx->pc = 0x2F5C78u;
label_2f5c78:
    // 0x2f5c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5C78u;
    {
        const bool branch_taken_0x2f5c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C78u;
        // 0x2f5c7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c78) {
            ctx->pc = 0x2F5C98u;
            goto label_2f5c98;
        }
    }
    ctx->pc = 0x2F5C80u;
    // 0x2f5c80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f5c84: 0x24520158  addiu       $s2, $v0, 0x158
    ctx->pc = 0x2f5c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x2f5c88: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F5C88u;
    SET_GPR_U32(ctx, 31, 0x2F5C90u);
    ctx->pc = 0x2F5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C88u;
    // 0x2f5c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F5C88u, 0x2F5C90u)) {
        return;
    }
    ctx->pc = 0x2F5C90u;
label_2f5c90:
    // 0x2f5c90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5C90u;
    {
        const bool branch_taken_0x2f5c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C90u;
        // 0x2f5c94: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c90) {
            ctx->pc = 0x2F5CA4u;
            goto label_2f5ca4;
        }
    }
    ctx->pc = 0x2F5C98u;
label_2f5c98:
    // 0x2f5c98: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5c9c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x2F5C9Cu;
    {
        const bool branch_taken_0x2f5c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C9Cu;
        // 0x2f5ca0: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c9c) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5CA4u;
label_2f5ca4:
    // 0x2f5ca4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ca8: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F5CA8u;
    SET_GPR_U32(ctx, 31, 0x2F5CB0u);
    ctx->pc = 0x2F5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CA8u;
    // 0x2f5cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F5CA8u, 0x2F5CB0u)) {
        return;
    }
    ctx->pc = 0x2F5CB0u;
label_2f5cb0:
    // 0x2f5cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cb4: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x2F5CB4u;
    SET_GPR_U32(ctx, 31, 0x2F5CBCu);
    ctx->pc = 0x2F5CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CB4u;
    // 0x2f5cb8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x2F5CB4u, 0x2F5CBCu)) {
        return;
    }
    ctx->pc = 0x2F5CBCu;
label_2f5cbc:
    // 0x2f5cbc: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2f5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2f5cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cc4: 0xafa30550  sw          $v1, 0x550($sp)
    ctx->pc = 0x2f5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 3));
    // 0x2f5cc8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F5CC8u;
    SET_GPR_U32(ctx, 31, 0x2F5CD0u);
    ctx->pc = 0x2F5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CC8u;
    // 0x2f5ccc: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F5CC8u, 0x2F5CD0u)) {
        return;
    }
    ctx->pc = 0x2F5CD0u;
label_2f5cd0:
    // 0x2f5cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5cd4: 0x8fa40550  lw          $a0, 0x550($sp)
    ctx->pc = 0x2f5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x2f5cd8: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F5CD8u;
    SET_GPR_U32(ctx, 31, 0x2F5CE0u);
    ctx->pc = 0x2F5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CD8u;
    // 0x2f5cdc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F5CD8u, 0x2F5CE0u)) {
        return;
    }
    ctx->pc = 0x2F5CE0u;
label_2f5ce0:
    // 0x2f5ce0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F5CE0u;
    SET_GPR_U32(ctx, 31, 0x2F5CE8u);
    ctx->pc = 0x2F5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CE0u;
    // 0x2f5ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F5CE0u, 0x2F5CE8u)) {
        return;
    }
    ctx->pc = 0x2F5CE8u;
label_2f5ce8:
    // 0x2f5ce8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5CE8u;
    {
        const bool branch_taken_0x2f5ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CE8u;
        // 0x2f5cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ce8) {
            ctx->pc = 0x2F5D0Cu;
            goto label_2f5d0c;
        }
    }
    ctx->pc = 0x2F5CF0u;
    // 0x2f5cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cf8: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x2f5cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2f5cfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5D04u;
    {
        const bool branch_taken_0x2f5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D04u;
        // 0x2f5d08: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d04) {
            ctx->pc = 0x2F5D20u;
            goto label_2f5d20;
        }
    }
    ctx->pc = 0x2F5D0Cu;
label_2f5d0c:
    // 0x2f5d0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d10: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x2f5d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x2f5d14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d20:
    // 0x2f5d20: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F5D20u;
    SET_GPR_U32(ctx, 31, 0x2F5D28u);
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F5D20u, 0x2F5D28u)) {
        return;
    }
    ctx->pc = 0x2F5D28u;
label_2f5d28:
    // 0x2f5d28: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d30: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5d34: 0x148300e9  bne         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2F5D34u;
    {
        const bool branch_taken_0x2f5d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D34u;
        // 0x2f5d38: 0xafa20540  sw          $v0, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d34) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5D3Cu;
    // 0x2f5d3c: 0x97a20340  lhu         $v0, 0x340($sp)
    ctx->pc = 0x2f5d3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2f5d40: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f5d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2f5d44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5D44u;
    {
        const bool branch_taken_0x2f5d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D44u;
        // 0x2f5d48: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d44) {
            ctx->pc = 0x2F5D58u;
            goto label_2f5d58;
        }
    }
    ctx->pc = 0x2F5D4Cu;
    // 0x2f5d4c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5d50: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2F5D50u;
    {
        const bool branch_taken_0x2f5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D50u;
        // 0x2f5d54: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d50) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5D58u;
label_2f5d58:
    // 0x2f5d58: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x2f5d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2f5d5c: 0xafa50554  sw          $a1, 0x554($sp)
    ctx->pc = 0x2f5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1364), GPR_U32(ctx, 5));
    // 0x2f5d60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d64: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F5D64u;
    SET_GPR_U32(ctx, 31, 0x2F5D6Cu);
    ctx->pc = 0x2F5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D64u;
    // 0x2f5d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F5D64u, 0x2F5D6Cu)) {
        return;
    }
    ctx->pc = 0x2F5D6Cu;
label_2f5d6c:
    // 0x2f5d6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f5d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d70: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5D70u;
    {
        const bool branch_taken_0x2f5d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D70u;
        // 0x2f5d74: 0xafa20540  sw          $v0, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d70) {
            ctx->pc = 0x2F5DBCu;
            goto label_2f5dbc;
        }
    }
    ctx->pc = 0x2F5D78u;
    // 0x2f5d78: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x2f5d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f5d7c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f5d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f5d80: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2F5D80u;
    {
        const bool branch_taken_0x2f5d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D80u;
        // 0x2f5d84: 0x27b30180  addiu       $s3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d80) {
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F5D88u;
    // 0x2f5d88: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2f5d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2f5d8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d90: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F5D90u;
    SET_GPR_U32(ctx, 31, 0x2F5D98u);
    ctx->pc = 0x2F5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D90u;
    // 0x2f5d94: 0x24c50140  addiu       $a1, $a2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F5D90u, 0x2F5D98u)) {
        return;
    }
    ctx->pc = 0x2F5D98u;
label_2f5d98:
    // 0x2f5d98: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2F5D98u;
    {
        const bool branch_taken_0x2f5d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D98u;
        // 0x2f5d9c: 0x8fa60350  lw          $a2, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d98) {
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F5DA0u;
    // 0x2f5da0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5da4: 0x8fa50554  lw          $a1, 0x554($sp)
    ctx->pc = 0x2f5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
    // 0x2f5da8: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F5DA8u;
    SET_GPR_U32(ctx, 31, 0x2F5DB0u);
    ctx->pc = 0x2F5DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DA8u;
    // 0x2f5dac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F5DA8u, 0x2F5DB0u)) {
        return;
    }
    ctx->pc = 0x2F5DB0u;
label_2f5db0:
    // 0x2f5db0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f5db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5db4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F5DB4u;
    {
        const bool branch_taken_0x2f5db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DB4u;
        // 0x2f5db8: 0xafa20540  sw          $v0, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5db4) {
            ctx->pc = 0x2F5DE0u;
            goto label_2f5de0;
        }
    }
    ctx->pc = 0x2F5DBCu;
label_2f5dbc:
    // 0x2f5dbc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5dc0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f5dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f5dc4: 0x546200c5  bnel        $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2F5DC4u;
    {
        const bool branch_taken_0x2f5dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5dc4) {
            ctx->pc = 0x2F5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5DC4u;
            // 0x2f5dc8: 0x8fa20540  lw          $v0, 0x540($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5DCCu;
    // 0x2f5dcc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5dd0: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x2f5dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
    // 0x2f5dd4: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x2f5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
    // 0x2f5dd8: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x2F5DD8u;
    {
        const bool branch_taken_0x2f5dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DD8u;
        // 0x2f5ddc: 0x8fa20540  lw          $v0, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dd8) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5DE0u;
label_2f5de0:
    // 0x2f5de0: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x2f5de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f5de4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f5de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f5de8: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2F5DE8u;
    {
        const bool branch_taken_0x2f5de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DE8u;
        // 0x2f5dec: 0x3c07006b  lui         $a3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5de8) {
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F5DF0u;
    // 0x2f5df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5df4: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F5DF4u;
    SET_GPR_U32(ctx, 31, 0x2F5DFCu);
    ctx->pc = 0x2F5DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DF4u;
    // 0x2f5df8: 0x24e50148  addiu       $a1, $a3, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F5DF4u, 0x2F5DFCu)) {
        return;
    }
    ctx->pc = 0x2F5DFCu;
label_2f5dfc:
    // 0x2f5dfc: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2F5DFCu;
    {
        const bool branch_taken_0x2f5dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DFCu;
        // 0x2f5e00: 0x8fa30344  lw          $v1, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dfc) {
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F5E04u;
    // 0x2f5e04: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2f5e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f5e08: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2F5E08u;
    {
        const bool branch_taken_0x2f5e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e08) {
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F5E10u;
    // 0x2f5e10: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x2f5e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5e14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5E14u;
    {
        const bool branch_taken_0x2f5e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E14u;
        // 0x2f5e18: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e14) {
            ctx->pc = 0x2F5E30u;
            goto label_2f5e30;
        }
    }
    ctx->pc = 0x2F5E1Cu;
    // 0x2f5e1c: 0x8fa80548  lw          $t0, 0x548($sp)
    ctx->pc = 0x2f5e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x2f5e20: 0x550000ad  bnel        $t0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x2F5E20u;
    {
        const bool branch_taken_0x2f5e20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e20) {
            ctx->pc = 0x2F5E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E20u;
            // 0x2f5e24: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60D8u;
            goto label_2f60d8;
        }
    }
    ctx->pc = 0x2F5E28u;
    // 0x2f5e28: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2F5E28u;
    {
        const bool branch_taken_0x2f5e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E28u;
        // 0x2f5e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e28) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5E30u;
label_2f5e30:
    // 0x2f5e30: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2F5E30u;
    {
        const bool branch_taken_0x2f5e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E30u;
        // 0x2f5e34: 0x8fb40350  lw          $s4, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e30) {
            ctx->pc = 0x2F60C0u;
            goto label_2f60c0;
        }
    }
    ctx->pc = 0x2F5E38u;
    // 0x2f5e38: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x2f5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2f5e3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5E3Cu;
    {
        const bool branch_taken_0x2f5e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E3Cu;
        // 0x2f5e40: 0xafa20344  sw          $v0, 0x344($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e3c) {
            ctx->pc = 0x2F5E58u;
            goto label_2f5e58;
        }
    }
    ctx->pc = 0x2F5E44u;
    // 0x2f5e44: 0x8fa90548  lw          $t1, 0x548($sp)
    ctx->pc = 0x2f5e44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x2f5e48: 0x552000a3  bnel        $t1, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2F5E48u;
    {
        const bool branch_taken_0x2f5e48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e48) {
            ctx->pc = 0x2F5E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E48u;
            // 0x2f5e4c: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60D8u;
            goto label_2f60d8;
        }
    }
    ctx->pc = 0x2F5E50u;
    // 0x2f5e50: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2F5E50u;
    {
        const bool branch_taken_0x2f5e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E50u;
        // 0x2f5e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e50) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5E58u;
label_2f5e58:
    // 0x2f5e58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f5e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e60: 0xc0bc96e  jal         func_2F25B8
    ctx->pc = 0x2F5E60u;
    SET_GPR_U32(ctx, 31, 0x2F5E68u);
    ctx->pc = 0x2F5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E60u;
    // 0x2f5e64: 0x27a60540  addiu       $a2, $sp, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F25B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F25B8u, 0x2F5E60u, 0x2F5E68u)) {
        return;
    }
    ctx->pc = 0x2F5E68u;
label_2f5e68:
    // 0x2f5e68: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5e6c: 0x8fa40540  lw          $a0, 0x540($sp)
    ctx->pc = 0x2f5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x2f5e70: 0x34630059  ori         $v1, $v1, 0x59
    ctx->pc = 0x2f5e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)89);
    // 0x2f5e74: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2F5E74u;
    {
        const bool branch_taken_0x2f5e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E74u;
        // 0x2f5e78: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e74) {
            ctx->pc = 0x2F6098u;
            goto label_2f6098;
        }
    }
    ctx->pc = 0x2F5E7Cu;
    // 0x2f5e7c: 0x10800091  beqz        $a0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2F5E7Cu;
    {
        const bool branch_taken_0x2f5e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E7Cu;
        // 0x2f5e80: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e7c) {
            ctx->pc = 0x2F60C4u;
            goto label_2f60c4;
        }
    }
    ctx->pc = 0x2F5E84u;
label_2f5e84:
    // 0x2f5e84: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2F5E84u;
    {
        const bool branch_taken_0x2f5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E84u;
        // 0x2f5e88: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e84) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5E8Cu;
label_2f5e8c:
    // 0x2f5e8c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5e90: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2F5E90u;
    {
        const bool branch_taken_0x2f5e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E90u;
        // 0x2f5e94: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e90) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F5E98u;
label_2f5e98:
    // 0x2f5e98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e9c: 0x2450c880  addiu       $s0, $v0, -0x3780
    ctx->pc = 0x2f5e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x2f5ea0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f5ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ea8: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F5EA8u;
    SET_GPR_U32(ctx, 31, 0x2F5EB0u);
    ctx->pc = 0x2F5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5EA8u;
    // 0x2f5eac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F5EA8u, 0x2F5EB0u)) {
        return;
    }
    ctx->pc = 0x2F5EB0u;
label_2f5eb0:
    // 0x2f5eb0: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F5EB0u;
    {
        const bool branch_taken_0x2f5eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EB0u;
        // 0x2f5eb4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5eb0) {
            ctx->pc = 0x2F5E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5e8c;
        }
    }
    ctx->pc = 0x2F5EB8u;
    // 0x2f5eb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f5eb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ebc: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x2f5ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_2f5ec0:
    // 0x2f5ec0: 0x8fa40554  lw          $a0, 0x554($sp)
    ctx->pc = 0x2f5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
    // 0x2f5ec4: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x2f5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x2f5ec8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5EC8u;
    {
        const bool branch_taken_0x2f5ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EC8u;
        // 0x2f5ecc: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ec8) {
            ctx->pc = 0x2F5F30u;
            goto label_2f5f30;
        }
    }
    ctx->pc = 0x2F5ED0u;
    // 0x2f5ed0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f5ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ed4:
    // 0x2f5ed4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2f5ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f5ed8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2f5ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f5edc: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2f5edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f5ee0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2f5ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f5ee4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2f5ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f5ee8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2f5ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f5eec: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2f5eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f5ef0: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2f5ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f5ef4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2f5ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5ef8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2f5ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5efc: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2f5efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5f00: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2f5f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5f04: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2f5f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5f08: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2f5f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5f0c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2f5f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5f10: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2f5f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5f14: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f5f18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f5f1c: 0x0  nop
    ctx->pc = 0x2f5f1cu;
    // NOP
    // 0x2f5f20: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F5F20u;
    {
        const bool branch_taken_0x2f5f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5f20) {
            ctx->pc = 0x2F5ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5ed4;
        }
    }
    ctx->pc = 0x2F5F28u;
    // 0x2f5f28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5F28u;
    {
        const bool branch_taken_0x2f5f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F28u;
        // 0x2f5f2c: 0x97a30140  lhu         $v1, 0x140($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f28) {
            ctx->pc = 0x2F5F6Cu;
            goto label_2f5f6c;
        }
    }
    ctx->pc = 0x2F5F30u;
label_2f5f30:
    // 0x2f5f30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f5f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f34:
    // 0x2f5f34: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2f5f34u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5f38: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2f5f38u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f5f3c: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2f5f3cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f5f40: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2f5f40u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f5f44: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x2f5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x2f5f48: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2f5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2f5f4c: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2f5f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2f5f50: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2f5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2f5f54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f5f58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2f5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2f5f5c: 0x0  nop
    ctx->pc = 0x2f5f5cu;
    // NOP
    // 0x2f5f60: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F5F60u;
    {
        const bool branch_taken_0x2f5f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f5f60) {
            ctx->pc = 0x2F5F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5f34;
        }
    }
    ctx->pc = 0x2F5F68u;
    // 0x2f5f68: 0x97a30140  lhu         $v1, 0x140($sp)
    ctx->pc = 0x2f5f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_2f5f6c:
    // 0x2f5f6c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2f5f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2f5f70: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F5F70u;
    {
        const bool branch_taken_0x2f5f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F70u;
        // 0x2f5f74: 0xa3a0019f  sb          $zero, 0x19F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 415), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f70) {
            ctx->pc = 0x2F6044u;
            goto label_2f6044;
        }
    }
    ctx->pc = 0x2F5F78u;
    // 0x2f5f78: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2f5f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2f5f7c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F5F7Cu;
    {
        const bool branch_taken_0x2f5f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F7Cu;
        // 0x2f5f80: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f7c) {
            ctx->pc = 0x2F6048u;
            goto label_2f6048;
        }
    }
    ctx->pc = 0x2F5F84u;
    // 0x2f5f84: 0x8fa50550  lw          $a1, 0x550($sp)
    ctx->pc = 0x2f5f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x2f5f88: 0xc0bc75c  jal         func_2F1D70
    ctx->pc = 0x2F5F88u;
    SET_GPR_U32(ctx, 31, 0x2F5F90u);
    ctx->pc = 0x2F5F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F88u;
    // 0x2f5f8c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1D70u, 0x2F5F88u, 0x2F5F90u)) {
        return;
    }
    ctx->pc = 0x2F5F90u;
label_2f5f90:
    // 0x2f5f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5f94: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F5F94u;
    {
        const bool branch_taken_0x2f5f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f5f94) {
            ctx->pc = 0x2F5F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5F94u;
            // 0x2f5f98: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6048u;
            goto label_2f6048;
        }
    }
    ctx->pc = 0x2F5F9Cu;
    // 0x2f5f9c: 0x56e00029  bnel        $s7, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F5F9Cu;
    {
        const bool branch_taken_0x2f5f9c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f9c) {
            ctx->pc = 0x2F5FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5F9Cu;
            // 0x2f5fa0: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6044u;
            goto label_2f6044;
        }
    }
    ctx->pc = 0x2F5FA4u;
    // 0x2f5fa4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F5FA4u;
    {
        const bool branch_taken_0x2f5fa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FA4u;
        // 0x2f5fa8: 0x8fa80544  lw          $t0, 0x544($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fa4) {
            ctx->pc = 0x2F6020u;
            goto label_2f6020;
        }
    }
    ctx->pc = 0x2F5FACu;
    // 0x2f5fac: 0x1900001c  blez        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F5FACu;
    {
        const bool branch_taken_0x2f5fac = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2F5FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FACu;
        // 0x2f5fb0: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fac) {
            ctx->pc = 0x2F6020u;
            goto label_2f6020;
        }
    }
    ctx->pc = 0x2F5FB4u;
    // 0x2f5fb4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2f5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2f5fb8: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x2f5fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f5fbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f5fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5fc0: 0x6ba9014f  ldl         $t1, 0x14F($sp)
    ctx->pc = 0x2f5fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f5fc4: 0x6fa90148  ldr         $t1, 0x148($sp)
    ctx->pc = 0x2f5fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f5fc8: 0xb2290007  sdl         $t1, 0x7($s1)
    ctx->pc = 0x2f5fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5fcc: 0xb6290000  sdr         $t1, 0x0($s1)
    ctx->pc = 0x2f5fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5fd0: 0x6ba9015f  ldl         $t1, 0x15F($sp)
    ctx->pc = 0x2f5fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f5fd4: 0x6fa90158  ldr         $t1, 0x158($sp)
    ctx->pc = 0x2f5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f5fd8: 0xb229000f  sdl         $t1, 0xF($s1)
    ctx->pc = 0x2f5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5fdc: 0xb6290008  sdr         $t1, 0x8($s1)
    ctx->pc = 0x2f5fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5fe0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2f5fe4: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F5FE4u;
    SET_GPR_U32(ctx, 31, 0x2F5FECu);
    ctx->pc = 0x2F5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FE4u;
    // 0x2f5fe8: 0xa6220014  sh          $v0, 0x14($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F5FE4u, 0x2F5FECu)) {
        return;
    }
    ctx->pc = 0x2F5FECu;
label_2f5fec:
    // 0x2f5fec: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x2f5fecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x2f5ff0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5ff4: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F5FF4u;
    SET_GPR_U32(ctx, 31, 0x2F5FFCu);
    ctx->pc = 0x2F5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FF4u;
    // 0x2f5ff8: 0x25250140  addiu       $a1, $t1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F5FF4u, 0x2F5FFCu)) {
        return;
    }
    ctx->pc = 0x2F5FFCu;
label_2f5ffc:
    // 0x2f5ffc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5FFCu;
    {
        const bool branch_taken_0x2f5ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FFCu;
        // 0x2f6000: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ffc) {
            ctx->pc = 0x2F6010u;
            goto label_2f6010;
        }
    }
    ctx->pc = 0x2F6004u;
    // 0x2f6004: 0x97a20340  lhu         $v0, 0x340($sp)
    ctx->pc = 0x2f6004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2f6008: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x2f6008u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f600c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2f6010:
    // 0x2f6010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6014: 0x24450148  addiu       $a1, $v0, 0x148
    ctx->pc = 0x2f6014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x2f6018: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F6018u;
    SET_GPR_U32(ctx, 31, 0x2F6020u);
    ctx->pc = 0x2F601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6018u;
    // 0x2f601c: 0x26310038  addiu       $s1, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F6018u, 0x2F6020u)) {
        return;
    }
    ctx->pc = 0x2F6020u;
label_2f6020:
    // 0x2f6020: 0x8fa30544  lw          $v1, 0x544($sp)
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
    // 0x2f6024: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6024u;
    {
        const bool branch_taken_0x2f6024 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2F6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6024u;
        // 0x2f6028: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6024) {
            ctx->pc = 0x2F6044u;
            goto label_2f6044;
        }
    }
    ctx->pc = 0x2F602Cu;
    // 0x2f602c: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x2f602cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f6030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6030u;
    {
        const bool branch_taken_0x2f6030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6030u;
        // 0x2f6034: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6030) {
            ctx->pc = 0x2F6048u;
            goto label_2f6048;
        }
    }
    ctx->pc = 0x2F6038u;
    // 0x2f6038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f603c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F603Cu;
    {
        const bool branch_taken_0x2f603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F603Cu;
        // 0x2f6040: 0xafa5054c  sw          $a1, 0x54C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f603c) {
            ctx->pc = 0x2F6068u;
            goto label_2f6068;
        }
    }
    ctx->pc = 0x2F6044u;
label_2f6044:
    // 0x2f6044: 0x8fa20344  lw          $v0, 0x344($sp)
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_2f6048:
    // 0x2f6048: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f604c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F604Cu;
    {
        const bool branch_taken_0x2f604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F604Cu;
        // 0x2f6050: 0xafa20344  sw          $v0, 0x344($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f604c) {
            ctx->pc = 0x2F60A4u;
            goto label_2f60a4;
        }
    }
    ctx->pc = 0x2F6054u;
    // 0x2f6054: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2f6054u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2f6058: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x2f6058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f605c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x2f605cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f6060: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x2F6060u;
    {
        const bool branch_taken_0x2f6060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6060u;
        // 0x2f6064: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6060) {
            ctx->pc = 0x2F5EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5ec0;
        }
    }
    ctx->pc = 0x2F6068u;
label_2f6068:
    // 0x2f6068: 0x8fa6054c  lw          $a2, 0x54C($sp)
    ctx->pc = 0x2f6068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
    // 0x2f606c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6070: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F6070u;
    {
        const bool branch_taken_0x2f6070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6070u;
        // 0x2f6074: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6070) {
            ctx->pc = 0x2F60CCu;
            goto label_2f60cc;
        }
    }
    ctx->pc = 0x2F6078u;
    // 0x2f6078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f6078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f607c: 0xc0bc96e  jal         func_2F25B8
    ctx->pc = 0x2F607Cu;
    SET_GPR_U32(ctx, 31, 0x2F6084u);
    ctx->pc = 0x2F6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F607Cu;
    // 0x2f6080: 0x27a60540  addiu       $a2, $sp, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F25B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F25B8u, 0x2F607Cu, 0x2F6084u)) {
        return;
    }
    ctx->pc = 0x2F6084u;
label_2f6084:
    // 0x2f6084: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f6084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6088: 0x8fa40540  lw          $a0, 0x540($sp)
    ctx->pc = 0x2f6088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x2f608c: 0x34630059  ori         $v1, $v1, 0x59
    ctx->pc = 0x2f608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)89);
    // 0x2f6090: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6090u;
    {
        const bool branch_taken_0x2f6090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6090u;
        // 0x2f6094: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6090) {
            ctx->pc = 0x2F60B0u;
            goto label_2f60b0;
        }
    }
    ctx->pc = 0x2F6098u;
label_2f6098:
    // 0x2f6098: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f6098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f609c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F609Cu;
    {
        const bool branch_taken_0x2f609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F609Cu;
        // 0x2f60a0: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f609c) {
            ctx->pc = 0x2F60DCu;
            goto label_2f60dc;
        }
    }
    ctx->pc = 0x2F60A4u;
label_2f60a4:
    // 0x2f60a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f60a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60a8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F60A8u;
    {
        const bool branch_taken_0x2f60a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60A8u;
        // 0x2f60ac: 0xafa7054c  sw          $a3, 0x54C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60a8) {
            ctx->pc = 0x2F6068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6068;
        }
    }
    ctx->pc = 0x2F60B0u;
label_2f60b0:
    // 0x2f60b0: 0x1480ff74  bnez        $a0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x2F60B0u;
    {
        const bool branch_taken_0x2f60b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60B0u;
        // 0x2f60b4: 0x8fa8054c  lw          $t0, 0x54C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60b0) {
            ctx->pc = 0x2F5E84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5e84;
        }
    }
    ctx->pc = 0x2F60B8u;
    // 0x2f60b8: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F60B8u;
    {
        const bool branch_taken_0x2f60b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60B8u;
        // 0x2f60bc: 0x8fa90548  lw          $t1, 0x548($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60b8) {
            ctx->pc = 0x2F60D0u;
            goto label_2f60d0;
        }
    }
    ctx->pc = 0x2F60C0u;
label_2f60c0:
    // 0x2f60c0: 0x8fa20344  lw          $v0, 0x344($sp)
    ctx->pc = 0x2f60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_2f60c4:
    // 0x2f60c4: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x2F60C4u;
    {
        const bool branch_taken_0x2f60c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60C4u;
        // 0x2f60c8: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60c4) {
            ctx->pc = 0x2F5E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5e98;
        }
    }
    ctx->pc = 0x2F60CCu;
label_2f60cc:
    // 0x2f60cc: 0x8fa90548  lw          $t1, 0x548($sp)
    ctx->pc = 0x2f60ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_2f60d0:
    // 0x2f60d0: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F60D0u;
    {
        const bool branch_taken_0x2f60d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f60d0) {
            ctx->pc = 0x2F60D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F60D0u;
            // 0x2f60d4: 0xad3e0000  sw          $fp, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F60D8u;
            goto label_2f60d8;
        }
    }
    ctx->pc = 0x2F60D8u;
label_2f60d8:
    // 0x2f60d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f60d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f60dc:
    // 0x2f60dc: 0xdfbf05f0  ld          $ra, 0x5F0($sp)
    ctx->pc = 0x2f60dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x2f60e0: 0xdfbe05e0  ld          $fp, 0x5E0($sp)
    ctx->pc = 0x2f60e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x2f60e4: 0xdfb705d0  ld          $s7, 0x5D0($sp)
    ctx->pc = 0x2f60e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2f60e8: 0xdfb605c0  ld          $s6, 0x5C0($sp)
    ctx->pc = 0x2f60e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x2f60ec: 0xdfb505b0  ld          $s5, 0x5B0($sp)
    ctx->pc = 0x2f60ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2f60f0: 0xdfb405a0  ld          $s4, 0x5A0($sp)
    ctx->pc = 0x2f60f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x2f60f4: 0xdfb30590  ld          $s3, 0x590($sp)
    ctx->pc = 0x2f60f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2f60f8: 0xdfb20580  ld          $s2, 0x580($sp)
    ctx->pc = 0x2f60f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x2f60fc: 0xdfb10570  ld          $s1, 0x570($sp)
    ctx->pc = 0x2f60fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x2f6100: 0xdfb00560  ld          $s0, 0x560($sp)
    ctx->pc = 0x2f6100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x2f6104: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6104u;
        // 0x2f6108: 0x27bd0600  addiu       $sp, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F610Cu;
    // 0x2f610c: 0x0  nop
    ctx->pc = 0x2f610cu;
    // NOP
    ctx->pc = 0x2f6110u;
}
