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

// Function: sub_002AEEA8
// Address: 0x2aeea8 - 0x2af730
void sub_002AEEA8_0x2aeea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEEA8_0x2aeea8");
#endif

    switch (ctx->pc) {
        case 0x2aef78u: goto label_2aef78;
        case 0x2af008u: goto label_2af008;
        case 0x2af038u: goto label_2af038;
        case 0x2af060u: goto label_2af060;
        case 0x2af114u: goto label_2af114;
        case 0x2af1c8u: goto label_2af1c8;
        case 0x2af208u: goto label_2af208;
        case 0x2af248u: goto label_2af248;
        case 0x2af270u: goto label_2af270;
        case 0x2af378u: goto label_2af378;
        case 0x2af398u: goto label_2af398;
        case 0x2af3e4u: goto label_2af3e4;
        case 0x2af428u: goto label_2af428;
        case 0x2af460u: goto label_2af460;
        case 0x2af498u: goto label_2af498;
        case 0x2af4ccu: goto label_2af4cc;
        case 0x2af508u: goto label_2af508;
        case 0x2af544u: goto label_2af544;
        case 0x2af580u: goto label_2af580;
        case 0x2af5c8u: goto label_2af5c8;
        case 0x2af650u: goto label_2af650;
        default: break;
    }

    ctx->pc = 0x2aeea8u;

    // 0x2aeea8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2aeea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2aeeac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2aeeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2aeeb0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2aeeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2aeeb4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2aeeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2aeeb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2aeeb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeebc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2aeebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2aeec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aeec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeec4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2aeec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2aeec8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2aeec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2aeecc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2aeeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2aeed0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2aeed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2aeed4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2aeed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2aeed8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2aeed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2aeedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aeedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aeee0: 0xac603034  sw          $zero, 0x3034($v1)
    ctx->pc = 0x2aeee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x683034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x683034u, _value); } while (0);
    // 0x2aeee4: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2aeee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2aeee8: 0x8e2503e4  lw          $a1, 0x3E4($s1)
    ctx->pc = 0x2aeee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x2aeeec: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2AEEECu;
    {
        const bool branch_taken_0x2aeeec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEECu;
        // 0x2aeef0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeeec) {
            ctx->pc = 0x2AEFD8u;
            goto label_2aefd8;
        }
    }
    ctx->pc = 0x2AEEF4u;
    // 0x2aeef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aeef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeef8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AEEF8u;
    {
        const bool branch_taken_0x2aeef8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2AEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEF8u;
        // 0x2aeefc: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeef8) {
            ctx->pc = 0x2AEF50u;
            goto label_2aef50;
        }
    }
    ctx->pc = 0x2AEF00u;
    // 0x2aef00: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AEF00u;
    {
        const bool branch_taken_0x2aef00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aef00) {
            ctx->pc = 0x2AEF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF00u;
            // 0x2aef04: 0x8e2203e0  lw          $v0, 0x3E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF7Cu;
            goto label_2aef7c;
        }
    }
    ctx->pc = 0x2AEF08u;
    // 0x2aef08: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2aef08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2aef0c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AEF0Cu;
    {
        const bool branch_taken_0x2aef0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aef0c) {
            ctx->pc = 0x2AEF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF0Cu;
            // 0x2aef10: 0x8e2203e0  lw          $v0, 0x3E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF54u;
            goto label_2aef54;
        }
    }
    ctx->pc = 0x2AEF14u;
    // 0x2aef14: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2aef14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2aef18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEF18u;
    {
        const bool branch_taken_0x2aef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF18u;
        // 0x2aef1c: 0x8e2203e0  lw          $v0, 0x3E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef18) {
            ctx->pc = 0x2AEF38u;
            goto label_2aef38;
        }
    }
    ctx->pc = 0x2AEF20u;
    // 0x2aef20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2aef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aef24: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEF24u;
    {
        const bool branch_taken_0x2aef24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aef24) {
            ctx->pc = 0x2AEF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF24u;
            // 0x2aef28: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF2Cu;
            goto label_2aef2c;
        }
    }
    ctx->pc = 0x2AEF2Cu;
label_2aef2c:
    // 0x2aef2c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2aef30: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2aef30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aef34: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x2aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
label_2aef38:
    // 0x2aef38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aef3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2aef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aef40: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEF40u;
    {
        const bool branch_taken_0x2aef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aef40) {
            ctx->pc = 0x2AEF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF40u;
            // 0x2aef44: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF48u;
            goto label_2aef48;
        }
    }
    ctx->pc = 0x2AEF48u;
label_2aef48:
    // 0x2aef48: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2aef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2aef4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2aef4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2aef50:
    // 0x2aef50: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x2aef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
label_2aef54:
    // 0x2aef54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aef58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2aef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aef5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEF5Cu;
    {
        const bool branch_taken_0x2aef5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aef5c) {
            ctx->pc = 0x2AEF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF5Cu;
            // 0x2aef60: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF64u;
            goto label_2aef64;
        }
    }
    ctx->pc = 0x2AEF64u;
label_2aef64:
    // 0x2aef64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2aef68: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x2aef68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2aef6c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AEF6Cu;
    {
        const bool branch_taken_0x2aef6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF6Cu;
        // 0x2aef70: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef6c) {
            ctx->pc = 0x2AEFD8u;
            goto label_2aefd8;
        }
    }
    ctx->pc = 0x2AEF74u;
    // 0x2aef74: 0x0  nop
    ctx->pc = 0x2aef74u;
    // NOP
label_2aef78:
    // 0x2aef78: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x2aef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
label_2aef7c:
    // 0x2aef7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aef80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2aef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aef84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEF84u;
    {
        const bool branch_taken_0x2aef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aef84) {
            ctx->pc = 0x2AEF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF84u;
            // 0x2aef88: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEF8Cu;
            goto label_2aef8c;
        }
    }
    ctx->pc = 0x2AEF8Cu;
label_2aef8c:
    // 0x2aef8c: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x2aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
    // 0x2aef90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aef94: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2aef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2aef98: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEF98u;
    {
        const bool branch_taken_0x2aef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aef98) {
            ctx->pc = 0x2AEF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF98u;
            // 0x2aef9c: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEFA0u;
            goto label_2aefa0;
        }
    }
    ctx->pc = 0x2AEFA0u;
label_2aefa0:
    // 0x2aefa0: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x2aefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
    // 0x2aefa4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aefa8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2aefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2aefac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEFACu;
    {
        const bool branch_taken_0x2aefac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aefac) {
            ctx->pc = 0x2AEFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEFACu;
            // 0x2aefb0: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEFB4u;
            goto label_2aefb4;
        }
    }
    ctx->pc = 0x2AEFB4u;
label_2aefb4:
    // 0x2aefb4: 0x8e2203e0  lw          $v0, 0x3E0($s1)
    ctx->pc = 0x2aefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 992)));
    // 0x2aefb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aefbc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2aefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2aefc0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEFC0u;
    {
        const bool branch_taken_0x2aefc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aefc0) {
            ctx->pc = 0x2AEFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEFC0u;
            // 0x2aefc4: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEFC8u;
            goto label_2aefc8;
        }
    }
    ctx->pc = 0x2AEFC8u;
label_2aefc8:
    // 0x2aefc8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2aefc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2aefcc: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x2aefccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2aefd0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AEFD0u;
    {
        const bool branch_taken_0x2aefd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFD0u;
        // 0x2aefd4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aefd0) {
            ctx->pc = 0x2AEF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aef78;
        }
    }
    ctx->pc = 0x2AEFD8u;
label_2aefd8:
    // 0x2aefd8: 0xae2003e4  sw          $zero, 0x3E4($s1)
    ctx->pc = 0x2aefd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 996), GPR_U32(ctx, 0));
    // 0x2aefdc: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2aefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2aefe0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x2aefe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x2aefe4: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x2aefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x2aefe8: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x2aefe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x2aefec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2aefecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2aeff0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2aeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2aeff4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AEFF4u;
    {
        const bool branch_taken_0x2aeff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFF4u;
        // 0x2aeff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeff4) {
            ctx->pc = 0x2AF02Cu;
            goto label_2af02c;
        }
    }
    ctx->pc = 0x2AEFFCu;
    // 0x2aeffc: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x2aeffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2af000: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2af000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2af004: 0x0  nop
    ctx->pc = 0x2af004u;
    // NOP
label_2af008:
    // 0x2af008: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2af008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2af00c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2af010: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2af010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2af014: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2af014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2af018: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2af018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2af01c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2af01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af020: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AF020u;
    {
        const bool branch_taken_0x2af020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF020u;
        // 0x2af024: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af020) {
            ctx->pc = 0x2AF008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af008;
        }
    }
    ctx->pc = 0x2AF028u;
    // 0x2af028: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2af028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2af02c:
    // 0x2af02c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2AF02Cu;
    {
        const bool branch_taken_0x2af02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF02Cu;
        // 0x2af030: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af02c) {
            ctx->pc = 0x2AF1F0u;
            goto label_2af1f0;
        }
    }
    ctx->pc = 0x2AF034u;
    // 0x2af034: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2af038:
    // 0x2af038: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2af038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2af03c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2af03cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af044: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af048: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2AF048u;
    {
        const bool branch_taken_0x2af048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF048u;
        // 0x2af04c: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af048) {
            ctx->pc = 0x2AF1DCu;
            goto label_2af1dc;
        }
    }
    ctx->pc = 0x2AF050u;
    // 0x2af050: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2af050u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2af054: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2af054u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af058: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2af058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af05c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2af05cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af060:
    // 0x2af060: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2af060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2af064: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2af064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2af068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af06c: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2af06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2af070: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2AF070u;
    {
        const bool branch_taken_0x2af070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF070u;
        // 0x2af074: 0x3208ffff  andi        $t0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af070) {
            ctx->pc = 0x2AF1C8u;
            goto label_2af1c8;
        }
    }
    ctx->pc = 0x2AF078u;
    // 0x2af078: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x2af078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2af07c: 0x81942  srl         $v1, $t0, 5
    ctx->pc = 0x2af07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
    // 0x2af080: 0x3104001f  andi        $a0, $t0, 0x1F
    ctx->pc = 0x2af080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x2af084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af08c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af090: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x2af090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af094: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af098: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af09c: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AF09Cu;
    {
        const bool branch_taken_0x2af09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af09c) {
            ctx->pc = 0x2AF0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF09Cu;
            // 0x2af0a0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF1CCu;
            goto label_2af1cc;
        }
    }
    ctx->pc = 0x2AF0A4u;
    // 0x2af0a4: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2af0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2af0a8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2af0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2af0ac: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2af0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2af0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af0b8: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2af0bc: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AF0BCu;
    {
        const bool branch_taken_0x2af0bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0BCu;
        // 0x2af0c0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0bc) {
            ctx->pc = 0x2AF174u;
            goto label_2af174;
        }
    }
    ctx->pc = 0x2AF0C4u;
    // 0x2af0c4: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x2af0c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2af0c8: 0x8ce30064  lw          $v1, 0x64($a3)
    ctx->pc = 0x2af0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
    // 0x2af0cc: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x2af0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2af0d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2af0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2af0d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2af0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af0d8: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x2af0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2af0dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2af0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2af0e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af0e4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2af0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2af0e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF0E8u;
    {
        const bool branch_taken_0x2af0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0E8u;
        // 0x2af0ec: 0x1491021  addu        $v0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0e8) {
            ctx->pc = 0x2AF11Cu;
            goto label_2af11c;
        }
    }
    ctx->pc = 0x2AF0F0u;
    // 0x2af0f0: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x2af0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2af0f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2af0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af0f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af0fc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2af0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2af100: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF100u;
    {
        const bool branch_taken_0x2af100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF100u;
        // 0x2af104: 0x1491021  addu        $v0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af100) {
            ctx->pc = 0x2AF11Cu;
            goto label_2af11c;
        }
    }
    ctx->pc = 0x2AF108u;
    // 0x2af108: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2af108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af10c: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x2AF10Cu;
    SET_GPR_U32(ctx, 31, 0x2AF114u);
    ctx->pc = 0x2AF110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF10Cu;
    // 0x2af110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x2AF10Cu, 0x2AF114u)) {
        return;
    }
    ctx->pc = 0x2AF114u;
label_2af114:
    // 0x2af114: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2AF114u;
    {
        const bool branch_taken_0x2af114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF114u;
        // 0x2af118: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af114) {
            ctx->pc = 0x2AF1CCu;
            goto label_2af1cc;
        }
    }
    ctx->pc = 0x2AF11Cu;
label_2af11c:
    // 0x2af11c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2af11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af120: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2af120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2af124: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AF124u;
    {
        const bool branch_taken_0x2af124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af124) {
            ctx->pc = 0x2AF128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF124u;
            // 0x2af128: 0x8e64007c  lw          $a0, 0x7C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF178u;
            goto label_2af178;
        }
    }
    ctx->pc = 0x2AF12Cu;
    // 0x2af12c: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2af12cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2af130: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2af130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2af134: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af138: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af13c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af140: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af144: 0x952004  sllv        $a0, $s5, $a0
    ctx->pc = 0x2af144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af14c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af150: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF150u;
    {
        const bool branch_taken_0x2af150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af150) {
            ctx->pc = 0x2AF154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF150u;
            // 0x2af154: 0x8e64007c  lw          $a0, 0x7C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF178u;
            goto label_2af178;
        }
    }
    ctx->pc = 0x2AF158u;
    // 0x2af158: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2af158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2af15c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2af15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2af160: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af16c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2af16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2af170: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2af170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_2af174:
    // 0x2af174: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x2af174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_2af178:
    // 0x2af178: 0x83942  srl         $a3, $t0, 5
    ctx->pc = 0x2af178u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
    // 0x2af17c: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x2af17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2af180: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2af184: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2af188: 0x8e650074  lw          $a1, 0x74($s3)
    ctx->pc = 0x2af188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2af18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af190: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2af190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2af194: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x2af194u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2af198: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2af19c: 0xae64007c  sw          $a0, 0x7C($s3)
    ctx->pc = 0x2af19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 4));
    // 0x2af1a0: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x2af1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x2af1a4: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x2af1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2af1a8: 0x751804  sllv        $v1, $s5, $v1
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 3) & 0x1F));
    // 0x2af1ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2af1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2af1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1b4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x2af1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2af1b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2af1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2af1bc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2af1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2af1c0: 0xc0abe20  jal         func_2AF880
    ctx->pc = 0x2AF1C0u;
    SET_GPR_U32(ctx, 31, 0x2AF1C8u);
    ctx->pc = 0x2AF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF1C0u;
    // 0x2af1c4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AF880u, 0x2AF1C0u, 0x2AF1C8u)) {
        return;
    }
    ctx->pc = 0x2AF1C8u;
label_2af1c8:
    // 0x2af1c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2af1c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2af1cc:
    // 0x2af1cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2af1d0: 0x2e820020  sltiu       $v0, $s4, 0x20
    ctx->pc = 0x2af1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2af1d4: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x2AF1D4u;
    {
        const bool branch_taken_0x2af1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1D4u;
        // 0x2af1d8: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1d4) {
            ctx->pc = 0x2AF060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af060;
        }
    }
    ctx->pc = 0x2AF1DCu;
label_2af1dc:
    // 0x2af1dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2af1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2af1e0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2af1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2af1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af1e8: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x2AF1E8u;
    {
        const bool branch_taken_0x2af1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1E8u;
        // 0x2af1ec: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1e8) {
            ctx->pc = 0x2AF038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af038;
        }
    }
    ctx->pc = 0x2AF1F0u;
label_2af1f0:
    // 0x2af1f0: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x2af1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2af1f4: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2AF1F4u;
    {
        const bool branch_taken_0x2af1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1F4u;
        // 0x2af1f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1f4) {
            ctx->pc = 0x2AF450u;
            goto label_2af450;
        }
    }
    ctx->pc = 0x2AF1FCu;
    // 0x2af1fc: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x2af1fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2af200: 0x241e00e0  addiu       $fp, $zero, 0xE0
    ctx->pc = 0x2af200u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2af204: 0x8e340084  lw          $s4, 0x84($s1)
    ctx->pc = 0x2af204u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2af208:
    // 0x2af208: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2af208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2af20c: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x2af20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2af210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af214: 0x2975018  mult        $t2, $s4, $s7
    ctx->pc = 0x2af214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2af218: 0x8e260080  lw          $a2, 0x80($s1)
    ctx->pc = 0x2af218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2af21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af220: 0x8e270088  lw          $a3, 0x88($s1)
    ctx->pc = 0x2af220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2af224: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2af224u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af228: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2af228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af22c: 0x8e680080  lw          $t0, 0x80($s3)
    ctx->pc = 0x2af22cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2af230: 0xf43823  subu        $a3, $a3, $s4
    ctx->pc = 0x2af230u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x2af234: 0x8e690070  lw          $t1, 0x70($s3)
    ctx->pc = 0x2af234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2af238: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x2af238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2af23c: 0x8e350090  lw          $s5, 0x90($s1)
    ctx->pc = 0x2af23cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2af240: 0xc0ab256  jal         func_2AC958
    ctx->pc = 0x2AF240u;
    SET_GPR_U32(ctx, 31, 0x2AF248u);
    ctx->pc = 0x2AF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF240u;
    // 0x2af244: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AC958u, 0x2AF240u, 0x2AF248u)) {
        return;
    }
    ctx->pc = 0x2AF248u;
label_2af248:
    // 0x2af248: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2af248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2af24c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af250: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x2af250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2af254: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2AF254u;
    {
        const bool branch_taken_0x2af254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF254u;
        // 0x2af258: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af254) {
            ctx->pc = 0x2AF33Cu;
            goto label_2af33c;
        }
    }
    ctx->pc = 0x2AF25Cu;
    // 0x2af25c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2af25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2af260: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x2af260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2af264: 0x2424818  mult        $t1, $s2, $v0
    ctx->pc = 0x2af264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2af268: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2af268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af26c: 0x8e280080  lw          $t0, 0x80($s1)
    ctx->pc = 0x2af26cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2af270:
    // 0x2af270: 0x1283821  addu        $a3, $t1, $t0
    ctx->pc = 0x2af270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2af274: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2af274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2af278: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2af278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2af27c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF27Cu;
    {
        const bool branch_taken_0x2af27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF27Cu;
        // 0x2af280: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af27c) {
            ctx->pc = 0x2AF2B0u;
            goto label_2af2b0;
        }
    }
    ctx->pc = 0x2AF284u;
    // 0x2af284: 0x94640020  lhu         $a0, 0x20($v1)
    ctx->pc = 0x2af284u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2af288: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x2af288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2af28c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af290: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af294: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af298: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af29c: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x2af29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af2a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af2a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af2a8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AF2A8u;
    {
        const bool branch_taken_0x2af2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af2a8) {
            ctx->pc = 0x2AF2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2A8u;
            // 0x2af2ac: 0x25290014  addiu       $t1, $t1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF328u;
            goto label_2af328;
        }
    }
    ctx->pc = 0x2AF2B0u;
label_2af2b0:
    // 0x2af2b0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2af2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2af2b4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AF2B4u;
    {
        const bool branch_taken_0x2af2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af2b4) {
            ctx->pc = 0x2AF2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2B4u;
            // 0x2af2b8: 0x8e220084  lw          $v0, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF2ECu;
            goto label_2af2ec;
        }
    }
    ctx->pc = 0x2AF2BCu;
    // 0x2af2bc: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2af2bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2af2c0: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x2af2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2af2c4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af2c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af2cc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af2d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af2d4: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x2af2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af2d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af2dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af2e0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AF2E0u;
    {
        const bool branch_taken_0x2af2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af2e0) {
            ctx->pc = 0x2AF2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2E0u;
            // 0x2af2e4: 0x25290014  addiu       $t1, $t1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF328u;
            goto label_2af328;
        }
    }
    ctx->pc = 0x2AF2E8u;
    // 0x2af2e8: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2af2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2af2ec:
    // 0x2af2ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2af2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2af2f0: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x2af2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2af2f4: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x2af2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x2af2f8: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2af2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2af2fc: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2af2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2af300: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2af300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2af304: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x2af304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2af308: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x2af308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2af30c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2af310: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x2af310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2af314: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x2af314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2af318: 0xb0e6000f  sdl         $a2, 0xF($a3)
    ctx->pc = 0x2af318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2af31c: 0xb4e60008  sdr         $a2, 0x8($a3)
    ctx->pc = 0x2af31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2af320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF320u;
    {
        const bool branch_taken_0x2af320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF320u;
        // 0x2af324: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af320) {
            ctx->pc = 0x2AF32Cu;
            goto label_2af32c;
        }
    }
    ctx->pc = 0x2AF328u;
label_2af328:
    // 0x2af328: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2af328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2af32c:
    // 0x2af32c: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2af330: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2af330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af334: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2AF334u;
    {
        const bool branch_taken_0x2af334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af334) {
            ctx->pc = 0x2AF338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF334u;
            // 0x2af338: 0x8e280080  lw          $t0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af270;
        }
    }
    ctx->pc = 0x2AF33Cu;
label_2af33c:
    // 0x2af33c: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x2af33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2af340: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x2af340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2af344: 0x2971818  mult        $v1, $s4, $s7
    ctx->pc = 0x2af344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2af348: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x2af348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2af34c: 0xe63818  mult        $a3, $a3, $a2
    ctx->pc = 0x2af34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2af350: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2af350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2af354: 0x8e260084  lw          $a2, 0x84($s1)
    ctx->pc = 0x2af354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2af358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2af358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af35c: 0x8e280094  lw          $t0, 0x94($s1)
    ctx->pc = 0x2af35cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2af360: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2af360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af364: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2af364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2af368: 0xd43023  subu        $a2, $a2, $s4
    ctx->pc = 0x2af368u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2af36c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2af36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2af370: 0xc0b12cc  jal         func_2C4B30
    ctx->pc = 0x2AF370u;
    SET_GPR_U32(ctx, 31, 0x2AF378u);
    ctx->pc = 0x2AF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF370u;
    // 0x2af374: 0x1154023  subu        $t0, $t0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C4B30u, 0x2AF370u, 0x2AF378u)) {
        return;
    }
    ctx->pc = 0x2AF378u;
label_2af378:
    // 0x2af378: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x2af378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2af37c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af380: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x2af380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2af384: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AF384u;
    {
        const bool branch_taken_0x2af384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF384u;
        // 0x2af388: 0xae230090  sw          $v1, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af384) {
            ctx->pc = 0x2AF43Cu;
            goto label_2af43c;
        }
    }
    ctx->pc = 0x2AF38Cu;
    // 0x2af38c: 0x25ea018  mult        $s4, $s2, $fp
    ctx->pc = 0x2af38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2af390: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2af390u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af394: 0x0  nop
    ctx->pc = 0x2af394u;
    // NOP
label_2af398:
    // 0x2af398: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2af398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2af39c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2af39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2af3a0: 0x8e0600b4  lw          $a2, 0xB4($s0)
    ctx->pc = 0x2af3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2af3a4: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2af3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2af3a8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF3A8u;
    {
        const bool branch_taken_0x2af3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af3a8) {
            ctx->pc = 0x2AF3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF3A8u;
            // 0x2af3ac: 0x8e0600bc  lw          $a2, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF3E8u;
            goto label_2af3e8;
        }
    }
    ctx->pc = 0x2AF3B0u;
    // 0x2af3b0: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2af3b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2af3b4: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x2af3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2af3b8: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af3bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af3c0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af3c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af3c8: 0x952004  sllv        $a0, $s5, $a0
    ctx->pc = 0x2af3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af3cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af3d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF3D4u;
    {
        const bool branch_taken_0x2af3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3D4u;
        // 0x2af3d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3d4) {
            ctx->pc = 0x2AF3E4u;
            goto label_2af3e4;
        }
    }
    ctx->pc = 0x2AF3DCu;
    // 0x2af3dc: 0xc0abdcc  jal         func_2AF730
    ctx->pc = 0x2AF3DCu;
    SET_GPR_U32(ctx, 31, 0x2AF3E4u);
    ctx->pc = 0x2AF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3DCu;
    // 0x2af3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AF730u, 0x2AF3DCu, 0x2AF3E4u)) {
        return;
    }
    ctx->pc = 0x2AF3E4u;
label_2af3e4:
    // 0x2af3e4: 0x8e0600bc  lw          $a2, 0xBC($s0)
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2af3e8:
    // 0x2af3e8: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2af3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2af3ec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF3ECu;
    {
        const bool branch_taken_0x2af3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af3ec) {
            ctx->pc = 0x2AF3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF3ECu;
            // 0x2af3f0: 0x8e220090  lw          $v0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF42Cu;
            goto label_2af42c;
        }
    }
    ctx->pc = 0x2AF3F4u;
    // 0x2af3f4: 0x94c40020  lhu         $a0, 0x20($a2)
    ctx->pc = 0x2af3f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2af3f8: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x2af3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2af3fc: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af400: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af404: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af408: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af40c: 0x952004  sllv        $a0, $s5, $a0
    ctx->pc = 0x2af40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af414: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF418u;
    {
        const bool branch_taken_0x2af418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF418u;
        // 0x2af41c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af418) {
            ctx->pc = 0x2AF428u;
            goto label_2af428;
        }
    }
    ctx->pc = 0x2AF420u;
    // 0x2af420: 0xc0abdcc  jal         func_2AF730
    ctx->pc = 0x2AF420u;
    SET_GPR_U32(ctx, 31, 0x2AF428u);
    ctx->pc = 0x2AF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF420u;
    // 0x2af424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AF730u, 0x2AF420u, 0x2AF428u)) {
        return;
    }
    ctx->pc = 0x2AF428u;
label_2af428:
    // 0x2af428: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x2af428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2af42c:
    // 0x2af42c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2af42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2af430: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2af430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af434: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2AF434u;
    {
        const bool branch_taken_0x2af434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF434u;
        // 0x2af438: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af434) {
            ctx->pc = 0x2AF398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af398;
        }
    }
    ctx->pc = 0x2AF43Cu;
label_2af43c:
    // 0x2af43c: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x2af43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2af440: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2af440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af444: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2af444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af448: 0x5440ff6f  bnel        $v0, $zero, . + 4 + (-0x91 << 2)
    ctx->pc = 0x2AF448u;
    {
        const bool branch_taken_0x2af448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af448) {
            ctx->pc = 0x2AF44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF448u;
            // 0x2af44c: 0x8e340084  lw          $s4, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af208;
        }
    }
    ctx->pc = 0x2AF450u;
label_2af450:
    // 0x2af450: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2af450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2af454: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2AF454u;
    {
        const bool branch_taken_0x2af454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF454u;
        // 0x2af458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af454) {
            ctx->pc = 0x2AF5A8u;
            goto label_2af5a8;
        }
    }
    ctx->pc = 0x2AF45Cu;
    // 0x2af45c: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2af45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_2af460:
    // 0x2af460: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2af460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2af464: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x2af464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2af468: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2af468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af46c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2af470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af474: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af478: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2af478u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2af47c: 0xa2a024  and         $s4, $a1, $v0
    ctx->pc = 0x2af47cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2af480: 0x12800044  beqz        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AF480u;
    {
        const bool branch_taken_0x2af480 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF480u;
        // 0x2af484: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af480) {
            ctx->pc = 0x2AF594u;
            goto label_2af594;
        }
    }
    ctx->pc = 0x2AF488u;
    // 0x2af488: 0x109140  sll         $s2, $s0, 5
    ctx->pc = 0x2af488u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2af48c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2af48cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af490: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2af490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af494: 0x0  nop
    ctx->pc = 0x2af494u;
    // NOP
label_2af498:
    // 0x2af498: 0x2901024  and         $v0, $s4, $s0
    ctx->pc = 0x2af498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
    // 0x2af49c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF49Cu;
    {
        const bool branch_taken_0x2af49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF49Cu;
        // 0x2af4a0: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af49c) {
            ctx->pc = 0x2AF4CCu;
            goto label_2af4cc;
        }
    }
    ctx->pc = 0x2AF4A4u;
    // 0x2af4a4: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2af4a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af4ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af4b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af4b4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2af4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af4b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2af4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2af4bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF4BCu;
    {
        const bool branch_taken_0x2af4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4BCu;
        // 0x2af4c0: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4bc) {
            ctx->pc = 0x2AF4D0u;
            goto label_2af4d0;
        }
    }
    ctx->pc = 0x2AF4C4u;
    // 0x2af4c4: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x2AF4C4u;
    SET_GPR_U32(ctx, 31, 0x2AF4CCu);
    ctx->pc = 0x2AF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4C4u;
    // 0x2af4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x2AF4C4u, 0x2AF4CCu)) {
        return;
    }
    ctx->pc = 0x2AF4CCu;
label_2af4cc:
    // 0x2af4cc: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2af4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2af4d0:
    // 0x2af4d0: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2af4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2af4d4: 0x2901024  and         $v0, $s4, $s0
    ctx->pc = 0x2af4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
    // 0x2af4d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF4D8u;
    {
        const bool branch_taken_0x2af4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4D8u;
        // 0x2af4dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4d8) {
            ctx->pc = 0x2AF508u;
            goto label_2af508;
        }
    }
    ctx->pc = 0x2AF4E0u;
    // 0x2af4e0: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2af4e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af4e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af4ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af4f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2af4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af4f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2af4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2af4f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF4F8u;
    {
        const bool branch_taken_0x2af4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4F8u;
        // 0x2af4fc: 0x26430002  addiu       $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4f8) {
            ctx->pc = 0x2AF50Cu;
            goto label_2af50c;
        }
    }
    ctx->pc = 0x2AF500u;
    // 0x2af500: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x2AF500u;
    SET_GPR_U32(ctx, 31, 0x2AF508u);
    ctx->pc = 0x2AF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF500u;
    // 0x2af504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x2AF500u, 0x2AF508u)) {
        return;
    }
    ctx->pc = 0x2AF508u;
label_2af508:
    // 0x2af508: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x2af508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2af50c:
    // 0x2af50c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2af50cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2af510: 0x2901024  and         $v0, $s4, $s0
    ctx->pc = 0x2af510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
    // 0x2af514: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF514u;
    {
        const bool branch_taken_0x2af514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF514u;
        // 0x2af518: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af514) {
            ctx->pc = 0x2AF544u;
            goto label_2af544;
        }
    }
    ctx->pc = 0x2AF51Cu;
    // 0x2af51c: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2af51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2af520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af528: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af52c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2af52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af530: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2af530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2af534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF534u;
    {
        const bool branch_taken_0x2af534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF534u;
        // 0x2af538: 0x26430003  addiu       $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af534) {
            ctx->pc = 0x2AF548u;
            goto label_2af548;
        }
    }
    ctx->pc = 0x2AF53Cu;
    // 0x2af53c: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x2AF53Cu;
    SET_GPR_U32(ctx, 31, 0x2AF544u);
    ctx->pc = 0x2AF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF53Cu;
    // 0x2af540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x2AF53Cu, 0x2AF544u)) {
        return;
    }
    ctx->pc = 0x2AF544u;
label_2af544:
    // 0x2af544: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x2af544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_2af548:
    // 0x2af548: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2af548u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2af54c: 0x2901024  and         $v0, $s4, $s0
    ctx->pc = 0x2af54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
    // 0x2af550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF550u;
    {
        const bool branch_taken_0x2af550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF550u;
        // 0x2af554: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af550) {
            ctx->pc = 0x2AF580u;
            goto label_2af580;
        }
    }
    ctx->pc = 0x2AF558u;
    // 0x2af558: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2af558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2af55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af564: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2af564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af568: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2af568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af56c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2af56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2af570: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF570u;
    {
        const bool branch_taken_0x2af570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af570) {
            ctx->pc = 0x2AF574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF570u;
            // 0x2af574: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF584u;
            goto label_2af584;
        }
    }
    ctx->pc = 0x2AF578u;
    // 0x2af578: 0xc0ab512  jal         func_2AD448
    ctx->pc = 0x2AF578u;
    SET_GPR_U32(ctx, 31, 0x2AF580u);
    ctx->pc = 0x2AF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF578u;
    // 0x2af57c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD448u, 0x2AF578u, 0x2AF580u)) {
        return;
    }
    ctx->pc = 0x2AF580u;
label_2af580:
    // 0x2af580: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2af580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2af584:
    // 0x2af584: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2af584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2af588: 0x2ea20020  sltiu       $v0, $s5, 0x20
    ctx->pc = 0x2af588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2af58c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2AF58Cu;
    {
        const bool branch_taken_0x2af58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF58Cu;
        // 0x2af590: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af58c) {
            ctx->pc = 0x2AF498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af498;
        }
    }
    ctx->pc = 0x2AF594u;
label_2af594:
    // 0x2af594: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2af594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2af598: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2af598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af59c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2af59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af5a0: 0x5440ffaf  bnel        $v0, $zero, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2AF5A0u;
    {
        const bool branch_taken_0x2af5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af5a0) {
            ctx->pc = 0x2AF5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF5A0u;
            // 0x2af5a4: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af460;
        }
    }
    ctx->pc = 0x2AF5A8u;
label_2af5a8:
    // 0x2af5a8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2af5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2af5ac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AF5ACu;
    {
        const bool branch_taken_0x2af5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF5ACu;
        // 0x2af5b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af5ac) {
            ctx->pc = 0x2AF634u;
            goto label_2af634;
        }
    }
    ctx->pc = 0x2AF5B4u;
    // 0x2af5b4: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x2af5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2af5b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2af5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af5bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2af5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2af5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2af5c4: 0x0  nop
    ctx->pc = 0x2af5c4u;
    // NOP
label_2af5c8:
    // 0x2af5c8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2af5cc: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AF5CCu;
    {
        const bool branch_taken_0x2af5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af5cc) {
            ctx->pc = 0x2AF5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF5CCu;
            // 0x2af5d0: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF604u;
            goto label_2af604;
        }
    }
    ctx->pc = 0x2AF5D4u;
    // 0x2af5d4: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2af5d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2af5d8: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2af5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2af5dc: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af5e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af5e4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af5e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af5ec: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x2af5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af5f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af5f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF5F8u;
    {
        const bool branch_taken_0x2af5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af5f8) {
            ctx->pc = 0x2AF5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF5F8u;
            // 0x2af5fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF620u;
            goto label_2af620;
        }
    }
    ctx->pc = 0x2AF600u;
    // 0x2af600: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2af600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2af604:
    // 0x2af604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2af604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2af608: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af60c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2af60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x2af610: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2af610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2af614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF618u;
    {
        const bool branch_taken_0x2af618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF618u;
        // 0x2af61c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af618) {
            ctx->pc = 0x2AF624u;
            goto label_2af624;
        }
    }
    ctx->pc = 0x2AF620u;
label_2af620:
    // 0x2af620: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2af624:
    // 0x2af624: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2af624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2af628: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2af628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af62c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2AF62Cu;
    {
        const bool branch_taken_0x2af62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af62c) {
            ctx->pc = 0x2AF630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF62Cu;
            // 0x2af630: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af5c8;
        }
    }
    ctx->pc = 0x2AF634u;
label_2af634:
    // 0x2af634: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2af634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2af638: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AF638u;
    {
        const bool branch_taken_0x2af638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF638u;
        // 0x2af63c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af638) {
            ctx->pc = 0x2AF6FCu;
            goto label_2af6fc;
        }
    }
    ctx->pc = 0x2AF640u;
    // 0x2af640: 0x8e2800b4  lw          $t0, 0xB4($s1)
    ctx->pc = 0x2af640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2af644: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2af644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af648: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2af648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af64c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2af64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2af650:
    // 0x2af650: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x2af650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2af654: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2af654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2af658: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AF658u;
    {
        const bool branch_taken_0x2af658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af658) {
            ctx->pc = 0x2AF65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF658u;
            // 0x2af65c: 0x8cc20058  lw          $v0, 0x58($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF690u;
            goto label_2af690;
        }
    }
    ctx->pc = 0x2AF660u;
    // 0x2af660: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2af660u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2af664: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2af664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2af668: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af670: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af674: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af678: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2af678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af67c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af680: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af684: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AF684u;
    {
        const bool branch_taken_0x2af684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af684) {
            ctx->pc = 0x2AF688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF684u;
            // 0x2af688: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF6E8u;
            goto label_2af6e8;
        }
    }
    ctx->pc = 0x2AF68Cu;
    // 0x2af68c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x2af68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_2af690:
    // 0x2af690: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2af690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2af694: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2AF694u;
    {
        const bool branch_taken_0x2af694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af694) {
            ctx->pc = 0x2AF698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF694u;
            // 0x2af698: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF6CCu;
            goto label_2af6cc;
        }
    }
    ctx->pc = 0x2AF69Cu;
    // 0x2af69c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x2af69cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2af6a0: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2af6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2af6a4: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2af6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2af6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af6ac: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2af6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2af6b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af6b4: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x2af6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2af6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af6bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af6c0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF6C0u;
    {
        const bool branch_taken_0x2af6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af6c0) {
            ctx->pc = 0x2AF6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF6C0u;
            // 0x2af6c4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF6E8u;
            goto label_2af6e8;
        }
    }
    ctx->pc = 0x2AF6C8u;
    // 0x2af6c8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2af6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2af6cc:
    // 0x2af6cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2af6d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af6d4: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x2af6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x2af6d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2af6dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af6e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF6E0u;
    {
        const bool branch_taken_0x2af6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6E0u;
        // 0x2af6e4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6e0) {
            ctx->pc = 0x2AF6ECu;
            goto label_2af6ec;
        }
    }
    ctx->pc = 0x2AF6E8u;
label_2af6e8:
    // 0x2af6e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2af6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2af6ec:
    // 0x2af6ec: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2af6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2af6f0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2af6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2af6f4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2AF6F4u;
    {
        const bool branch_taken_0x2af6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af6f4) {
            ctx->pc = 0x2AF6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF6F4u;
            // 0x2af6f8: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af650;
        }
    }
    ctx->pc = 0x2AF6FCu;
label_2af6fc:
    // 0x2af6fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2af6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af700: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2af700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2af704: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2af704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2af708: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2af708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2af70c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2af70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af710: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2af710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af714: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2af714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af718: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2af718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af71c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2af71cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af720: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2af720u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af728: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF728u;
        // 0x2af72c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF730u;
}
