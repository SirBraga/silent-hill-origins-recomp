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

// Function: sub_001D6C08
// Address: 0x1d6c08 - 0x1d72b8
void sub_001D6C08_0x1d6c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6C08_0x1d6c08");
#endif

    switch (ctx->pc) {
        case 0x1d6c4cu: goto label_1d6c4c;
        case 0x1d6ca0u: goto label_1d6ca0;
        case 0x1d6cb0u: goto label_1d6cb0;
        case 0x1d6cecu: goto label_1d6cec;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6dccu: goto label_1d6dcc;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6df8u: goto label_1d6df8;
        case 0x1d6e0cu: goto label_1d6e0c;
        case 0x1d6f38u: goto label_1d6f38;
        case 0x1d7008u: goto label_1d7008;
        case 0x1d7190u: goto label_1d7190;
        case 0x1d71c4u: goto label_1d71c4;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e4u: goto label_1d71e4;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7254u: goto label_1d7254;
        default: break;
    }

    ctx->pc = 0x1d6c08u;

    // 0x1d6c08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d6c0c: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d6c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d6c10: 0x8c439c80  lw          $v1, -0x6380($v0)
    ctx->pc = 0x1d6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339C80u));
    // 0x1d6c14: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1d6c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1d6c18: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1d6c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1d6c1c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1d6c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1d6c20: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1d6c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1d6c24: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d6c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1d6c28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d6c2c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1d6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1d6c30: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1d6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1d6c34: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1d6c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1d6c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d6c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d6c3c: 0x10600190  beqz        $v1, . + 4 + (0x190 << 2)
    ctx->pc = 0x1D6C3Cu;
    {
        const bool branch_taken_0x1d6c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C3Cu;
        // 0x1d6c40: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c3c) {
            ctx->pc = 0x1D7280u;
            goto label_1d7280;
        }
    }
    ctx->pc = 0x1D6C44u;
    // 0x1d6c44: 0xc08bd3e  jal         func_22F4F8
    ctx->pc = 0x1D6C44u;
    SET_GPR_U32(ctx, 31, 0x1D6C4Cu);
    ctx->pc = 0x1D6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C44u;
    // 0x1d6c48: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F4F8u, 0x1D6C44u, 0x1D6C4Cu)) {
        return;
    }
    ctx->pc = 0x1D6C4Cu;
label_1d6c4c:
    // 0x1d6c4c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6c50: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d6c54: 0x8c649cec  lw          $a0, -0x6314($v1)
    ctx->pc = 0x1d6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339CECu));
    // 0x1d6c58: 0x8c439ce8  lw          $v1, -0x6318($v0)
    ctx->pc = 0x1d6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339CE8u));
    // 0x1d6c5c: 0x1064002f  beq         $v1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D6C5Cu;
    {
        const bool branch_taken_0x1d6c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C5Cu;
        // 0x1d6c60: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c5c) {
            ctx->pc = 0x1D6D1Cu;
            goto label_1d6d1c;
        }
    }
    ctx->pc = 0x1D6C64u;
    // 0x1d6c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6c68: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D6C68u;
    {
        const bool branch_taken_0x1d6c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C68u;
        // 0x1d6c6c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c68) {
            ctx->pc = 0x1D6CA8u;
            goto label_1d6ca8;
        }
    }
    ctx->pc = 0x1D6C70u;
    // 0x1d6c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6C70u;
    {
        const bool branch_taken_0x1d6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C70u;
        // 0x1d6c74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c70) {
            ctx->pc = 0x1D6C88u;
            goto label_1d6c88;
        }
    }
    ctx->pc = 0x1D6C78u;
    // 0x1d6c78: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6C78u;
    {
        const bool branch_taken_0x1d6c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C78u;
        // 0x1d6c7c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c78) {
            ctx->pc = 0x1D6C98u;
            goto label_1d6c98;
        }
    }
    ctx->pc = 0x1D6C80u;
    // 0x1d6c80: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1D6C80u;
    {
        const bool branch_taken_0x1d6c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C80u;
        // 0x1d6c84: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c80) {
            ctx->pc = 0x1D6D24u;
            goto label_1d6d24;
        }
    }
    ctx->pc = 0x1D6C88u;
label_1d6c88:
    // 0x1d6c88: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6C88u;
    {
        const bool branch_taken_0x1d6c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C88u;
        // 0x1d6c8c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c88) {
            ctx->pc = 0x1D6CB8u;
            goto label_1d6cb8;
        }
    }
    ctx->pc = 0x1D6C90u;
    // 0x1d6c90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D6C90u;
    {
        const bool branch_taken_0x1d6c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C90u;
        // 0x1d6c94: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c90) {
            ctx->pc = 0x1D6D24u;
            goto label_1d6d24;
        }
    }
    ctx->pc = 0x1D6C98u;
label_1d6c98:
    // 0x1d6c98: 0xc075a9e  jal         func_1D6A78
    ctx->pc = 0x1D6C98u;
    SET_GPR_U32(ctx, 31, 0x1D6CA0u);
    ctx->pc = 0x1D6A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6A78u, 0x1D6C98u, 0x1D6CA0u)) {
        return;
    }
    ctx->pc = 0x1D6CA0u;
label_1d6ca0:
    // 0x1d6ca0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D6CA0u;
    {
        const bool branch_taken_0x1d6ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CA0u;
        // 0x1d6ca4: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ca0) {
            ctx->pc = 0x1D6D24u;
            goto label_1d6d24;
        }
    }
    ctx->pc = 0x1D6CA8u;
label_1d6ca8:
    // 0x1d6ca8: 0xc075ad0  jal         func_1D6B40
    ctx->pc = 0x1D6CA8u;
    SET_GPR_U32(ctx, 31, 0x1D6CB0u);
    ctx->pc = 0x1D6CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CA8u;
    // 0x1d6cac: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6B40u, 0x1D6CA8u, 0x1D6CB0u)) {
        return;
    }
    ctx->pc = 0x1D6CB0u;
label_1d6cb0:
    // 0x1d6cb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6CB0u;
    {
        const bool branch_taken_0x1d6cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CB0u;
        // 0x1d6cb4: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cb0) {
            ctx->pc = 0x1D6D24u;
            goto label_1d6d24;
        }
    }
    ctx->pc = 0x1D6CB8u;
label_1d6cb8:
    // 0x1d6cb8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d6cbc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d6cc0: 0x8c648870  lw          $a0, -0x7790($v1)
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8870u));
    // 0x1d6cc4: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d6cc8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6CC8u;
    {
        const bool branch_taken_0x1d6cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CC8u;
        // 0x1d6ccc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cc8) {
            ctx->pc = 0x1D6CECu;
            goto label_1d6cec;
        }
    }
    ctx->pc = 0x1D6CD0u;
    // 0x1d6cd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6cd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6CD4u;
    {
        const bool branch_taken_0x1d6cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CD4u;
        // 0x1d6cd8: 0x8e431a70  lw          $v1, 0x1A70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cd4) {
            ctx->pc = 0x1D6CF0u;
            goto label_1d6cf0;
        }
    }
    ctx->pc = 0x1D6CDCu;
    // 0x1d6cdc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d6ce0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ce4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D6CE4u;
    SET_GPR_U32(ctx, 31, 0x1D6CECu);
    ctx->pc = 0x1D6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE4u;
    // 0x1d6ce8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D6CE4u, 0x1D6CECu)) {
        return;
    }
    ctx->pc = 0x1D6CECu;
label_1d6cec:
    // 0x1d6cec: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x1d6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_1d6cf0:
    // 0x1d6cf0: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x1d6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x1d6cf4: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1d6cf8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6cfc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d6d00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6d04: 0xac4388c8  sw          $v1, -0x7738($v0)
    ctx->pc = 0x1d6d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6F88C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88C8u, _value); } while (0);
    // 0x1d6d08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d6d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d0c: 0xac8388b8  sw          $v1, -0x7748($a0)
    ctx->pc = 0x1d6d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6F88B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88B8u, _value); } while (0);
    // 0x1d6d10: 0xae659ce8  sw          $a1, -0x6318($s3)
    ctx->pc = 0x1d6d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941928), GPR_U32(ctx, 5));
    // 0x1d6d14: 0xacc388c0  sw          $v1, -0x7740($a2)
    ctx->pc = 0x1d6d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6F88C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88C0u, _value); } while (0);
    // 0x1d6d18: 0xace09ce0  sw          $zero, -0x6320($a3)
    ctx->pc = 0x1d6d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CE0u, _value); } while (0);
label_1d6d1c:
    // 0x1d6d1c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1d6d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1d6d20: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1d6d20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
label_1d6d24:
    // 0x1d6d24: 0x8e028858  lw          $v0, -0x77A8($s0)
    ctx->pc = 0x1d6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936664)));
    // 0x1d6d28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6D28u;
    {
        const bool branch_taken_0x1d6d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6d28) {
            ctx->pc = 0x1D6D44u;
            goto label_1d6d44;
        }
    }
    ctx->pc = 0x1D6D30u;
    // 0x1d6d30: 0xc0c9f18  jal         func_327C60
    ctx->pc = 0x1D6D30u;
    SET_GPR_U32(ctx, 31, 0x1D6D38u);
    ctx->pc = 0x327C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327C60u, 0x1D6D30u, 0x1D6D38u)) {
        return;
    }
    ctx->pc = 0x1D6D38u;
label_1d6d38:
    // 0x1d6d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6d3c: 0xfe228850  sd          $v0, -0x77B0($s1)
    ctx->pc = 0x1d6d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294936656), GPR_U64(ctx, 2));
    // 0x1d6d40: 0xae038858  sw          $v1, -0x77A8($s0)
    ctx->pc = 0x1d6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936664), GPR_U32(ctx, 3));
label_1d6d44:
    // 0x1d6d44: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1D6D44u;
    SET_GPR_U32(ctx, 31, 0x1D6D4Cu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1D6D44u, 0x1D6D4Cu)) {
        return;
    }
    ctx->pc = 0x1D6D4Cu;
label_1d6d4c:
    // 0x1d6d4c: 0xc080d20  jal         func_203480
    ctx->pc = 0x1D6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D54u);
    ctx->pc = 0x1D6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D4Cu;
    // 0x1d6d50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203480u, 0x1D6D4Cu, 0x1D6D54u)) {
        return;
    }
    ctx->pc = 0x1D6D54u;
label_1d6d54:
    // 0x1d6d54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6D54u;
    {
        const bool branch_taken_0x1d6d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D54u;
        // 0x1d6d58: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d54) {
            ctx->pc = 0x1D6D78u;
            goto label_1d6d78;
        }
    }
    ctx->pc = 0x1D6D5Cu;
    // 0x1d6d5c: 0x8e629ce8  lw          $v0, -0x6318($s3)
    ctx->pc = 0x1d6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941928)));
    // 0x1d6d60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d6d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6D64u;
    {
        const bool branch_taken_0x1d6d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D64u;
        // 0x1d6d68: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d64) {
            ctx->pc = 0x1D6D78u;
            goto label_1d6d78;
        }
    }
    ctx->pc = 0x1D6D6Cu;
    // 0x1d6d6c: 0xc075ad0  jal         func_1D6B40
    ctx->pc = 0x1D6D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D74u);
    ctx->pc = 0x1D6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6B40u, 0x1D6D6Cu, 0x1D6D74u)) {
        return;
    }
    ctx->pc = 0x1D6D74u;
label_1d6d74:
    // 0x1d6d74: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d6d78:
    // 0x1d6d78: 0x8c448a30  lw          $a0, -0x75D0($v0)
    ctx->pc = 0x1d6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937136)));
    // 0x1d6d7c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6D7Cu;
    {
        const bool branch_taken_0x1d6d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D7Cu;
        // 0x1d6d80: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d7c) {
            ctx->pc = 0x1D6D8Cu;
            goto label_1d6d8c;
        }
    }
    ctx->pc = 0x1D6D84u;
    // 0x1d6d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6D84u;
    {
        const bool branch_taken_0x1d6d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D84u;
        // 0x1d6d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d84) {
            ctx->pc = 0x1D6D94u;
            goto label_1d6d94;
        }
    }
    ctx->pc = 0x1D6D8Cu;
label_1d6d8c:
    // 0x1d6d8c: 0xc061328  jal         func_184CA0
    ctx->pc = 0x1D6D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D94u);
    ctx->pc = 0x184CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x184CA0u, 0x1D6D8Cu, 0x1D6D94u)) {
        return;
    }
    ctx->pc = 0x1D6D94u;
label_1d6d94:
    // 0x1d6d94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6D94u;
    {
        const bool branch_taken_0x1d6d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D94u;
        // 0x1d6d98: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d94) {
            ctx->pc = 0x1D6DB8u;
            goto label_1d6db8;
        }
    }
    ctx->pc = 0x1D6D9Cu;
    // 0x1d6d9c: 0x8e629ce8  lw          $v0, -0x6318($s3)
    ctx->pc = 0x1d6d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941928)));
    // 0x1d6da0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d6da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d6da4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6DA4u;
    {
        const bool branch_taken_0x1d6da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DA4u;
        // 0x1d6da8: 0x8c629c70  lw          $v0, -0x6390($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6da4) {
            ctx->pc = 0x1D6DBCu;
            goto label_1d6dbc;
        }
    }
    ctx->pc = 0x1D6DACu;
    // 0x1d6dac: 0xc075ad0  jal         func_1D6B40
    ctx->pc = 0x1D6DACu;
    SET_GPR_U32(ctx, 31, 0x1D6DB4u);
    ctx->pc = 0x1D6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6B40u, 0x1D6DACu, 0x1D6DB4u)) {
        return;
    }
    ctx->pc = 0x1D6DB4u;
label_1d6db4:
    // 0x1d6db4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d6db8:
    // 0x1d6db8: 0x8c629c70  lw          $v0, -0x6390($v1)
    ctx->pc = 0x1d6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941808)));
label_1d6dbc:
    // 0x1d6dbc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6DBCu;
    {
        const bool branch_taken_0x1d6dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6dbc) {
            ctx->pc = 0x1D6DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6DBCu;
            // 0x1d6dc0: 0xac609c70  sw          $zero, -0x6390($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294941808), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6DC4u;
            goto label_1d6dc4;
        }
    }
    ctx->pc = 0x1D6DC4u;
label_1d6dc4:
    // 0x1d6dc4: 0xc07fc3a  jal         func_1FF0E8
    ctx->pc = 0x1D6DC4u;
    SET_GPR_U32(ctx, 31, 0x1D6DCCu);
    ctx->pc = 0x1FF0E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF0E8u, 0x1D6DC4u, 0x1D6DCCu)) {
        return;
    }
    ctx->pc = 0x1D6DCCu;
label_1d6dcc:
    // 0x1d6dcc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6dd0: 0x8c629ce0  lw          $v0, -0x6320($v1)
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339CE0u));
    // 0x1d6dd4: 0xc0c9f18  jal         func_327C60
    ctx->pc = 0x1D6DD4u;
    SET_GPR_U32(ctx, 31, 0x1D6DDCu);
    ctx->pc = 0x1D6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DD4u;
    // 0x1d6dd8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327C60u, 0x1D6DD4u, 0x1D6DDCu)) {
        return;
    }
    ctx->pc = 0x1D6DDCu;
label_1d6ddc:
    // 0x1d6ddc: 0xde238850  ld          $v1, -0x77B0($s1)
    ctx->pc = 0x1d6ddcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 4294936656)));
    // 0x1d6de0: 0xfe228850  sd          $v0, -0x77B0($s1)
    ctx->pc = 0x1d6de0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294936656), GPR_U64(ctx, 2));
    // 0x1d6de4: 0x43882f  dsubu       $s1, $v0, $v1
    ctx->pc = 0x1d6de4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1d6de8: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6DE8u;
    {
        const bool branch_taken_0x1d6de8 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1D6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DE8u;
        // 0x1d6dec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6de8) {
            ctx->pc = 0x1D6E00u;
            goto label_1d6e00;
        }
    }
    ctx->pc = 0x1D6DF0u;
    // 0x1d6df0: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x1D6DF0u;
    SET_GPR_U32(ctx, 31, 0x1D6DF8u);
    ctx->pc = 0x1D6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6DF0u;
    // 0x1d6df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x1D6DF0u, 0x1D6DF8u)) {
        return;
    }
    ctx->pc = 0x1D6DF8u;
label_1d6df8:
    // 0x1d6df8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6DF8u;
    {
        const bool branch_taken_0x1d6df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DF8u;
        // 0x1d6dfc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6df8) {
            ctx->pc = 0x1D6E10u;
            goto label_1d6e10;
        }
    }
    ctx->pc = 0x1D6E00u;
label_1d6e00:
    // 0x1d6e00: 0x11207a  dsrl        $a0, $s1, 1
    ctx->pc = 0x1d6e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) >> 1);
    // 0x1d6e04: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x1D6E04u;
    SET_GPR_U32(ctx, 31, 0x1D6E0Cu);
    ctx->pc = 0x1D6E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E04u;
    // 0x1d6e08: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x1D6E04u, 0x1D6E0Cu)) {
        return;
    }
    ctx->pc = 0x1D6E0Cu;
label_1d6e0c:
    // 0x1d6e0c: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x1d6e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d6e10:
    // 0x1d6e10: 0x3c0131e9  lui         $at, 0x31E9
    ctx->pc = 0x1d6e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12777 << 16));
    // 0x1d6e14: 0x34210453  ori         $at, $at, 0x453
    ctx->pc = 0x1d6e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1107);
    // 0x1d6e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d6e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6e1c: 0x264288c0  addiu       $v0, $s2, -0x7740
    ctx->pc = 0x1d6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936768));
    // 0x1d6e20: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x1d6e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6e24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6e28: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d6e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d6e2c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d6e30: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D6E30u;
    {
        const bool branch_taken_0x1d6e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E30u;
        // 0x1d6e34: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e30) {
            ctx->pc = 0x1D6E94u;
            goto label_1d6e94;
        }
    }
    ctx->pc = 0x1D6E38u;
    // 0x1d6e38: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1d6e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d6e3c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d6e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d6e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6e44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6e48: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d6e4c: 0x8ca49cc8  lw          $a0, -0x6338($a1)
    ctx->pc = 0x1d6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339CC8u));
    // 0x1d6e50: 0x24429c88  addiu       $v0, $v0, -0x6378
    ctx->pc = 0x1d6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941832));
    // 0x1d6e54: 0x0  nop
    ctx->pc = 0x1d6e54u;
    // NOP
    // 0x1d6e58: 0x0  nop
    ctx->pc = 0x1d6e58u;
    // NOP
    // 0x1d6e5c: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1d6e5cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x1d6e60: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d6e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d6e64: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d6e68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d6e6c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d6e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d6e70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d6e74: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6e74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6e78: 0xe4c09c84  swc1        $f0, -0x637C($a2)
    ctx->pc = 0x1d6e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294941828), bits); }
    // 0x1d6e7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1d6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6e80: 0xaca39cc8  sw          $v1, -0x6338($a1)
    ctx->pc = 0x1d6e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941896), GPR_U32(ctx, 3));
    // 0x1d6e84: 0x0  nop
    ctx->pc = 0x1d6e84u;
    // NOP
    // 0x1d6e88: 0x0  nop
    ctx->pc = 0x1d6e88u;
    // NOP
    // 0x1d6e8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d6e8cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1d6e90: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1d6e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d6e94:
    // 0x1d6e94: 0x522000fb  beql        $s1, $zero, . + 4 + (0xFB << 2)
    ctx->pc = 0x1D6E94u;
    {
        const bool branch_taken_0x1d6e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e94) {
            ctx->pc = 0x1D6E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6E94u;
            // 0x1d6e98: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7284u;
            goto label_1d7284;
        }
    }
    ctx->pc = 0x1D6E9Cu;
    // 0x1d6e9c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6ea0: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1d6ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1d6ea4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1d6ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1d6ea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6eac: 0x0  nop
    ctx->pc = 0x1d6eacu;
    // NOP
    // 0x1d6eb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d6eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6eb4: 0x0  nop
    ctx->pc = 0x1d6eb4u;
    // NOP
    // 0x1d6eb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6EB8u;
    {
        const bool branch_taken_0x1d6eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6eb8) {
            ctx->pc = 0x1D6EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6EB8u;
            // 0x1d6ebc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EC0u;
            goto label_1d6ec0;
        }
    }
    ctx->pc = 0x1D6EC0u;
label_1d6ec0:
    // 0x1d6ec0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d6ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1d6ec4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d6ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d6ec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6ecc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6ed4: 0x0  nop
    ctx->pc = 0x1d6ed4u;
    // NOP
    // 0x1d6ed8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6ED8u;
    {
        const bool branch_taken_0x1d6ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6ed8) {
            ctx->pc = 0x1D6EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6ED8u;
            // 0x1d6edc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EE0u;
            goto label_1d6ee0;
        }
    }
    ctx->pc = 0x1D6EE0u;
label_1d6ee0:
    // 0x1d6ee0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d6ee4: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d6ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1d6ee8: 0x8c439c6c  lw          $v1, -0x6394($v0)
    ctx->pc = 0x1d6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339C6Cu));
    // 0x1d6eec: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1d6eecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1d6ef0: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1d6ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1d6ef4: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1d6ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1d6ef8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6EF8u;
    {
        const bool branch_taken_0x1d6ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EF8u;
        // 0x1d6efc: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ef8) {
            ctx->pc = 0x1D6F64u;
            goto label_1d6f64;
        }
    }
    ctx->pc = 0x1D6F00u;
    // 0x1d6f00: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d6f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d6f04: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6f08: 0x8ca29d30  lw          $v0, -0x62D0($a1)
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339D30u));
    // 0x1d6f0c: 0x24639cf0  addiu       $v1, $v1, -0x6310
    ctx->pc = 0x1d6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941936));
    // 0x1d6f10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f14: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d6f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6f1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6f24: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x1d6f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1d6f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6f2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d6f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d6f30: 0xaca49d30  sw          $a0, -0x62D0($a1)
    ctx->pc = 0x1d6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942000), GPR_U32(ctx, 4));
    // 0x1d6f34: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d6f38:
    // 0x1d6f38: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1d6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6f40: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d6f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d6f44: 0x0  nop
    ctx->pc = 0x1d6f44u;
    // NOP
    // 0x1d6f48: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D6F48u;
    {
        const bool branch_taken_0x1d6f48 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1D6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F48u;
        // 0x1d6f4c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f48) {
            ctx->pc = 0x1D6F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6f38;
        }
    }
    ctx->pc = 0x1D6F50u;
    // 0x1d6f50: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1d6f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1d6f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d6f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6f58: 0x0  nop
    ctx->pc = 0x1d6f58u;
    // NOP
    // 0x1d6f5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d6f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6f60: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1d6f64:
    // 0x1d6f64: 0xc4e09cd8  lwc1        $f0, -0x6328($a3)
    ctx->pc = 0x1d6f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294941912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1d6f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d6f6c: 0x0  nop
    ctx->pc = 0x1d6f6cu;
    // NOP
    // 0x1d6f70: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1d6f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6f74: 0x0  nop
    ctx->pc = 0x1d6f74u;
    // NOP
    // 0x1d6f78: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6F78u;
    {
        const bool branch_taken_0x1d6f78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F78u;
        // 0x1d6f7c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f78) {
            ctx->pc = 0x1D6FD4u;
            goto label_1d6fd4;
        }
    }
    ctx->pc = 0x1D6F80u;
    // 0x1d6f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d6f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d6f84: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d6f88: 0xc4809cd4  lwc1        $f0, -0x632C($a0)
    ctx->pc = 0x1d6f88u;
    { uint32_t bits = FAST_READ32(0x339CD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d6f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6f90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d6f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d6f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d6f98: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d6f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6f9c: 0x0  nop
    ctx->pc = 0x1d6f9cu;
    // NOP
    // 0x1d6fa0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6FA0u;
    {
        const bool branch_taken_0x1d6fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FA0u;
        // 0x1d6fa4: 0xe4809cd4  swc1        $f0, -0x632C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fa0) {
            ctx->pc = 0x1D6FB0u;
            goto label_1d6fb0;
        }
    }
    ctx->pc = 0x1D6FA8u;
    // 0x1d6fa8: 0xe4e39cd8  swc1        $f3, -0x6328($a3)
    ctx->pc = 0x1d6fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294941912), bits); }
    // 0x1d6fac: 0xe4829cd4  swc1        $f2, -0x632C($a0)
    ctx->pc = 0x1d6facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941908), bits); }
label_1d6fb0:
    // 0x1d6fb0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6fb4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d6fb8: 0xc4429ccc  lwc1        $f2, -0x6334($v0)
    ctx->pc = 0x1d6fb8u;
    { uint32_t bits = FAST_READ32(0x339CCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d6fbc: 0xc4609cd0  lwc1        $f0, -0x6330($v1)
    ctx->pc = 0x1d6fbcu;
    { uint32_t bits = FAST_READ32(0x339CD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6fc0: 0xc4819cd4  lwc1        $f1, -0x632C($a0)
    ctx->pc = 0x1d6fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294941908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6fc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d6fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d6fc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d6fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d6fcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d6fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d6fd0: 0xe6409cdc  swc1        $f0, -0x6324($s2)
    ctx->pc = 0x1d6fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294941916), bits); }
label_1d6fd4:
    // 0x1d6fd4: 0xc6419cdc  lwc1        $f1, -0x6324($s2)
    ctx->pc = 0x1d6fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294941916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6fd8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6fdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d6fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d6fe0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d6fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d6fe4: 0x8ea48a30  lw          $a0, -0x75D0($s5)
    ctx->pc = 0x1d6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937136)));
    // 0x1d6fe8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6FE8u;
    {
        const bool branch_taken_0x1d6fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fe8) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FF0u;
    // 0x1d6ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d6ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6ff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6ff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6FF8u;
    {
        const bool branch_taken_0x1d6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FF8u;
        // 0x1d6ffc: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ff8) {
            ctx->pc = 0x1D7010u;
            goto label_1d7010;
        }
    }
    ctx->pc = 0x1D7000u;
label_1d7000:
    // 0x1d7000: 0xc0616fa  jal         func_185BE8
    ctx->pc = 0x1D7000u;
    SET_GPR_U32(ctx, 31, 0x1D7008u);
    ctx->pc = 0x185BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185BE8u, 0x1D7000u, 0x1D7008u)) {
        return;
    }
    ctx->pc = 0x1D7008u;
label_1d7008:
    // 0x1d7008: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1d7008u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1d700c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7010:
    // 0x1d7010: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d7010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7018: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d7018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d701c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d701cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d7020: 0xc6419cdc  lwc1        $f1, -0x6324($s2)
    ctx->pc = 0x1d7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294941916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7024: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1d7024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1d7028: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D7028u;
    {
        const bool branch_taken_0x1d7028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7028) {
            ctx->pc = 0x1D702Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7028u;
            // 0x1d702c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7030u;
            goto label_1d7030;
        }
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x8e229c7c  lw          $v0, -0x6384($s1)
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941820)));
    // 0x1d7034: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1d7034u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d7038: 0x1810  mfhi        $v1
    ctx->pc = 0x1d7038u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d703c: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D703Cu;
    {
        const bool branch_taken_0x1d703c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d703c) {
            ctx->pc = 0x1D7040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D703Cu;
            // 0x1d7040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7050u;
            goto label_1d7050;
        }
    }
    ctx->pc = 0x1D7044u;
    // 0x1d7044: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d7048: 0xae229c7c  sw          $v0, -0x6384($s1)
    ctx->pc = 0x1d7048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941820), GPR_U32(ctx, 2));
    // 0x1d704c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7050:
    // 0x1d7050: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7050u;
    {
        const bool branch_taken_0x1d7050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7050u;
        // 0x1d7054: 0x8e229c7c  lw          $v0, -0x6384($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7050) {
            ctx->pc = 0x1D7064u;
            goto label_1d7064;
        }
    }
    ctx->pc = 0x1D7058u;
    // 0x1d7058: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d705c: 0xae229c7c  sw          $v0, -0x6384($s1)
    ctx->pc = 0x1d705cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941820), GPR_U32(ctx, 2));
    // 0x1d7060: 0x8e229c7c  lw          $v0, -0x6384($s1)
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941820)));
label_1d7064:
    // 0x1d7064: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1d7064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d7068: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D7068u;
    {
        const bool branch_taken_0x1d7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7068) {
            ctx->pc = 0x1D706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7068u;
            // 0x1d706c: 0xae249c7c  sw          $a0, -0x6384($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294941820), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7070u;
            goto label_1d7070;
        }
    }
    ctx->pc = 0x1D7070u;
label_1d7070:
    // 0x1d7070: 0x8e229c7c  lw          $v0, -0x6384($s1)
    ctx->pc = 0x1d7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941820)));
    // 0x1d7074: 0x284200c9  slti        $v0, $v0, 0xC9
    ctx->pc = 0x1d7074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1d7078: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7078u;
    {
        const bool branch_taken_0x1d7078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7078u;
        // 0x1d707c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7078) {
            ctx->pc = 0x1D7084u;
            goto label_1d7084;
        }
    }
    ctx->pc = 0x1D7080u;
    // 0x1d7080: 0xae229c7c  sw          $v0, -0x6384($s1)
    ctx->pc = 0x1d7080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941820), GPR_U32(ctx, 2));
label_1d7084:
    // 0x1d7084: 0xc6209c7c  lwc1        $f0, -0x6384($s1)
    ctx->pc = 0x1d7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294941820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d708c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1d7090: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d7090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d7094: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1d7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d7098: 0x26638758  addiu       $v1, $s3, -0x78A8
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936408));
    // 0x1d709c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d70a0: 0x0  nop
    ctx->pc = 0x1d70a0u;
    // NOP
    // 0x1d70a4: 0x0  nop
    ctx->pc = 0x1d70a4u;
    // NOP
    // 0x1d70a8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1d70a8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x1d70ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d70acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d70b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1d70b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1d70b4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1d70b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d70b8: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x1d70b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d70bc: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x1d70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1d70c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D70C0u;
    {
        const bool branch_taken_0x1d70c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C0u;
        // 0x1d70c4: 0x8e829c78  lw          $v0, -0x6388($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70c0) {
            ctx->pc = 0x1D70ECu;
            goto label_1d70ec;
        }
    }
    ctx->pc = 0x1D70C8u;
    // 0x1d70c8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1d70cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1d70ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1d70d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d70d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d70d4: 0x0  nop
    ctx->pc = 0x1d70d4u;
    // NOP
    // 0x1d70d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d70d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d70dc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1d70dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1d70e0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1d70e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d70e4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d70e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d70e8: 0x8e829c78  lw          $v0, -0x6388($s4)
    ctx->pc = 0x1d70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941816)));
label_1d70ec:
    // 0x1d70ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D70ECu;
    {
        const bool branch_taken_0x1d70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70ECu;
        // 0x1d70f0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70ec) {
            ctx->pc = 0x1D711Cu;
            goto label_1d711c;
        }
    }
    ctx->pc = 0x1D70F4u;
    // 0x1d70f4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1d70f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1d70f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d70f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d70fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d70fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7100: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d7100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7104: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d7104u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1d7108: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d710c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1d710cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d7110: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7114: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1d7114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d7118: 0xa3880a  movz        $s1, $a1, $v1
    ctx->pc = 0x1d7118u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5));
label_1d711c:
    // 0x1d711c: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x1d711cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d7120: 0x0  nop
    ctx->pc = 0x1d7120u;
    // NOP
    // 0x1d7124: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d7124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1d7128: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d712c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7130: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1d7130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7134: 0x0  nop
    ctx->pc = 0x1d7134u;
    // NOP
    // 0x1d7138: 0x0  nop
    ctx->pc = 0x1d7138u;
    // NOP
    // 0x1d713c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1d713cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x1d7140: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1d7140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1d7144: 0x0  nop
    ctx->pc = 0x1d7144u;
    // NOP
    // 0x1d7148: 0x0  nop
    ctx->pc = 0x1d7148u;
    // NOP
    // 0x1d714c: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1d714cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
    // 0x1d7150: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d7150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d7154: 0x0  nop
    ctx->pc = 0x1d7154u;
    // NOP
    // 0x1d7158: 0x0  nop
    ctx->pc = 0x1d7158u;
    // NOP
    // 0x1d715c: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x1d715cu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[20]);
    // 0x1d7160: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x1d7160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x1d7164: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x1d7164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d7168: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d7168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d716c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1d716cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d7170: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D7170u;
    {
        const bool branch_taken_0x1d7170 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7170u;
        // 0x1d7174: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7170) {
            ctx->pc = 0x1D725Cu;
            goto label_1d725c;
        }
    }
    ctx->pc = 0x1D7178u;
    // 0x1d7178: 0x3c150070  lui         $s5, 0x70
    ctx->pc = 0x1d7178u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
    // 0x1d717c: 0x3c1e0070  lui         $fp, 0x70
    ctx->pc = 0x1d717cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
    // 0x1d7180: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x1d7180u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
    // 0x1d7184: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x1d7184u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x1d7188: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1d7188u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1d718c: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x1d718cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
label_1d7190:
    // 0x1d7190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7194: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D7194u;
    {
        const bool branch_taken_0x1d7194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7194) {
            ctx->pc = 0x1D7198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7194u;
            // 0x1d7198: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D719Cu;
            goto label_1d719c;
        }
    }
    ctx->pc = 0x1D719Cu;
label_1d719c:
    // 0x1d719c: 0x8fc21a70  lw          $v0, 0x1A70($fp)
    ctx->pc = 0x1d719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6768)));
    // 0x1d71a0: 0x26a488b8  addiu       $a0, $s5, -0x7748
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936760));
    // 0x1d71a4: 0x8ea388b8  lw          $v1, -0x7748($s5)
    ctx->pc = 0x1d71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936760)));
    // 0x1d71a8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D71A8u;
    {
        const bool branch_taken_0x1d71a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71A8u;
        // 0x1d71ac: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71a8) {
            ctx->pc = 0x1D71C4u;
            goto label_1d71c4;
        }
    }
    ctx->pc = 0x1D71B0u;
    // 0x1d71b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d71b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D71B4u;
    {
        const bool branch_taken_0x1d71b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d71b4) {
            ctx->pc = 0x1D71B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D71B4u;
            // 0x1d71b8: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D71C8u;
            goto label_1d71c8;
        }
    }
    ctx->pc = 0x1D71BCu;
    // 0x1d71bc: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D71BCu;
    SET_GPR_U32(ctx, 31, 0x1D71C4u);
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D71BCu, 0x1D71C4u)) {
        return;
    }
    ctx->pc = 0x1D71C4u;
label_1d71c4:
    // 0x1d71c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1d71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d71c8:
    // 0x1d71c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D71C8u;
    {
        const bool branch_taken_0x1d71c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d71c8) {
            ctx->pc = 0x1D71DCu;
            goto label_1d71dc;
        }
    }
    ctx->pc = 0x1D71D0u;
    // 0x1d71d0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1d71d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d71d4: 0xc052540  jal         func_149500
    ctx->pc = 0x1D71D4u;
    SET_GPR_U32(ctx, 31, 0x1D71DCu);
    ctx->pc = 0x1D71D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71D4u;
    // 0x1d71d8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x149500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149500u, 0x1D71D4u, 0x1D71DCu)) {
        return;
    }
    ctx->pc = 0x1D71DCu;
label_1d71dc:
    // 0x1d71dc: 0xc06b76c  jal         func_1ADDB0
    ctx->pc = 0x1D71DCu;
    SET_GPR_U32(ctx, 31, 0x1D71E4u);
    ctx->pc = 0x1D71E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71DCu;
    // 0x1d71e0: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADDB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ADDB0u, 0x1D71DCu, 0x1D71E4u)) {
        return;
    }
    ctx->pc = 0x1D71E4u;
label_1d71e4:
    // 0x1d71e4: 0x8e8388c0  lw          $v1, -0x7740($s4)
    ctx->pc = 0x1d71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936768)));
    // 0x1d71e8: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x1d71ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D71ECu;
    {
        const bool branch_taken_0x1d71ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71ECu;
        // 0x1d71f0: 0x268488c0  addiu       $a0, $s4, -0x7740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71ec) {
            ctx->pc = 0x1D7208u;
            goto label_1d7208;
        }
    }
    ctx->pc = 0x1D71F4u;
    // 0x1d71f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d71f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D71F8u;
    {
        const bool branch_taken_0x1d71f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71F8u;
        // 0x1d71fc: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71f8) {
            ctx->pc = 0x1D720Cu;
            goto label_1d720c;
        }
    }
    ctx->pc = 0x1D7200u;
    // 0x1d7200: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D7200u;
    SET_GPR_U32(ctx, 31, 0x1D7208u);
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D7200u, 0x1D7208u)) {
        return;
    }
    ctx->pc = 0x1D7208u;
label_1d7208:
    // 0x1d7208: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d720c:
    // 0x1d720c: 0x8c629ce0  lw          $v0, -0x6320($v1)
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941920)));
    // 0x1d7210: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7210u;
    {
        const bool branch_taken_0x1d7210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7210u;
        // 0x1d7214: 0x8ee48bc4  lw          $a0, -0x743C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7210) {
            ctx->pc = 0x1D7220u;
            goto label_1d7220;
        }
    }
    ctx->pc = 0x1D7218u;
    // 0x1d7218: 0xc0664b4  jal         func_1992D0
    ctx->pc = 0x1D7218u;
    SET_GPR_U32(ctx, 31, 0x1D7220u);
    ctx->pc = 0x1D721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7218u;
    // 0x1d721c: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1992D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1992D0u, 0x1D7218u, 0x1D7220u)) {
        return;
    }
    ctx->pc = 0x1D7220u;
label_1d7220:
    // 0x1d7220: 0x8e421a70  lw          $v0, 0x1A70($s2)
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x1d7224: 0x8e6388c8  lw          $v1, -0x7738($s3)
    ctx->pc = 0x1d7224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936776)));
    // 0x1d7228: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7228u;
    {
        const bool branch_taken_0x1d7228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7228u;
        // 0x1d722c: 0x266488c8  addiu       $a0, $s3, -0x7738 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7228) {
            ctx->pc = 0x1D7244u;
            goto label_1d7244;
        }
    }
    ctx->pc = 0x1D7230u;
    // 0x1d7230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7234u;
    {
        const bool branch_taken_0x1d7234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7234) {
            ctx->pc = 0x1D7244u;
            goto label_1d7244;
        }
    }
    ctx->pc = 0x1D723Cu;
    // 0x1d723c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D723Cu;
    SET_GPR_U32(ctx, 31, 0x1D7244u);
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D723Cu, 0x1D7244u)) {
        return;
    }
    ctx->pc = 0x1D7244u;
label_1d7244:
    // 0x1d7244: 0xc07fc3a  jal         func_1FF0E8
    ctx->pc = 0x1D7244u;
    SET_GPR_U32(ctx, 31, 0x1D724Cu);
    ctx->pc = 0x1D7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7244u;
    // 0x1d7248: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF0E8u, 0x1D7244u, 0x1D724Cu)) {
        return;
    }
    ctx->pc = 0x1D724Cu;
label_1d724c:
    // 0x1d724c: 0xc07fca6  jal         func_1FF298
    ctx->pc = 0x1D724Cu;
    SET_GPR_U32(ctx, 31, 0x1D7254u);
    ctx->pc = 0x1D7250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D724Cu;
    // 0x1d7250: 0x26c41a80  addiu       $a0, $s6, 0x1A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF298u, 0x1D724Cu, 0x1D7254u)) {
        return;
    }
    ctx->pc = 0x1D7254u;
label_1d7254:
    // 0x1d7254: 0x1620ffce  bnez        $s1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D7254u;
    {
        const bool branch_taken_0x1d7254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7254u;
        // 0x1d7258: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7254) {
            ctx->pc = 0x1D7190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7190;
        }
    }
    ctx->pc = 0x1D725Cu;
label_1d725c:
    // 0x1d725c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7260: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7264: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1d7264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7268: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d7268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1d726c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1d726cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1d7270: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1d7270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1d7274: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d7274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d7278: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1d7278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d727c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1d727cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1d7280:
    // 0x1d7280: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1d7280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d7284:
    // 0x1d7284: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1d7284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d7288: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1d7288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d728c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1d728cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7290: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d7290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7294: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d7294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7298: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1d7298u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d729c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1d729cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d72a0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1d72a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d72a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d72a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d72a8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d72ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D72ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72ACu;
        // 0x1d72b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D72ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D72B4u;
    // 0x1d72b4: 0x0  nop
    ctx->pc = 0x1d72b4u;
    // NOP
    ctx->pc = 0x1d72b8u;
}
