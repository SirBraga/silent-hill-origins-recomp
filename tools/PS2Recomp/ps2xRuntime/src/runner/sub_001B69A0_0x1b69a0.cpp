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

// Function: sub_001B69A0
// Address: 0x1b69a0 - 0x1b6ab8
void sub_001B69A0_0x1b69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B69A0_0x1b69a0");
#endif

    switch (ctx->pc) {
        case 0x1b69f0u: goto label_1b69f0;
        case 0x1b69f4u: goto label_1b69f4;
        case 0x1b6a00u: goto label_1b6a00;
        case 0x1b6a14u: goto label_1b6a14;
        case 0x1b6a20u: goto label_1b6a20;
        case 0x1b6a34u: goto label_1b6a34;
        case 0x1b6a44u: goto label_1b6a44;
        default: break;
    }

    ctx->pc = 0x1b69a0u;

    // 0x1b69a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1b69a4: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1b69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1b69a8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1b69a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1b69ac: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1b69acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1b69b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b69b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69b4: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1b69b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1b69b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69bc: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1b69bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1b69c0: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1b69c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    // 0x1b69c4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1b69c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1b69c8: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x1b69cc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1b69ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1b69d0: 0x3c1e006a  lui         $fp, 0x6A
    ctx->pc = 0x1b69d0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    // 0x1b69d4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1b69d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1b69d8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1b69d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1b69dc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b69dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b69e0: 0x8e830260  lw          $v1, 0x260($s4)
    ctx->pc = 0x1b69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x1b69e4: 0x24620005  addiu       $v0, $v1, 0x5
    ctx->pc = 0x1b69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1b69e8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b69e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69ec: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1b69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1b69f0:
    // 0x1b69f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b69f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b69f4:
    // 0x1b69f4: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1b69f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1b69f8: 0x26319290  addiu       $s1, $s1, -0x6D70
    ctx->pc = 0x1b69f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939280));
    // 0x1b69fc: 0x0  nop
    ctx->pc = 0x1b69fcu;
    // NOP
label_1b6a00:
    // 0x1b6a00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1b6a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a08: 0x8e870260  lw          $a3, 0x260($s4)
    ctx->pc = 0x1b6a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
    // 0x1b6a0c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1B6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A14u);
    ctx->pc = 0x1B6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A0Cu;
    // 0x1b6a10: 0x27c5ca00  addiu       $a1, $fp, -0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1B6A0Cu, 0x1B6A14u)) {
        return;
    }
    ctx->pc = 0x1B6A14u;
label_1b6a14:
    // 0x1b6a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a18: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1B6A18u;
    SET_GPR_U32(ctx, 31, 0x1B6A20u);
    ctx->pc = 0x1B6A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A18u;
    // 0x1b6a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B6A18u, 0x1B6A20u)) {
        return;
    }
    ctx->pc = 0x1B6A20u;
label_1b6a20:
    // 0x1b6a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a24: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6A24u;
    {
        const bool branch_taken_0x1b6a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A24u;
        // 0x1b6a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a24) {
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A2Cu;
    // 0x1b6a2c: 0xc0c5daa  jal         func_3176A8
    ctx->pc = 0x1B6A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A34u);
    ctx->pc = 0x1B6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A2Cu;
    // 0x1b6a30: 0x26e5ca08  addiu       $a1, $s7, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3176A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3176A8u, 0x1B6A2Cu, 0x1B6A34u)) {
        return;
    }
    ctx->pc = 0x1B6A34u;
label_1b6a34:
    // 0x1b6a34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6A34u;
    {
        const bool branch_taken_0x1b6a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A34u;
        // 0x1b6a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a34) {
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A3Cu;
    // 0x1b6a3c: 0xc0c5daa  jal         func_3176A8
    ctx->pc = 0x1B6A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A44u);
    ctx->pc = 0x1B6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A3Cu;
    // 0x1b6a40: 0x26c5ca20  addiu       $a1, $s6, -0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3176A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3176A8u, 0x1B6A3Cu, 0x1B6A44u)) {
        return;
    }
    ctx->pc = 0x1B6A44u;
label_1b6a44:
    // 0x1b6a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6A44u;
    {
        const bool branch_taken_0x1b6a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A44u;
        // 0x1b6a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a44) {
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A4Cu;
    // 0x1b6a4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B6A4Cu;
    {
        const bool branch_taken_0x1b6a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A4Cu;
        // 0x1b6a50: 0xaeb20000  sw          $s2, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a4c) {
            ctx->pc = 0x1B6A88u;
            goto label_1b6a88;
        }
    }
    ctx->pc = 0x1B6A54u;
label_1b6a54:
    // 0x1b6a54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b6a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b6a58: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1b6a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b6a5c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B6A5Cu;
    {
        const bool branch_taken_0x1b6a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A5Cu;
        // 0x1b6a60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a5c) {
            ctx->pc = 0x1B6A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6a00;
        }
    }
    ctx->pc = 0x1B6A64u;
    // 0x1b6a64: 0x1200ffe2  beqz        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B6A64u;
    {
        const bool branch_taken_0x1b6a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A64u;
        // 0x1b6a68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a64) {
            ctx->pc = 0x1B69F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b69f0;
        }
    }
    ctx->pc = 0x1B6A6Cu;
    // 0x1b6a6c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1b6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b6a70: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1b6a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b6a74: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1B6A74u;
    {
        const bool branch_taken_0x1b6a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A74u;
        // 0x1b6a78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a74) {
            ctx->pc = 0x1B69F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b69f4;
        }
    }
    ctx->pc = 0x1B6A7Cu;
    // 0x1b6a7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b6a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a84: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1b6a84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1b6a88:
    // 0x1b6a88: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1b6a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b6a8c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1b6a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b6a90: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1b6a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b6a94: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1b6a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b6a98: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1b6a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b6a9c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1b6a9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b6aa0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b6aa4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1b6aa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b6aa8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b6aa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b6aac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b6aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b6ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AB0u;
        // 0x1b6ab4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6AB8u;
}
