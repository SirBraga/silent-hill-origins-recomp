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

// Function: sub_001FD0E0
// Address: 0x1fd0e0 - 0x1fd730
void sub_001FD0E0_0x1fd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0E0_0x1fd0e0");
#endif

    switch (ctx->pc) {
        case 0x1fd100u: goto label_1fd100;
        case 0x1fd110u: goto label_1fd110;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd1d0u: goto label_1fd1d0;
        case 0x1fd1d8u: goto label_1fd1d8;
        case 0x1fd1e0u: goto label_1fd1e0;
        case 0x1fd240u: goto label_1fd240;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd398u: goto label_1fd398;
        case 0x1fd3c8u: goto label_1fd3c8;
        case 0x1fd708u: goto label_1fd708;
        default: break;
    }

    ctx->pc = 0x1fd0e0u;

    // 0x1fd0e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fd0e4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1fd0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1fd0e8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1fd0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1fd0ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fd0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0f0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1fd0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1fd0f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fd0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fd0f8: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD0F8u;
    SET_GPR_U32(ctx, 31, 0x1FD100u);
    ctx->pc = 0x1FD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0F8u;
    // 0x1fd0fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD0F8u, 0x1FD100u)) {
        return;
    }
    ctx->pc = 0x1FD100u;
label_1fd100:
    // 0x1fd100: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd104: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd108: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1FD108u;
    {
        const bool branch_taken_0x1fd108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD108u;
        // 0x1fd10c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd108) {
            ctx->pc = 0x1FD700u;
            goto label_1fd700;
        }
    }
    ctx->pc = 0x1FD110u;
label_1fd110:
    // 0x1fd110: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1fd110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1fd114: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x1fd114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fd118: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1fd118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1fd11c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd120: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD120u;
    {
        const bool branch_taken_0x1fd120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD120u;
        // 0x1fd124: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd120) {
            ctx->pc = 0x1FD160u;
            goto label_1fd160;
        }
    }
    ctx->pc = 0x1FD128u;
    // 0x1fd128: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fd128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fd12c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1fd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd130: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FD130u;
    {
        const bool branch_taken_0x1fd130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD130u;
        // 0x1fd134: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd130) {
            ctx->pc = 0x1FD1A4u;
            goto label_1fd1a4;
        }
    }
    ctx->pc = 0x1FD138u;
    // 0x1fd138: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fd13c: 0x0  nop
    ctx->pc = 0x1fd13cu;
    // NOP
label_1fd140:
    // 0x1fd140: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd144: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1fd144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1fd148: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd14c: 0x0  nop
    ctx->pc = 0x1fd14cu;
    // NOP
    // 0x1fd150: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD150u;
    {
        const bool branch_taken_0x1fd150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd150) {
            ctx->pc = 0x1FD154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD150u;
            // 0x1fd154: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd140;
        }
    }
    ctx->pc = 0x1FD158u;
    // 0x1fd158: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD158u;
    {
        const bool branch_taken_0x1fd158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD158u;
        // 0x1fd15c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd158) {
            ctx->pc = 0x1FD1A4u;
            goto label_1fd1a4;
        }
    }
    ctx->pc = 0x1FD160u;
label_1fd160:
    // 0x1fd160: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fd160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd164: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd168: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD168u;
            // 0x1fd16c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD194u;
            goto label_1fd194;
        }
    }
    ctx->pc = 0x1FD170u;
    // 0x1fd170: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1fd170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1fd174: 0x0  nop
    ctx->pc = 0x1fd174u;
    // NOP
label_1fd178:
    // 0x1fd178: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fd178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fd17c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fd17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fd180: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd184: 0x0  nop
    ctx->pc = 0x1fd184u;
    // NOP
    // 0x1fd188: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD188u;
    {
        const bool branch_taken_0x1fd188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd188) {
            ctx->pc = 0x1FD18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD188u;
            // 0x1fd18c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd178;
        }
    }
    ctx->pc = 0x1FD190u;
    // 0x1fd190: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd194:
    // 0x1fd194: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fd194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fd198: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD198u;
    {
        const bool branch_taken_0x1fd198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fd198) {
            ctx->pc = 0x1FD19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD198u;
            // 0x1fd19c: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD1A0u;
            goto label_1fd1a0;
        }
    }
    ctx->pc = 0x1FD1A0u;
label_1fd1a0:
    // 0x1fd1a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd1a4:
    // 0x1fd1a4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fd1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1fd1a8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1fd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1fd1ac: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD1ACu;
    {
        const bool branch_taken_0x1fd1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1ac) {
            ctx->pc = 0x1FD1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1ACu;
            // 0x1fd1b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD1C0u;
            goto label_1fd1c0;
        }
    }
    ctx->pc = 0x1FD1B4u;
    // 0x1fd1b4: 0x12400152  beqz        $s2, . + 4 + (0x152 << 2)
    ctx->pc = 0x1FD1B4u;
    {
        const bool branch_taken_0x1fd1b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1b4) {
            ctx->pc = 0x1FD700u;
            goto label_1fd700;
        }
    }
    ctx->pc = 0x1FD1BCu;
    // 0x1fd1bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1fd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fd1c0:
    // 0x1fd1c0: 0x1080014f  beqz        $a0, . + 4 + (0x14F << 2)
    ctx->pc = 0x1FD1C0u;
    {
        const bool branch_taken_0x1fd1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1C0u;
        // 0x1fd1c4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1c0) {
            ctx->pc = 0x1FD700u;
            goto label_1fd700;
        }
    }
    ctx->pc = 0x1FD1C8u;
    // 0x1fd1c8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FD1C8u;
    SET_GPR_U32(ctx, 31, 0x1FD1D0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FD1C8u, 0x1FD1D0u)) {
        return;
    }
    ctx->pc = 0x1FD1D0u;
label_1fd1d0:
    // 0x1fd1d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FD1D0u;
    SET_GPR_U32(ctx, 31, 0x1FD1D8u);
    ctx->pc = 0x1FD1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1D0u;
    // 0x1fd1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FD1D0u, 0x1FD1D8u)) {
        return;
    }
    ctx->pc = 0x1FD1D8u;
label_1fd1d8:
    // 0x1fd1d8: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD1D8u;
    SET_GPR_U32(ctx, 31, 0x1FD1E0u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD1D8u, 0x1FD1E0u)) {
        return;
    }
    ctx->pc = 0x1FD1E0u;
label_1fd1e0:
    // 0x1fd1e0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1fd1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd1e4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1fd1e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1fd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1fd1ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fd1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1fd1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1fd1f4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1fd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fd1f8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1fd1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1fd1fc: 0x244a000c  addiu       $t2, $v0, 0xC
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fd200: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x1fd200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1fd204: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD204u;
    {
        const bool branch_taken_0x1fd204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD204u;
        // 0x1fd208: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd204) {
            ctx->pc = 0x1FD218u;
            goto label_1fd218;
        }
    }
    ctx->pc = 0x1FD20Cu;
    // 0x1fd20c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1fd20cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1fd210: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD210u;
    {
        const bool branch_taken_0x1fd210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD210u;
        // 0x1fd214: 0x3c0c0034  lui         $t4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd210) {
            ctx->pc = 0x1FD25Cu;
            goto label_1fd25c;
        }
    }
    ctx->pc = 0x1FD218u;
label_1fd218:
    // 0x1fd218: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1fd21c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD21Cu;
    {
        const bool branch_taken_0x1fd21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd21c) {
            ctx->pc = 0x1FD220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD21Cu;
            // 0x1fd220: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD230u;
            goto label_1fd230;
        }
    }
    ctx->pc = 0x1FD224u;
    // 0x1fd224: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1fd224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd228: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FD228u;
    {
        const bool branch_taken_0x1fd228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD228u;
        // 0x1fd22c: 0x3c0c0034  lui         $t4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd228) {
            ctx->pc = 0x1FD25Cu;
            goto label_1fd25c;
        }
    }
    ctx->pc = 0x1FD230u;
label_1fd230:
    // 0x1fd230: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1fd234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD234u;
    {
        const bool branch_taken_0x1fd234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD234u;
        // 0x1fd238: 0x3c0c0034  lui         $t4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd234) {
            ctx->pc = 0x1FD258u;
            goto label_1fd258;
        }
    }
    ctx->pc = 0x1FD23Cu;
    // 0x1fd23c: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x1fd23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1fd240:
    // 0x1fd240: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1fd240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1fd244: 0x0  nop
    ctx->pc = 0x1fd244u;
    // NOP
    // 0x1fd248: 0x0  nop
    ctx->pc = 0x1fd248u;
    // NOP
    // 0x1fd24c: 0x0  nop
    ctx->pc = 0x1fd24cu;
    // NOP
    // 0x1fd250: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD250u;
    {
        const bool branch_taken_0x1fd250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd250) {
            ctx->pc = 0x1FD254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD250u;
            // 0x1fd254: 0x8ce70008  lw          $a3, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd240;
        }
    }
    ctx->pc = 0x1FD258u;
label_1fd258:
    // 0x1fd258: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1fd258u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1fd25c:
    // 0x1fd25c: 0x10e50022  beq         $a3, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FD25Cu;
    {
        const bool branch_taken_0x1fd25c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fd25c) {
            ctx->pc = 0x1FD2E8u;
            goto label_1fd2e8;
        }
    }
    ctx->pc = 0x1FD264u;
    // 0x1fd264: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1fd264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fd268: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1fd268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1fd26c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fd270: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1fd270u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1fd274: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd278: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD278u;
    {
        const bool branch_taken_0x1fd278 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD278u;
        // 0x1fd27c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd278) {
            ctx->pc = 0x1FD2A4u;
            goto label_1fd2a4;
        }
    }
    ctx->pc = 0x1FD280u;
    // 0x1fd280: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD280u;
    {
        const bool branch_taken_0x1fd280 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD280u;
        // 0x1fd284: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd280) {
            ctx->pc = 0x1FD28Cu;
            goto label_1fd28c;
        }
    }
    ctx->pc = 0x1FD288u;
    // 0x1fd288: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x1fd288u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_1fd28c:
    // 0x1fd28c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1fd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fd290: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1fd290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x1fd294: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1fd294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd298: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1fd298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1fd29c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd2a0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1fd2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_1fd2a4:
    // 0x1fd2a4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1fd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd2a8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD2A8u;
    {
        const bool branch_taken_0x1fd2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd2a8) {
            ctx->pc = 0x1FD2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2A8u;
            // 0x1fd2ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD2B8u;
            goto label_1fd2b8;
        }
    }
    ctx->pc = 0x1FD2B0u;
    // 0x1fd2b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD2B0u;
    {
        const bool branch_taken_0x1fd2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2B0u;
        // 0x1fd2b4: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2b0) {
            ctx->pc = 0x1FD2C8u;
            goto label_1fd2c8;
        }
    }
    ctx->pc = 0x1FD2B8u;
label_1fd2b8:
    // 0x1fd2b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd2bc: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD2BCu;
    {
        const bool branch_taken_0x1fd2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd2bc) {
            ctx->pc = 0x1FD2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2BCu;
            // 0x1fd2c0: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD2C8u;
            goto label_1fd2c8;
        }
    }
    ctx->pc = 0x1FD2C4u;
    // 0x1fd2c4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1fd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_1fd2c8:
    // 0x1fd2c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd2cc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1fd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fd2d0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1fd2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1fd2d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd2d8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1fd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1fd2dc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1fd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1fd2e0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1FD2E0u;
    {
        const bool branch_taken_0x1fd2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E0u;
        // 0x1fd2e4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2e0) {
            ctx->pc = 0x1FD3B4u;
            goto label_1fd3b4;
        }
    }
    ctx->pc = 0x1FD2E8u;
label_1fd2e8:
    // 0x1fd2e8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD2E8u;
    {
        const bool branch_taken_0x1fd2e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2E8u;
        // 0x1fd2ec: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2e8) {
            ctx->pc = 0x1FD2F4u;
            goto label_1fd2f4;
        }
    }
    ctx->pc = 0x1FD2F0u;
    // 0x1fd2f0: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x1fd2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_1fd2f4:
    // 0x1fd2f4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd2f8: 0x54470003  bnel        $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD2F8u;
    {
        const bool branch_taken_0x1fd2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1fd2f8) {
            ctx->pc = 0x1FD2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD2F8u;
            // 0x1fd2fc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD308u;
            goto label_1fd308;
        }
    }
    ctx->pc = 0x1FD300u;
    // 0x1fd300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD300u;
    {
        const bool branch_taken_0x1fd300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD300u;
        // 0x1fd304: 0xad280000  sw          $t0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd300) {
            ctx->pc = 0x1FD318u;
            goto label_1fd318;
        }
    }
    ctx->pc = 0x1FD308u;
label_1fd308:
    // 0x1fd308: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd30c: 0x54470002  bnel        $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD30Cu;
    {
        const bool branch_taken_0x1fd30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1fd30c) {
            ctx->pc = 0x1FD310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD30Cu;
            // 0x1fd310: 0xac68000c  sw          $t0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD318u;
            goto label_1fd318;
        }
    }
    ctx->pc = 0x1FD314u;
    // 0x1fd314: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x1fd314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
label_1fd318:
    // 0x1fd318: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fd318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd31c: 0x54450012  bnel        $v0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD31Cu;
    {
        const bool branch_taken_0x1fd31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd31c) {
            ctx->pc = 0x1FD320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD31Cu;
            // 0x1fd320: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD368u;
            goto label_1fd368;
        }
    }
    ctx->pc = 0x1FD324u;
    // 0x1fd324: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd328: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD328u;
    {
        const bool branch_taken_0x1fd328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd328) {
            ctx->pc = 0x1FD32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD328u;
            // 0x1fd32c: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD33Cu;
            goto label_1fd33c;
        }
    }
    ctx->pc = 0x1FD330u;
    // 0x1fd330: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd334: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FD334u;
    {
        const bool branch_taken_0x1fd334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD334u;
        // 0x1fd338: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd334) {
            ctx->pc = 0x1FD364u;
            goto label_1fd364;
        }
    }
    ctx->pc = 0x1FD33Cu;
label_1fd33c:
    // 0x1fd33c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD33Cu;
    {
        const bool branch_taken_0x1fd33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD33Cu;
        // 0x1fd340: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd33c) {
            ctx->pc = 0x1FD360u;
            goto label_1fd360;
        }
    }
    ctx->pc = 0x1FD344u;
    // 0x1fd344: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1fd348:
    // 0x1fd348: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd34c: 0x0  nop
    ctx->pc = 0x1fd34cu;
    // NOP
    // 0x1fd350: 0x0  nop
    ctx->pc = 0x1fd350u;
    // NOP
    // 0x1fd354: 0x0  nop
    ctx->pc = 0x1fd354u;
    // NOP
    // 0x1fd358: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD358u;
    {
        const bool branch_taken_0x1fd358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd358) {
            ctx->pc = 0x1FD35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD358u;
            // 0x1fd35c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd348;
        }
    }
    ctx->pc = 0x1FD360u;
label_1fd360:
    // 0x1fd360: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fd360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fd364:
    // 0x1fd364: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1fd364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1fd368:
    // 0x1fd368: 0x54450013  bnel        $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD368u;
    {
        const bool branch_taken_0x1fd368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd368) {
            ctx->pc = 0x1FD36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD368u;
            // 0x1fd36c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3B8u;
            goto label_1fd3b8;
        }
    }
    ctx->pc = 0x1FD370u;
    // 0x1fd370: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1fd370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fd374: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD374u;
    {
        const bool branch_taken_0x1fd374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd374) {
            ctx->pc = 0x1FD378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD374u;
            // 0x1fd378: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD388u;
            goto label_1fd388;
        }
    }
    ctx->pc = 0x1FD37Cu;
    // 0x1fd37c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd380: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FD380u;
    {
        const bool branch_taken_0x1fd380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD380u;
        // 0x1fd384: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd380) {
            ctx->pc = 0x1FD3B4u;
            goto label_1fd3b4;
        }
    }
    ctx->pc = 0x1FD388u;
label_1fd388:
    // 0x1fd388: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD388u;
    {
        const bool branch_taken_0x1fd388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD388u;
        // 0x1fd38c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd388) {
            ctx->pc = 0x1FD3B0u;
            goto label_1fd3b0;
        }
    }
    ctx->pc = 0x1FD390u;
    // 0x1fd390: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd394: 0x0  nop
    ctx->pc = 0x1fd394u;
    // NOP
label_1fd398:
    // 0x1fd398: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd39c: 0x0  nop
    ctx->pc = 0x1fd39cu;
    // NOP
    // 0x1fd3a0: 0x0  nop
    ctx->pc = 0x1fd3a0u;
    // NOP
    // 0x1fd3a4: 0x0  nop
    ctx->pc = 0x1fd3a4u;
    // NOP
    // 0x1fd3a8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD3A8u;
    {
        const bool branch_taken_0x1fd3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3a8) {
            ctx->pc = 0x1FD3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD3A8u;
            // 0x1fd3ac: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd398;
        }
    }
    ctx->pc = 0x1FD3B0u;
label_1fd3b0:
    // 0x1fd3b0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1fd3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_1fd3b4:
    // 0x1fd3b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd3b8:
    // 0x1fd3b8: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1FD3B8u;
    {
        const bool branch_taken_0x1fd3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3B8u;
        // 0x1fd3bc: 0x25838290  addiu       $v1, $t4, -0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294935184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3b8) {
            ctx->pc = 0x1FD6E8u;
            goto label_1fd6e8;
        }
    }
    ctx->pc = 0x1FD3C0u;
    // 0x1fd3c0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1FD3C0u;
    {
        const bool branch_taken_0x1fd3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3C0u;
        // 0x1fd3c4: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3c0) {
            ctx->pc = 0x1FD6C0u;
            goto label_1fd6c0;
        }
    }
    ctx->pc = 0x1FD3C8u;
label_1fd3c8:
    // 0x1fd3c8: 0x1502005d  bne         $t0, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FD3C8u;
    {
        const bool branch_taken_0x1fd3c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3C8u;
        // 0x1fd3cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3c8) {
            ctx->pc = 0x1FD540u;
            goto label_1fd540;
        }
    }
    ctx->pc = 0x1FD3D0u;
    // 0x1fd3d0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fd3d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fd3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd3d8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD3D8u;
    {
        const bool branch_taken_0x1fd3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3d8) {
            ctx->pc = 0x1FD3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD3D8u;
            // 0x1fd3dc: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD43Cu;
            goto label_1fd43c;
        }
    }
    ctx->pc = 0x1FD3E0u;
    // 0x1fd3e0: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1fd3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x1fd3e4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1fd3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1fd3e8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fd3ec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd3f0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1fd3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1fd3f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd3f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD3F8u;
    {
        const bool branch_taken_0x1fd3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3f8) {
            ctx->pc = 0x1FD3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD3F8u;
            // 0x1fd3fc: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD400u;
            goto label_1fd400;
        }
    }
    ctx->pc = 0x1FD400u;
label_1fd400:
    // 0x1fd400: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1fd400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fd404: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fd404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fd408: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fd408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd40c: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD40Cu;
    {
        const bool branch_taken_0x1fd40c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd40c) {
            ctx->pc = 0x1FD410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD40Cu;
            // 0x1fd410: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD41Cu;
            goto label_1fd41c;
        }
    }
    ctx->pc = 0x1FD414u;
    // 0x1fd414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD414u;
    {
        const bool branch_taken_0x1fd414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD414u;
        // 0x1fd418: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd414) {
            ctx->pc = 0x1FD42Cu;
            goto label_1fd42c;
        }
    }
    ctx->pc = 0x1FD41Cu;
label_1fd41c:
    // 0x1fd41c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd420: 0x54c20002  bnel        $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD420u;
    {
        const bool branch_taken_0x1fd420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd420) {
            ctx->pc = 0x1FD424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD420u;
            // 0x1fd424: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD42Cu;
            goto label_1fd42c;
        }
    }
    ctx->pc = 0x1FD428u;
    // 0x1fd428: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1fd428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1fd42c:
    // 0x1fd42c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fd42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fd430: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1fd430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1fd434: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fd434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fd438: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fd43c:
    // 0x1fd43c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD43Cu;
    {
        const bool branch_taken_0x1fd43c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD43Cu;
        // 0x1fd440: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd43c) {
            ctx->pc = 0x1FD450u;
            goto label_1fd450;
        }
    }
    ctx->pc = 0x1FD444u;
    // 0x1fd444: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd448: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD448u;
    {
        const bool branch_taken_0x1fd448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1fd448) {
            ctx->pc = 0x1FD464u;
            goto label_1fd464;
        }
    }
    ctx->pc = 0x1FD450u;
label_1fd450:
    // 0x1fd450: 0x50600060  beql        $v1, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x1FD450u;
    {
        const bool branch_taken_0x1fd450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd450) {
            ctx->pc = 0x1FD454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD450u;
            // 0x1fd454: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5D4u;
            goto label_1fd5d4;
        }
    }
    ctx->pc = 0x1FD458u;
    // 0x1fd458: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd45c: 0x5051005d  beql        $v0, $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FD45Cu;
    {
        const bool branch_taken_0x1fd45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1fd45c) {
            ctx->pc = 0x1FD460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD45Cu;
            // 0x1fd460: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5D4u;
            goto label_1fd5d4;
        }
    }
    ctx->pc = 0x1FD464u;
label_1fd464:
    // 0x1fd464: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD464u;
    {
        const bool branch_taken_0x1fd464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd464) {
            ctx->pc = 0x1FD478u;
            goto label_1fd478;
        }
    }
    ctx->pc = 0x1FD46Cu;
    // 0x1fd46c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd470: 0x54510019  bnel        $v0, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FD470u;
    {
        const bool branch_taken_0x1fd470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1fd470) {
            ctx->pc = 0x1FD474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD470u;
            // 0x1fd474: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4D8u;
            goto label_1fd4d8;
        }
    }
    ctx->pc = 0x1FD478u;
label_1fd478:
    // 0x1fd478: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD478u;
    {
        const bool branch_taken_0x1fd478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd478) {
            ctx->pc = 0x1FD47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD478u;
            // 0x1fd47c: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD480u;
            goto label_1fd480;
        }
    }
    ctx->pc = 0x1FD480u;
label_1fd480:
    // 0x1fd480: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1fd480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd484: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fd488: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd48c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fd48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1fd490: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fd490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd494: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD494u;
    {
        const bool branch_taken_0x1fd494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd494) {
            ctx->pc = 0x1FD498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD494u;
            // 0x1fd498: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD49Cu;
            goto label_1fd49c;
        }
    }
    ctx->pc = 0x1FD49Cu;
label_1fd49c:
    // 0x1fd49c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fd4a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fd4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fd4a4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd4a8: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD4A8u;
    {
        const bool branch_taken_0x1fd4a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd4a8) {
            ctx->pc = 0x1FD4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD4A8u;
            // 0x1fd4ac: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4B8u;
            goto label_1fd4b8;
        }
    }
    ctx->pc = 0x1FD4B0u;
    // 0x1fd4b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD4B0u;
    {
        const bool branch_taken_0x1fd4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4B0u;
        // 0x1fd4b4: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4b0) {
            ctx->pc = 0x1FD4C8u;
            goto label_1fd4c8;
        }
    }
    ctx->pc = 0x1FD4B8u;
label_1fd4b8:
    // 0x1fd4b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd4bc: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD4BCu;
    {
        const bool branch_taken_0x1fd4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd4bc) {
            ctx->pc = 0x1FD4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD4BCu;
            // 0x1fd4c0: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4C8u;
            goto label_1fd4c8;
        }
    }
    ctx->pc = 0x1FD4C4u;
    // 0x1fd4c4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1fd4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_1fd4c8:
    // 0x1fd4c8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1fd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1fd4cc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1fd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1fd4d0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fd4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fd4d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd4d8:
    // 0x1fd4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd4dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fd4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fd4e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1fd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1fd4e4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd4e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD4E8u;
    {
        const bool branch_taken_0x1fd4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd4e8) {
            ctx->pc = 0x1FD4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD4E8u;
            // 0x1fd4ec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4F0u;
            goto label_1fd4f0;
        }
    }
    ctx->pc = 0x1FD4F0u;
label_1fd4f0:
    // 0x1fd4f0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1fd4f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd4f8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1fd4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1fd4fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd500: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD500u;
    {
        const bool branch_taken_0x1fd500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd500) {
            ctx->pc = 0x1FD504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD500u;
            // 0x1fd504: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD508u;
            goto label_1fd508;
        }
    }
    ctx->pc = 0x1FD508u;
label_1fd508:
    // 0x1fd508: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fd50c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fd510: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fd510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd514: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD514u;
    {
        const bool branch_taken_0x1fd514 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd514) {
            ctx->pc = 0x1FD518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD514u;
            // 0x1fd518: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD524u;
            goto label_1fd524;
        }
    }
    ctx->pc = 0x1FD51Cu;
    // 0x1fd51c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD51Cu;
    {
        const bool branch_taken_0x1fd51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD51Cu;
        // 0x1fd520: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd51c) {
            ctx->pc = 0x1FD534u;
            goto label_1fd534;
        }
    }
    ctx->pc = 0x1FD524u;
label_1fd524:
    // 0x1fd524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd528: 0x54c20002  bnel        $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD528u;
    {
        const bool branch_taken_0x1fd528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd528) {
            ctx->pc = 0x1FD52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD528u;
            // 0x1fd52c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD534u;
            goto label_1fd534;
        }
    }
    ctx->pc = 0x1FD530u;
    // 0x1fd530: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1fd530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1fd534:
    // 0x1fd534: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fd534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fd538: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1FD538u;
    {
        const bool branch_taken_0x1fd538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD538u;
        // 0x1fd53c: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd538) {
            ctx->pc = 0x1FD6DCu;
            goto label_1fd6dc;
        }
    }
    ctx->pc = 0x1FD540u;
label_1fd540:
    // 0x1fd540: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fd540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd544: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD544u;
    {
        const bool branch_taken_0x1fd544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd544) {
            ctx->pc = 0x1FD548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD544u;
            // 0x1fd548: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5A8u;
            goto label_1fd5a8;
        }
    }
    ctx->pc = 0x1FD54Cu;
    // 0x1fd54c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1fd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x1fd550: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1fd550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1fd554: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fd558: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd55c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1fd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1fd560: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd564: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD564u;
    {
        const bool branch_taken_0x1fd564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd564) {
            ctx->pc = 0x1FD568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD564u;
            // 0x1fd568: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD56Cu;
            goto label_1fd56c;
        }
    }
    ctx->pc = 0x1FD56Cu;
label_1fd56c:
    // 0x1fd56c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1fd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fd570: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fd570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fd574: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fd574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd578: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD578u;
    {
        const bool branch_taken_0x1fd578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd578) {
            ctx->pc = 0x1FD57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD578u;
            // 0x1fd57c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD588u;
            goto label_1fd588;
        }
    }
    ctx->pc = 0x1FD580u;
    // 0x1fd580: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD580u;
    {
        const bool branch_taken_0x1fd580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD580u;
        // 0x1fd584: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd580) {
            ctx->pc = 0x1FD598u;
            goto label_1fd598;
        }
    }
    ctx->pc = 0x1FD588u;
label_1fd588:
    // 0x1fd588: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd58c: 0x54c20002  bnel        $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD58Cu;
    {
        const bool branch_taken_0x1fd58c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd58c) {
            ctx->pc = 0x1FD590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD58Cu;
            // 0x1fd590: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD598u;
            goto label_1fd598;
        }
    }
    ctx->pc = 0x1FD594u;
    // 0x1fd594: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1fd594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1fd598:
    // 0x1fd598: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1fd598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1fd59c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1fd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1fd5a0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fd5a4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1fd5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fd5a8:
    // 0x1fd5a8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD5A8u;
    {
        const bool branch_taken_0x1fd5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A8u;
        // 0x1fd5ac: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5a8) {
            ctx->pc = 0x1FD5BCu;
            goto label_1fd5bc;
        }
    }
    ctx->pc = 0x1FD5B0u;
    // 0x1fd5b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fd5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd5b4: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD5B4u;
    {
        const bool branch_taken_0x1fd5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1fd5b4) {
            ctx->pc = 0x1FD5E0u;
            goto label_1fd5e0;
        }
    }
    ctx->pc = 0x1FD5BCu;
label_1fd5bc:
    // 0x1fd5bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD5BCu;
    {
        const bool branch_taken_0x1fd5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5bc) {
            ctx->pc = 0x1FD5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5BCu;
            // 0x1fd5c0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5D4u;
            goto label_1fd5d4;
        }
    }
    ctx->pc = 0x1FD5C4u;
    // 0x1fd5c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd5c8: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD5C8u;
    {
        const bool branch_taken_0x1fd5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1fd5c8) {
            ctx->pc = 0x1FD5E0u;
            goto label_1fd5e0;
        }
    }
    ctx->pc = 0x1FD5D0u;
    // 0x1fd5d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1fd5d4:
    // 0x1fd5d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fd5d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5d8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1FD5D8u;
    {
        const bool branch_taken_0x1fd5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5D8u;
        // 0x1fd5dc: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5d8) {
            ctx->pc = 0x1FD6BCu;
            goto label_1fd6bc;
        }
    }
    ctx->pc = 0x1FD5E0u;
label_1fd5e0:
    // 0x1fd5e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD5E0u;
    {
        const bool branch_taken_0x1fd5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5e0) {
            ctx->pc = 0x1FD5F4u;
            goto label_1fd5f4;
        }
    }
    ctx->pc = 0x1FD5E8u;
    // 0x1fd5e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd5ec: 0x54510019  bnel        $v0, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FD5ECu;
    {
        const bool branch_taken_0x1fd5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1fd5ec) {
            ctx->pc = 0x1FD5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5ECu;
            // 0x1fd5f0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD654u;
            goto label_1fd654;
        }
    }
    ctx->pc = 0x1FD5F4u;
label_1fd5f4:
    // 0x1fd5f4: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD5F4u;
    {
        const bool branch_taken_0x1fd5f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5f4) {
            ctx->pc = 0x1FD5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5F4u;
            // 0x1fd5f8: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5FCu;
            goto label_1fd5fc;
        }
    }
    ctx->pc = 0x1FD5FCu;
label_1fd5fc:
    // 0x1fd5fc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd600: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fd604: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1fd604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fd608: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1fd608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1fd60c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1fd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fd610: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD610u;
    {
        const bool branch_taken_0x1fd610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd610) {
            ctx->pc = 0x1FD614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD610u;
            // 0x1fd614: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD618u;
            goto label_1fd618;
        }
    }
    ctx->pc = 0x1FD618u;
label_1fd618:
    // 0x1fd618: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fd61c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fd620: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fd620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd624: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD624u;
    {
        const bool branch_taken_0x1fd624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd624) {
            ctx->pc = 0x1FD628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD624u;
            // 0x1fd628: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD634u;
            goto label_1fd634;
        }
    }
    ctx->pc = 0x1FD62Cu;
    // 0x1fd62c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD62Cu;
    {
        const bool branch_taken_0x1fd62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD62Cu;
        // 0x1fd630: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd62c) {
            ctx->pc = 0x1FD644u;
            goto label_1fd644;
        }
    }
    ctx->pc = 0x1FD634u;
label_1fd634:
    // 0x1fd634: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd638: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD638u;
    {
        const bool branch_taken_0x1fd638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd638) {
            ctx->pc = 0x1FD63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD638u;
            // 0x1fd63c: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD644u;
            goto label_1fd644;
        }
    }
    ctx->pc = 0x1FD640u;
    // 0x1fd640: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1fd640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1fd644:
    // 0x1fd644: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1fd644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1fd648: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1fd648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1fd64c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fd650: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd654:
    // 0x1fd654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fd658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fd65c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1fd65cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1fd660: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fd660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd664: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD664u;
    {
        const bool branch_taken_0x1fd664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd664) {
            ctx->pc = 0x1FD668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD664u;
            // 0x1fd668: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD66Cu;
            goto label_1fd66c;
        }
    }
    ctx->pc = 0x1FD66Cu;
label_1fd66c:
    // 0x1fd66c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fd66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fd670: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd674: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1fd674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1fd678: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fd678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd67c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD67Cu;
    {
        const bool branch_taken_0x1fd67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd67c) {
            ctx->pc = 0x1FD680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD67Cu;
            // 0x1fd680: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD684u;
            goto label_1fd684;
        }
    }
    ctx->pc = 0x1FD684u;
label_1fd684:
    // 0x1fd684: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1fd684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fd688: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fd688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fd68c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1fd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fd690: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD690u;
    {
        const bool branch_taken_0x1fd690 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd690) {
            ctx->pc = 0x1FD694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD690u;
            // 0x1fd694: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD6A0u;
            goto label_1fd6a0;
        }
    }
    ctx->pc = 0x1FD698u;
    // 0x1fd698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD698u;
    {
        const bool branch_taken_0x1fd698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD698u;
        // 0x1fd69c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd698) {
            ctx->pc = 0x1FD6B0u;
            goto label_1fd6b0;
        }
    }
    ctx->pc = 0x1FD6A0u;
label_1fd6a0:
    // 0x1fd6a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd6a4: 0x54c20002  bnel        $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD6A4u;
    {
        const bool branch_taken_0x1fd6a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd6a4) {
            ctx->pc = 0x1FD6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD6A4u;
            // 0x1fd6a8: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD6B0u;
            goto label_1fd6b0;
        }
    }
    ctx->pc = 0x1FD6ACu;
    // 0x1fd6ac: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1fd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1fd6b0:
    // 0x1fd6b0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1fd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1fd6b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD6B4u;
    {
        const bool branch_taken_0x1fd6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6B4u;
        // 0x1fd6b8: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6b4) {
            ctx->pc = 0x1FD6DCu;
            goto label_1fd6dc;
        }
    }
    ctx->pc = 0x1FD6BCu;
label_1fd6bc:
    // 0x1fd6bc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1fd6c0:
    // 0x1fd6c0: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD6C0u;
    {
        const bool branch_taken_0x1fd6c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd6c0) {
            ctx->pc = 0x1FD6DCu;
            goto label_1fd6dc;
        }
    }
    ctx->pc = 0x1FD6C8u;
    // 0x1fd6c8: 0x5100ff3f  beql        $t0, $zero, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1FD6C8u;
    {
        const bool branch_taken_0x1fd6c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6c8) {
            ctx->pc = 0x1FD6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD6C8u;
            // 0x1fd6cc: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd3c8;
        }
    }
    ctx->pc = 0x1FD6D0u;
    // 0x1fd6d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fd6d4: 0x5051ff3c  beql        $v0, $s1, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1FD6D4u;
    {
        const bool branch_taken_0x1fd6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1fd6d4) {
            ctx->pc = 0x1FD6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD6D4u;
            // 0x1fd6d8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd3c8;
        }
    }
    ctx->pc = 0x1FD6DCu;
label_1fd6dc:
    // 0x1fd6dc: 0x55000001  bnel        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD6DCu;
    {
        const bool branch_taken_0x1fd6dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6dc) {
            ctx->pc = 0x1FD6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD6DCu;
            // 0x1fd6e0: 0xad110000  sw          $s1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD6E4u;
            goto label_1fd6e4;
        }
    }
    ctx->pc = 0x1FD6E4u;
label_1fd6e4:
    // 0x1fd6e4: 0x25838290  addiu       $v1, $t4, -0x7D70
    ctx->pc = 0x1fd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294935184));
label_1fd6e8:
    // 0x1fd6e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd6ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1fd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1fd6f0: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1fd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1fd6f4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1fd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1fd6f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fd6fc: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x1fd6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
label_1fd700:
    // 0x1fd700: 0xc07f2f2  jal         func_1FCBC8
    ctx->pc = 0x1FD700u;
    SET_GPR_U32(ctx, 31, 0x1FD708u);
    ctx->pc = 0x1FCBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FCBC8u, 0x1FD700u, 0x1FD708u)) {
        return;
    }
    ctx->pc = 0x1FD708u;
label_1fd708:
    // 0x1fd708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd70c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1fd70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd710: 0x14a3fe7f  bne         $a1, $v1, . + 4 + (-0x181 << 2)
    ctx->pc = 0x1FD710u;
    {
        const bool branch_taken_0x1fd710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD710u;
        // 0x1fd714: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd710) {
            ctx->pc = 0x1FD110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd110;
        }
    }
    ctx->pc = 0x1FD718u;
    // 0x1fd718: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1fd718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fd71c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1fd71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd720: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1fd720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd724: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fd724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd728: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD728u;
        // 0x1fd72c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD730u;
}
