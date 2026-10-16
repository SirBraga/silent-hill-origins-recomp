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

// Function: sub_001A0DD8
// Address: 0x1a0dd8 - 0x1a1198
void sub_001A0DD8_0x1a0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0DD8_0x1a0dd8");
#endif

    switch (ctx->pc) {
        case 0x1a0e14u: goto label_1a0e14;
        case 0x1a0e20u: goto label_1a0e20;
        case 0x1a0e34u: goto label_1a0e34;
        case 0x1a0e50u: goto label_1a0e50;
        case 0x1a0e60u: goto label_1a0e60;
        case 0x1a0e80u: goto label_1a0e80;
        case 0x1a0e9cu: goto label_1a0e9c;
        case 0x1a0eb0u: goto label_1a0eb0;
        case 0x1a0ec8u: goto label_1a0ec8;
        case 0x1a0ef4u: goto label_1a0ef4;
        case 0x1a0f08u: goto label_1a0f08;
        case 0x1a0f20u: goto label_1a0f20;
        case 0x1a0f44u: goto label_1a0f44;
        case 0x1a0f58u: goto label_1a0f58;
        case 0x1a0f70u: goto label_1a0f70;
        case 0x1a0f9cu: goto label_1a0f9c;
        case 0x1a0fb0u: goto label_1a0fb0;
        case 0x1a0fc8u: goto label_1a0fc8;
        case 0x1a0ff4u: goto label_1a0ff4;
        case 0x1a1008u: goto label_1a1008;
        case 0x1a1020u: goto label_1a1020;
        case 0x1a104cu: goto label_1a104c;
        case 0x1a1060u: goto label_1a1060;
        case 0x1a1078u: goto label_1a1078;
        case 0x1a10acu: goto label_1a10ac;
        case 0x1a10c8u: goto label_1a10c8;
        case 0x1a10e0u: goto label_1a10e0;
        case 0x1a10fcu: goto label_1a10fc;
        case 0x1a1114u: goto label_1a1114;
        case 0x1a1128u: goto label_1a1128;
        case 0x1a1140u: goto label_1a1140;
        default: break;
    }

    ctx->pc = 0x1a0dd8u;

    // 0x1a0dd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a0dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a0ddc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a0ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a0de0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1a0de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1a0de4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a0de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0de8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a0de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0dec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a0df0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1a0df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1a0df4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1a0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1a0df8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1a0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1a0dfc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1a0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1a0e00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1a0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1a0e04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1a0e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1a0e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0e0c: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E14u);
    ctx->pc = 0x1A0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E0Cu;
    // 0x1a0e10: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0E0Cu, 0x1A0E14u)) {
        return;
    }
    ctx->pc = 0x1A0E14u;
label_1a0e14:
    // 0x1a0e14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a0e18: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1A0E18u;
    SET_GPR_U32(ctx, 31, 0x1A0E20u);
    ctx->pc = 0x1A0E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E18u;
    // 0x1a0e1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1A0E18u, 0x1A0E20u)) {
        return;
    }
    ctx->pc = 0x1A0E20u;
label_1a0e20:
    // 0x1a0e20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a0e20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a0e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e2c: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E34u);
    ctx->pc = 0x1A0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E2Cu;
    // 0x1a0e30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0E2Cu, 0x1A0E34u)) {
        return;
    }
    ctx->pc = 0x1A0E34u;
label_1a0e34:
    // 0x1a0e34: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a0e38: 0x18400098  blez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1A0E38u;
    {
        const bool branch_taken_0x1a0e38 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E38u;
        // 0x1a0e3c: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e38) {
            ctx->pc = 0x1A109Cu;
            goto label_1a109c;
        }
    }
    ctx->pc = 0x1A0E40u;
    // 0x1a0e40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0e44: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a0e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0e48: 0xc080924  jal         func_202490
    ctx->pc = 0x1A0E48u;
    SET_GPR_U32(ctx, 31, 0x1A0E50u);
    ctx->pc = 0x1A0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E48u;
    // 0x1a0e4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A0E48u, 0x1A0E50u)) {
        return;
    }
    ctx->pc = 0x1A0E50u;
label_1a0e50:
    // 0x1a0e50: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1a0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a0e54: 0x18600091  blez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1A0E54u;
    {
        const bool branch_taken_0x1a0e54 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E54u;
        // 0x1a0e58: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e54) {
            ctx->pc = 0x1A109Cu;
            goto label_1a109c;
        }
    }
    ctx->pc = 0x1A0E5Cu;
    // 0x1a0e5c: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_1a0e60:
    // 0x1a0e60: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a0e64: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1a0e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0e68: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x1a0e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0e6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e70: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a0e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a0e74: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1a0e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0e78: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0E78u;
    SET_GPR_U32(ctx, 31, 0x1A0E80u);
    ctx->pc = 0x1A0E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E78u;
    // 0x1a0e7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0E78u, 0x1A0E80u)) {
        return;
    }
    ctx->pc = 0x1A0E80u;
label_1a0e80:
    // 0x1a0e80: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1a0e84: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0E84u;
    {
        const bool branch_taken_0x1a0e84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E84u;
        // 0x1a0e88: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e84) {
            ctx->pc = 0x1A0ED8u;
            goto label_1a0ed8;
        }
    }
    ctx->pc = 0x1A0E8Cu;
    // 0x1a0e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0e90: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a0e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0e94: 0xc080924  jal         func_202490
    ctx->pc = 0x1A0E94u;
    SET_GPR_U32(ctx, 31, 0x1A0E9Cu);
    ctx->pc = 0x1A0E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E94u;
    // 0x1a0e98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A0E94u, 0x1A0E9Cu)) {
        return;
    }
    ctx->pc = 0x1A0E9Cu;
label_1a0e9c:
    // 0x1a0e9c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1a0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1a0ea0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0EA0u;
    {
        const bool branch_taken_0x1a0ea0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EA0u;
        // 0x1a0ea4: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ea0) {
            ctx->pc = 0x1A0ED8u;
            goto label_1a0ed8;
        }
    }
    ctx->pc = 0x1A0EA8u;
    // 0x1a0ea8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a0ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eac: 0x0  nop
    ctx->pc = 0x1a0eacu;
    // NOP
label_1a0eb0:
    // 0x1a0eb0: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1a0eb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eb8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1a0eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1a0ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a0ec0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0EC0u;
    SET_GPR_U32(ctx, 31, 0x1A0EC8u);
    ctx->pc = 0x1A0EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EC0u;
    // 0x1a0ec4: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0EC0u, 0x1A0EC8u)) {
        return;
    }
    ctx->pc = 0x1A0EC8u;
label_1a0ec8:
    // 0x1a0ec8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1a0ecc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a0eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0ed0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A0ED0u;
    {
        const bool branch_taken_0x1a0ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0ED0u;
        // 0x1a0ed4: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ed0) {
            ctx->pc = 0x1A0EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0eb0;
        }
    }
    ctx->pc = 0x1A0ED8u;
label_1a0ed8:
    // 0x1a0ed8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1a0edc: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0EDCu;
    {
        const bool branch_taken_0x1a0edc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EDCu;
        // 0x1a0ee0: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0edc) {
            ctx->pc = 0x1A0F30u;
            goto label_1a0f30;
        }
    }
    ctx->pc = 0x1A0EE4u;
    // 0x1a0ee4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0ee8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a0ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0eec: 0xc080924  jal         func_202490
    ctx->pc = 0x1A0EECu;
    SET_GPR_U32(ctx, 31, 0x1A0EF4u);
    ctx->pc = 0x1A0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EECu;
    // 0x1a0ef0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A0EECu, 0x1A0EF4u)) {
        return;
    }
    ctx->pc = 0x1A0EF4u;
label_1a0ef4:
    // 0x1a0ef4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1a0ef8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0EF8u;
    {
        const bool branch_taken_0x1a0ef8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EF8u;
        // 0x1a0efc: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ef8) {
            ctx->pc = 0x1A0F30u;
            goto label_1a0f30;
        }
    }
    ctx->pc = 0x1A0F00u;
    // 0x1a0f00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a0f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f04: 0x0  nop
    ctx->pc = 0x1a0f04u;
    // NOP
label_1a0f08:
    // 0x1a0f08: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x1a0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1a0f0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f10: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1a0f14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a0f18: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0F18u;
    SET_GPR_U32(ctx, 31, 0x1A0F20u);
    ctx->pc = 0x1A0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F18u;
    // 0x1a0f1c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0F18u, 0x1A0F20u)) {
        return;
    }
    ctx->pc = 0x1A0F20u;
label_1a0f20:
    // 0x1a0f20: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1a0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1a0f24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a0f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0f28: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A0F28u;
    {
        const bool branch_taken_0x1a0f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F28u;
        // 0x1a0f2c: 0x265200dc  addiu       $s2, $s2, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f28) {
            ctx->pc = 0x1A0F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0f08;
        }
    }
    ctx->pc = 0x1A0F30u;
label_1a0f30:
    // 0x1a0f30: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1a0f34: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0F34u;
    {
        const bool branch_taken_0x1a0f34 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1A0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F34u;
        // 0x1a0f38: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f34) {
            ctx->pc = 0x1A0F80u;
            goto label_1a0f80;
        }
    }
    ctx->pc = 0x1A0F3Cu;
    // 0x1a0f3c: 0xc080924  jal         func_202490
    ctx->pc = 0x1A0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0F44u);
    ctx->pc = 0x1A0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F3Cu;
    // 0x1a0f40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A0F3Cu, 0x1A0F44u)) {
        return;
    }
    ctx->pc = 0x1A0F44u;
label_1a0f44:
    // 0x1a0f44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a0f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f48: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1a0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1a0f4c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A0F4Cu;
    {
        const bool branch_taken_0x1a0f4c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F4Cu;
        // 0x1a0f50: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f4c) {
            ctx->pc = 0x1A0F80u;
            goto label_1a0f80;
        }
    }
    ctx->pc = 0x1A0F54u;
    // 0x1a0f54: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1a0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1a0f58:
    // 0x1a0f58: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1a0f5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f60: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a0f64: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1a0f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0f68: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0F68u;
    SET_GPR_U32(ctx, 31, 0x1A0F70u);
    ctx->pc = 0x1A0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F68u;
    // 0x1a0f6c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0F68u, 0x1A0F70u)) {
        return;
    }
    ctx->pc = 0x1A0F70u;
label_1a0f70:
    // 0x1a0f70: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1a0f74: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1a0f74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0f78: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A0F78u;
    {
        const bool branch_taken_0x1a0f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f78) {
            ctx->pc = 0x1A0F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0F78u;
            // 0x1a0f7c: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0f58;
        }
    }
    ctx->pc = 0x1A0F80u;
label_1a0f80:
    // 0x1a0f80: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1a0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0f84: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0F84u;
    {
        const bool branch_taken_0x1a0f84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F84u;
        // 0x1a0f88: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f84) {
            ctx->pc = 0x1A0FD8u;
            goto label_1a0fd8;
        }
    }
    ctx->pc = 0x1A0F8Cu;
    // 0x1a0f8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0f90: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a0f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0f94: 0xc080924  jal         func_202490
    ctx->pc = 0x1A0F94u;
    SET_GPR_U32(ctx, 31, 0x1A0F9Cu);
    ctx->pc = 0x1A0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F94u;
    // 0x1a0f98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A0F94u, 0x1A0F9Cu)) {
        return;
    }
    ctx->pc = 0x1A0F9Cu;
label_1a0f9c:
    // 0x1a0f9c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1a0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0fa0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0FA0u;
    {
        const bool branch_taken_0x1a0fa0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FA0u;
        // 0x1a0fa4: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fa0) {
            ctx->pc = 0x1A0FD8u;
            goto label_1a0fd8;
        }
    }
    ctx->pc = 0x1A0FA8u;
    // 0x1a0fa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a0fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fac: 0x0  nop
    ctx->pc = 0x1a0facu;
    // NOP
label_1a0fb0:
    // 0x1a0fb0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1a0fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a0fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fb8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a0fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a0fbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a0fc0: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A0FC0u;
    SET_GPR_U32(ctx, 31, 0x1A0FC8u);
    ctx->pc = 0x1A0FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FC0u;
    // 0x1a0fc4: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A0FC0u, 0x1A0FC8u)) {
        return;
    }
    ctx->pc = 0x1A0FC8u;
label_1a0fc8:
    // 0x1a0fc8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1a0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1a0fcc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a0fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0fd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A0FD0u;
    {
        const bool branch_taken_0x1a0fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FD0u;
        // 0x1a0fd4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fd0) {
            ctx->pc = 0x1A0FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0FD8u;
label_1a0fd8:
    // 0x1a0fd8: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1a0fdc: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0FDCu;
    {
        const bool branch_taken_0x1a0fdc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FDCu;
        // 0x1a0fe0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fdc) {
            ctx->pc = 0x1A1030u;
            goto label_1a1030;
        }
    }
    ctx->pc = 0x1A0FE4u;
    // 0x1a0fe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0fe8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a0fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0fec: 0xc080924  jal         func_202490
    ctx->pc = 0x1A0FECu;
    SET_GPR_U32(ctx, 31, 0x1A0FF4u);
    ctx->pc = 0x1A0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FECu;
    // 0x1a0ff0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A0FECu, 0x1A0FF4u)) {
        return;
    }
    ctx->pc = 0x1A0FF4u;
label_1a0ff4:
    // 0x1a0ff4: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1a0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1a0ff8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0FF8u;
    {
        const bool branch_taken_0x1a0ff8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FF8u;
        // 0x1a0ffc: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ff8) {
            ctx->pc = 0x1A1030u;
            goto label_1a1030;
        }
    }
    ctx->pc = 0x1A1000u;
    // 0x1a1000: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1004: 0x0  nop
    ctx->pc = 0x1a1004u;
    // NOP
label_1a1008:
    // 0x1a1008: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a100c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1010: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a1014: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1018: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A1018u;
    SET_GPR_U32(ctx, 31, 0x1A1020u);
    ctx->pc = 0x1A101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1018u;
    // 0x1a101c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A1018u, 0x1A1020u)) {
        return;
    }
    ctx->pc = 0x1A1020u;
label_1a1020:
    // 0x1a1020: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1a1024: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1028: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A1028u;
    {
        const bool branch_taken_0x1a1028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1028u;
        // 0x1a102c: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1028) {
            ctx->pc = 0x1A1008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1008;
        }
    }
    ctx->pc = 0x1A1030u;
label_1a1030:
    // 0x1a1030: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1a1034: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A1034u;
    {
        const bool branch_taken_0x1a1034 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1034u;
        // 0x1a1038: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1034) {
            ctx->pc = 0x1A1088u;
            goto label_1a1088;
        }
    }
    ctx->pc = 0x1A103Cu;
    // 0x1a103c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a103cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1040: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a1040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a1044: 0xc080924  jal         func_202490
    ctx->pc = 0x1A1044u;
    SET_GPR_U32(ctx, 31, 0x1A104Cu);
    ctx->pc = 0x1A1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1044u;
    // 0x1a1048: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A1044u, 0x1A104Cu)) {
        return;
    }
    ctx->pc = 0x1A104Cu;
label_1a104c:
    // 0x1a104c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1a104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1a1050: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1050u;
    {
        const bool branch_taken_0x1a1050 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1050u;
        // 0x1a1054: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1050) {
            ctx->pc = 0x1A1088u;
            goto label_1a1088;
        }
    }
    ctx->pc = 0x1A1058u;
    // 0x1a1058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a105c: 0x0  nop
    ctx->pc = 0x1a105cu;
    // NOP
label_1a1060:
    // 0x1a1060: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1a1060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1a1064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1068: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x1a1068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1a106c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1070: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A1070u;
    SET_GPR_U32(ctx, 31, 0x1A1078u);
    ctx->pc = 0x1A1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1070u;
    // 0x1a1074: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A1070u, 0x1A1078u)) {
        return;
    }
    ctx->pc = 0x1A1078u;
label_1a1078:
    // 0x1a1078: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1a107c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a107cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1080: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A1080u;
    {
        const bool branch_taken_0x1a1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1080u;
        // 0x1a1084: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1080) {
            ctx->pc = 0x1A1060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1060;
        }
    }
    ctx->pc = 0x1A1088u;
label_1a1088:
    // 0x1a1088: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a108c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1a108cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1090: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1094: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x1A1094u;
    {
        const bool branch_taken_0x1a1094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1094u;
        // 0x1a1098: 0x24020098  addiu       $v0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1094) {
            ctx->pc = 0x1A0E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0e60;
        }
    }
    ctx->pc = 0x1A109Cu;
label_1a109c:
    // 0x1a109c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10a0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1a10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1a10a4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A10A4u;
    SET_GPR_U32(ctx, 31, 0x1A10ACu);
    ctx->pc = 0x1A10A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10A4u;
    // 0x1a10a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A10A4u, 0x1A10ACu)) {
        return;
    }
    ctx->pc = 0x1A10ACu;
label_1a10ac:
    // 0x1a10ac: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a10b0: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A10B0u;
    {
        const bool branch_taken_0x1a10b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10B0u;
        // 0x1a10b4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10b0) {
            ctx->pc = 0x1A1164u;
            goto label_1a1164;
        }
    }
    ctx->pc = 0x1A10B8u;
    // 0x1a10b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a10bc: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1a10bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a10c0: 0xc080924  jal         func_202490
    ctx->pc = 0x1A10C0u;
    SET_GPR_U32(ctx, 31, 0x1A10C8u);
    ctx->pc = 0x1A10C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10C0u;
    // 0x1a10c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A10C0u, 0x1A10C8u)) {
        return;
    }
    ctx->pc = 0x1A10C8u;
label_1a10c8:
    // 0x1a10c8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1a10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a10cc: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A10CCu;
    {
        const bool branch_taken_0x1a10cc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10CCu;
        // 0x1a10d0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10cc) {
            ctx->pc = 0x1A1164u;
            goto label_1a1164;
        }
    }
    ctx->pc = 0x1A10D4u;
    // 0x1a10d4: 0x2417003c  addiu       $s7, $zero, 0x3C
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a10d8: 0x24160024  addiu       $s6, $zero, 0x24
    ctx->pc = 0x1a10d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a10dc: 0x2171818  mult        $v1, $s0, $s7
    ctx->pc = 0x1a10dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a10e0:
    // 0x1a10e0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1a10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1a10e4: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x1a10e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a10e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a10e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10ec: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1a10ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a10f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a10f4: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A10F4u;
    SET_GPR_U32(ctx, 31, 0x1A10FCu);
    ctx->pc = 0x1A10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10F4u;
    // 0x1a10f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A10F4u, 0x1A10FCu)) {
        return;
    }
    ctx->pc = 0x1A10FCu;
label_1a10fc:
    // 0x1a10fc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1a10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a1100: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1100u;
    {
        const bool branch_taken_0x1a1100 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1A1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1100u;
        // 0x1a1104: 0x962018  mult        $a0, $a0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1100) {
            ctx->pc = 0x1A1150u;
            goto label_1a1150;
        }
    }
    ctx->pc = 0x1A1108u;
    // 0x1a1108: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a1108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a110c: 0xc080924  jal         func_202490
    ctx->pc = 0x1A110Cu;
    SET_GPR_U32(ctx, 31, 0x1A1114u);
    ctx->pc = 0x1A1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A110Cu;
    // 0x1a1110: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A110Cu, 0x1A1114u)) {
        return;
    }
    ctx->pc = 0x1A1114u;
label_1a1114:
    // 0x1a1114: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a1118: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1118u;
    {
        const bool branch_taken_0x1a1118 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1A111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1118u;
        // 0x1a111c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1118) {
            ctx->pc = 0x1A1150u;
            goto label_1a1150;
        }
    }
    ctx->pc = 0x1A1120u;
    // 0x1a1120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a1120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1124: 0x0  nop
    ctx->pc = 0x1a1124u;
    // NOP
label_1a1128:
    // 0x1a1128: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1a112c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1130: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a1134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1138: 0xc093546  jal         func_24D518
    ctx->pc = 0x1A1138u;
    SET_GPR_U32(ctx, 31, 0x1A1140u);
    ctx->pc = 0x1A113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1138u;
    // 0x1a113c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1A1138u, 0x1A1140u)) {
        return;
    }
    ctx->pc = 0x1A1140u;
label_1a1140:
    // 0x1a1140: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a1144: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a1144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1148: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A1148u;
    {
        const bool branch_taken_0x1a1148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1148u;
        // 0x1a114c: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1148) {
            ctx->pc = 0x1A1128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1128;
        }
    }
    ctx->pc = 0x1A1150u;
label_1a1150:
    // 0x1a1150: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a1154: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1a1154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1158: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a1158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a115c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A115Cu;
    {
        const bool branch_taken_0x1a115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A115Cu;
        // 0x1a1160: 0x2171818  mult        $v1, $s0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a115c) {
            ctx->pc = 0x1A10E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a10e0;
        }
    }
    ctx->pc = 0x1A1164u;
label_1a1164:
    // 0x1a1164: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a1164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1168: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1a1168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a116c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1a116cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a1170: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1a1170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1174: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a1174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1178: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a1178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a117c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1a117cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1180: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1a1180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1184: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1a1184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a118c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A118Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A118Cu;
        // 0x1a1190: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A118Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1194u;
    // 0x1a1194: 0x0  nop
    ctx->pc = 0x1a1194u;
    // NOP
    ctx->pc = 0x1a1198u;
}
