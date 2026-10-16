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

// Function: sub_002F2BC0
// Address: 0x2f2bc0 - 0x2f2f58
void sub_002F2BC0_0x2f2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2BC0_0x2f2bc0");
#endif

    switch (ctx->pc) {
        case 0x2f2c0cu: goto label_2f2c0c;
        case 0x2f2c30u: goto label_2f2c30;
        case 0x2f2c54u: goto label_2f2c54;
        case 0x2f2c90u: goto label_2f2c90;
        case 0x2f2ce4u: goto label_2f2ce4;
        case 0x2f2d14u: goto label_2f2d14;
        case 0x2f2d64u: goto label_2f2d64;
        case 0x2f2d7cu: goto label_2f2d7c;
        case 0x2f2d84u: goto label_2f2d84;
        case 0x2f2db8u: goto label_2f2db8;
        case 0x2f2dd4u: goto label_2f2dd4;
        case 0x2f2e10u: goto label_2f2e10;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e54u: goto label_2f2e54;
        case 0x2f2e7cu: goto label_2f2e7c;
        case 0x2f2ed4u: goto label_2f2ed4;
        default: break;
    }

    ctx->pc = 0x2f2bc0u;

    // 0x2f2bc0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2f2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x2f2bc4: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f2bc8: 0xffb30250  sd          $s3, 0x250($sp)
    ctx->pc = 0x2f2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 19));
    // 0x2f2bcc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f2bd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f2bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bd4: 0xffb60280  sd          $s6, 0x280($sp)
    ctx->pc = 0x2f2bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 22));
    // 0x2f2bd8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2f2bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2bdc: 0xffb10230  sd          $s1, 0x230($sp)
    ctx->pc = 0x2f2bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 17));
    // 0x2f2be0: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f2be4: 0xffbf02b0  sd          $ra, 0x2B0($sp)
    ctx->pc = 0x2f2be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
    // 0x2f2be8: 0xffbe02a0  sd          $fp, 0x2A0($sp)
    ctx->pc = 0x2f2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 30));
    // 0x2f2bec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2f2becu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bf0: 0xffb70290  sd          $s7, 0x290($sp)
    ctx->pc = 0x2f2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 23));
    // 0x2f2bf4: 0xffb50270  sd          $s5, 0x270($sp)
    ctx->pc = 0x2f2bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 21));
    // 0x2f2bf8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2f2bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2bfc: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x2f2bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x2f2c00: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x2f2c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x2f2c04: 0xc0bdf7a  jal         func_2F7DE8
    ctx->pc = 0x2F2C04u;
    SET_GPR_U32(ctx, 31, 0x2F2C0Cu);
    ctx->pc = 0x2F2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C04u;
    // 0x2f2c08: 0xffb00220  sd          $s0, 0x220($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7DE8u, 0x2F2C04u, 0x2F2C0Cu)) {
        return;
    }
    ctx->pc = 0x2F2C0Cu;
label_2f2c0c:
    // 0x2f2c0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F2C0Cu;
    {
        const bool branch_taken_0x2f2c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c0c) {
            ctx->pc = 0x2F2C38u;
            goto label_2f2c38;
        }
    }
    ctx->pc = 0x2F2C14u;
    // 0x2f2c14: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2C14u;
    {
        const bool branch_taken_0x2f2c14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c14) {
            ctx->pc = 0x2F2C28u;
            goto label_2f2c28;
        }
    }
    ctx->pc = 0x2F2C1Cu;
    // 0x2f2c1c: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2f2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x2f2c20: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2f2c20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x2f2c24: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x2f2c24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
label_2f2c28:
    // 0x2f2c28: 0xc0bd94e  jal         func_2F6538
    ctx->pc = 0x2F2C28u;
    SET_GPR_U32(ctx, 31, 0x2F2C30u);
    ctx->pc = 0x2F2C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C28u;
    // 0x2f2c2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6538u, 0x2F2C28u, 0x2F2C30u)) {
        return;
    }
    ctx->pc = 0x2F2C30u;
label_2f2c30:
    // 0x2f2c30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2C30u;
    {
        const bool branch_taken_0x2f2c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C30u;
        // 0x2f2c34: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c30) {
            ctx->pc = 0x2F2C44u;
            goto label_2f2c44;
        }
    }
    ctx->pc = 0x2F2C38u;
label_2f2c38:
    // 0x2f2c38: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2c3c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2F2C3Cu;
    {
        const bool branch_taken_0x2f2c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C3Cu;
        // 0x2f2c40: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c3c) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2C44u;
label_2f2c44:
    // 0x2f2c44: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2C44u;
    {
        const bool branch_taken_0x2f2c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C44u;
        // 0x2f2c48: 0x3c1e0072  lui         $fp, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c44) {
            ctx->pc = 0x2F2C6Cu;
            goto label_2f2c6c;
        }
    }
    ctx->pc = 0x2F2C4Cu;
    // 0x2f2c4c: 0xc0bdd58  jal         func_2F7560
    ctx->pc = 0x2F2C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C54u);
    ctx->pc = 0x2F2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C4Cu;
    // 0x2f2c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7560u, 0x2F2C4Cu, 0x2F2C54u)) {
        return;
    }
    ctx->pc = 0x2F2C54u;
label_2f2c54:
    // 0x2f2c54: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2c58: 0x27c2b748  addiu       $v0, $fp, -0x48B8
    ctx->pc = 0x2f2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948680));
    // 0x2f2c5c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2f2c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2c68: 0xac440888  sw          $a0, 0x888($v0)
    ctx->pc = 0x2f2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2184), GPR_U32(ctx, 4));
label_2f2c6c:
    // 0x2f2c6c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2c70: 0x27d2b748  addiu       $s2, $fp, -0x48B8
    ctx->pc = 0x2f2c70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948680));
    // 0x2f2c74: 0x2638018  mult        $s0, $s3, $v1
    ctx->pc = 0x2f2c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f2c78: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2f2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2f2c7c: 0x8c430888  lw          $v1, 0x888($v0)
    ctx->pc = 0x2f2c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2184)));
    // 0x2f2c80: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x2F2C80u;
    {
        const bool branch_taken_0x2f2c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C80u;
        // 0x2f2c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c80) {
            ctx->pc = 0x2F2E98u;
            goto label_2f2e98;
        }
    }
    ctx->pc = 0x2F2C88u;
    // 0x2f2c88: 0xc0bd946  jal         func_2F6518
    ctx->pc = 0x2F2C88u;
    SET_GPR_U32(ctx, 31, 0x2F2C90u);
    ctx->pc = 0x2F2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C88u;
    // 0x2f2c8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6518u, 0x2F2C88u, 0x2F2C90u)) {
        return;
    }
    ctx->pc = 0x2F2C90u;
label_2f2c90:
    // 0x2f2c90: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F2C90u;
    {
        const bool branch_taken_0x2f2c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c90) {
            ctx->pc = 0x2F2CECu;
            goto label_2f2cec;
        }
    }
    ctx->pc = 0x2F2C98u;
    // 0x2f2c98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2c9c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2C9Cu;
    {
        const bool branch_taken_0x2f2c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C9Cu;
        // 0x2f2ca0: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c9c) {
            ctx->pc = 0x2F2CECu;
            goto label_2f2cec;
        }
    }
    ctx->pc = 0x2F2CA4u;
    // 0x2f2ca4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2ca8: 0xac600894  sw          $zero, 0x894($v1)
    ctx->pc = 0x2f2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2196), GPR_U32(ctx, 0));
    // 0x2f2cac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f2cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2cb0: 0xac440800  sw          $a0, 0x800($v0)
    ctx->pc = 0x2f2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 4));
    // 0x2f2cb4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f2cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f2cb8: 0xac640804  sw          $a0, 0x804($v1)
    ctx->pc = 0x2f2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2052), GPR_U32(ctx, 4));
    // 0x2f2cbc: 0x26420808  addiu       $v0, $s2, 0x808
    ctx->pc = 0x2f2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2056));
    // 0x2f2cc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f2cc4: 0xac600890  sw          $zero, 0x890($v1)
    ctx->pc = 0x2f2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 0));
    // 0x2f2cc8: 0x24a80158  addiu       $t0, $a1, 0x158
    ctx->pc = 0x2f2cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 344));
    // 0x2f2ccc: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x2f2cccu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x6B0158u));
    // 0x2f2cd0: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x2f2cd0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x6B0159u));
    // 0x2f2cd4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2f2cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2cd8: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x2f2cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f2cdc: 0xc0bd95e  jal         func_2F6578
    ctx->pc = 0x2F2CDCu;
    SET_GPR_U32(ctx, 31, 0x2F2CE4u);
    ctx->pc = 0x2F2CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2CDCu;
    // 0x2f2ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6578u, 0x2F2CDCu, 0x2F2CE4u)) {
        return;
    }
    ctx->pc = 0x2F2CE4u;
label_2f2ce4:
    // 0x2f2ce4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2CE4u;
    {
        const bool branch_taken_0x2f2ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ce4) {
            ctx->pc = 0x2F2CF8u;
            goto label_2f2cf8;
        }
    }
    ctx->pc = 0x2F2CECu;
label_2f2cec:
    // 0x2f2cec: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2cf0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2F2CF0u;
    {
        const bool branch_taken_0x2f2cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CF0u;
        // 0x2f2cf4: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cf0) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2CF8u;
label_2f2cf8:
    // 0x2f2cf8: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2CF8u;
    {
        const bool branch_taken_0x2f2cf8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2cf8) {
            ctx->pc = 0x2F2CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2CF8u;
            // 0x2f2cfc: 0xaed40000  sw          $s4, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D00u;
            goto label_2f2d00;
        }
    }
    ctx->pc = 0x2F2D00u;
label_2f2d00:
    // 0x2f2d00: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f2d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d08: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x2f2d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x2f2d0c: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x2F2D0Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D14u);
    ctx->pc = 0x2F2D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D0Cu;
    // 0x2f2d10: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x2F2D0Cu, 0x2F2D14u)) {
        return;
    }
    ctx->pc = 0x2F2D14u;
label_2f2d14:
    // 0x2f2d14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2D14u;
    {
        const bool branch_taken_0x2f2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d14) {
            ctx->pc = 0x2F2D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D14u;
            // 0x2f2d18: 0x8222001c  lb          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D2Cu;
            goto label_2f2d2c;
        }
    }
    ctx->pc = 0x2F2D1Cu;
    // 0x2f2d1c: 0x56c00066  bnel        $s6, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x2F2D1Cu;
    {
        const bool branch_taken_0x2f2d1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d1c) {
            ctx->pc = 0x2F2D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D1Cu;
            // 0x2f2d20: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2D24u;
    // 0x2f2d24: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2F2D24u;
    {
        const bool branch_taken_0x2f2d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d24) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2D2Cu;
label_2f2d2c:
    // 0x2f2d2c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f2d30: 0x8225001e  lb          $a1, 0x1E($s1)
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x2f2d34: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2f2d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f2d38: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x2f2d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f2d3c: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x2f2d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2f2d40: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2f2d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f2d44: 0x28c2000b  slti        $v0, $a2, 0xB
    ctx->pc = 0x2f2d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f2d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2D48u;
    {
        const bool branch_taken_0x2f2d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D48u;
        // 0x2f2d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d48) {
            ctx->pc = 0x2F2D5Cu;
            goto label_2f2d5c;
        }
    }
    ctx->pc = 0x2F2D50u;
    // 0x2f2d50: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2d54: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2F2D54u;
    {
        const bool branch_taken_0x2f2d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D54u;
        // 0x2f2d58: 0x34420086  ori         $v0, $v0, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)134);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d54) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2D5Cu;
label_2f2d5c:
    // 0x2f2d5c: 0xc0bcada  jal         func_2F2B68
    ctx->pc = 0x2F2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D64u);
    ctx->pc = 0x2F2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D5Cu;
    // 0x2f2d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2B68u, 0x2F2D5Cu, 0x2F2D64u)) {
        return;
    }
    ctx->pc = 0x2F2D64u;
label_2f2d64:
    // 0x2f2d64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f2d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d68: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x2f2d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2f2d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d70: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2f2d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2f2d74: 0xc0bdc88  jal         func_2F7220
    ctx->pc = 0x2F2D74u;
    SET_GPR_U32(ctx, 31, 0x2F2D7Cu);
    ctx->pc = 0x2F2D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D74u;
    // 0x2f2d78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7220u, 0x2F2D74u, 0x2F2D7Cu)) {
        return;
    }
    ctx->pc = 0x2F2D7Cu;
label_2f2d7c:
    // 0x2f2d7c: 0xc0bddca  jal         func_2F7728
    ctx->pc = 0x2F2D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D84u);
    ctx->pc = 0x2F2D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D7Cu;
    // 0x2f2d80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7728u, 0x2F2D7Cu, 0x2F2D84u)) {
        return;
    }
    ctx->pc = 0x2F2D84u;
label_2f2d84:
    // 0x2f2d84: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2f2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2f2d88: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2f2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2f2d8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2D8Cu;
    {
        const bool branch_taken_0x2f2d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d8c) {
            ctx->pc = 0x2F2D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2D8Cu;
            // 0x2f2d90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2D94u;
            goto label_2f2d94;
        }
    }
    ctx->pc = 0x2F2D94u;
label_2f2d94:
    // 0x2f2d94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2f2d94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f2d98: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2f2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2f2d9c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x2f2d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2f2da0: 0x1812  mflo        $v1
    ctx->pc = 0x2f2da0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2f2da4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2f2da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2da8: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2DA8u;
    {
        const bool branch_taken_0x2f2da8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2F2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DA8u;
        // 0x2f2dac: 0x24770001  addiu       $s7, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2da8) {
            ctx->pc = 0x2F2DF8u;
            goto label_2f2df8;
        }
    }
    ctx->pc = 0x2F2DB0u;
    // 0x2f2db0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2f2db0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f2db4: 0x0  nop
    ctx->pc = 0x2f2db4u;
    // NOP
label_2f2db8:
    // 0x2f2db8: 0x16970004  bne         $s4, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2DB8u;
    {
        const bool branch_taken_0x2f2db8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        ctx->pc = 0x2F2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DB8u;
        // 0x2f2dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2db8) {
            ctx->pc = 0x2F2DCCu;
            goto label_2f2dcc;
        }
    }
    ctx->pc = 0x2F2DC0u;
    // 0x2f2dc0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2f2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2f2dc4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2f2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f2dc8: 0xae220170  sw          $v0, 0x170($s1)
    ctx->pc = 0x2f2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
label_2f2dcc:
    // 0x2f2dcc: 0xc0bdb80  jal         func_2F6E00
    ctx->pc = 0x2F2DCCu;
    SET_GPR_U32(ctx, 31, 0x2F2DD4u);
    ctx->pc = 0x2F2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DCCu;
    // 0x2f2dd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6E00u, 0x2F2DCCu, 0x2F2DD4u)) {
        return;
    }
    ctx->pc = 0x2F2DD4u;
label_2f2dd4:
    // 0x2f2dd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f2dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f2dd8: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2f2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2f2ddc: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2f2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f2de0: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x2f2de0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
    // 0x2f2de4: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x2f2de4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f2de8: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F2DE8u;
    {
        const bool branch_taken_0x2f2de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DE8u;
        // 0x2f2dec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2de8) {
            ctx->pc = 0x2F2DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2db8;
        }
    }
    ctx->pc = 0x2F2DF0u;
    // 0x2f2df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2DF0u;
    {
        const bool branch_taken_0x2f2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DF0u;
        // 0x2f2df4: 0x8e26003c  lw          $a2, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2df0) {
            ctx->pc = 0x2F2E00u;
            goto label_2f2e00;
        }
    }
    ctx->pc = 0x2F2DF8u;
label_2f2df8:
    // 0x2f2df8: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2f2df8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f2dfc: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x2f2dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2f2e00:
    // 0x2f2e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f2e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e08: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F2E08u;
    SET_GPR_U32(ctx, 31, 0x2F2E10u);
    ctx->pc = 0x2F2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E08u;
    // 0x2f2e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F2E08u, 0x2F2E10u)) {
        return;
    }
    ctx->pc = 0x2F2E10u;
label_2f2e10:
    // 0x2f2e10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f2e10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e14: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F2E14u;
    {
        const bool branch_taken_0x2f2e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E14u;
        // 0x2f2e18: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e14) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2E1Cu;
    // 0x2f2e1c: 0x97a20010  lhu         $v0, 0x10($sp)
    ctx->pc = 0x2f2e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2e20: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f2e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f2e24: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F2E24u;
    {
        const bool branch_taken_0x2f2e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E24u;
        // 0x2f2e28: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e24) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2E2Cu;
    // 0x2f2e2c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f2e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f2e30: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2f2e34: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F2E34u;
    SET_GPR_U32(ctx, 31, 0x2F2E3Cu);
    ctx->pc = 0x2F2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E34u;
    // 0x2f2e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F2E34u, 0x2F2E3Cu)) {
        return;
    }
    ctx->pc = 0x2F2E3Cu;
label_2f2e3c:
    // 0x2f2e3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F2E3Cu;
    {
        const bool branch_taken_0x2f2e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E3Cu;
        // 0x2f2e40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e3c) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2E44u;
    // 0x2f2e44: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x2f2e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2f2e48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e4c: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F2E4Cu;
    SET_GPR_U32(ctx, 31, 0x2F2E54u);
    ctx->pc = 0x2F2E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E4Cu;
    // 0x2f2e50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F2E4Cu, 0x2F2E54u)) {
        return;
    }
    ctx->pc = 0x2F2E54u;
label_2f2e54:
    // 0x2f2e54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f2e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e58: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F2E58u;
    {
        const bool branch_taken_0x2f2e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E58u;
        // 0x2f2e5c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e58) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2E60u;
    // 0x2f2e60: 0x97a20010  lhu         $v0, 0x10($sp)
    ctx->pc = 0x2f2e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2e64: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f2e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f2e68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2E68u;
    {
        const bool branch_taken_0x2f2e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E68u;
        // 0x2f2e6c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e68) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2E70u;
    // 0x2f2e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e74: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F2E74u;
    SET_GPR_U32(ctx, 31, 0x2F2E7Cu);
    ctx->pc = 0x2F2E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2E74u;
    // 0x2f2e78: 0x24a50148  addiu       $a1, $a1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F2E74u, 0x2F2E7Cu)) {
        return;
    }
    ctx->pc = 0x2F2E7Cu;
label_2f2e7c:
    // 0x2f2e7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2E7Cu;
    {
        const bool branch_taken_0x2f2e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E7Cu;
        // 0x2f2e80: 0x27c3b748  addiu       $v1, $fp, -0x48B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e7c) {
            ctx->pc = 0x2F2EB8u;
            goto label_2f2eb8;
        }
    }
    ctx->pc = 0x2F2E84u;
    // 0x2f2e84: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2e88: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2f2e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f2e8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2e90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2e94: 0xac64088c  sw          $a0, 0x88C($v1)
    ctx->pc = 0x2f2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2188), GPR_U32(ctx, 4));
label_2f2e98:
    // 0x2f2e98: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2e9c: 0x27c2b748  addiu       $v0, $fp, -0x48B8
    ctx->pc = 0x2f2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948680));
    // 0x2f2ea0: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2f2ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2ea4: 0x2442088c  addiu       $v0, $v0, 0x88C
    ctx->pc = 0x2f2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2188));
    // 0x2f2ea8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2f2ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2eac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f2eb0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2EB0u;
    {
        const bool branch_taken_0x2f2eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2eb0) {
            ctx->pc = 0x2F2EC4u;
            goto label_2f2ec4;
        }
    }
    ctx->pc = 0x2F2EB8u;
label_2f2eb8:
    // 0x2f2eb8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2ebc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F2EBCu;
    {
        const bool branch_taken_0x2f2ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EBCu;
        // 0x2f2ec0: 0x3442002f  ori         $v0, $v0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ebc) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2EC4u;
label_2f2ec4:
    // 0x2f2ec4: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2EC4u;
    {
        const bool branch_taken_0x2f2ec4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EC4u;
        // 0x2f2ec8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ec4) {
            ctx->pc = 0x2F2EFCu;
            goto label_2f2efc;
        }
    }
    ctx->pc = 0x2F2ECCu;
    // 0x2f2ecc: 0xc0bca20  jal         func_2F2880
    ctx->pc = 0x2F2ECCu;
    SET_GPR_U32(ctx, 31, 0x2F2ED4u);
    ctx->pc = 0x2F2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2ECCu;
    // 0x2f2ed0: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2880u, 0x2F2ECCu, 0x2F2ED4u)) {
        return;
    }
    ctx->pc = 0x2F2ED4u;
label_2f2ed4:
    // 0x2f2ed4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2f2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f2ed8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2ED8u;
    {
        const bool branch_taken_0x2f2ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2ED8u;
        // 0x2f2edc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ed8) {
            ctx->pc = 0x2F2EE8u;
            goto label_2f2ee8;
        }
    }
    ctx->pc = 0x2F2EE0u;
    // 0x2f2ee0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2F2EE0u;
    {
        const bool branch_taken_0x2f2ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2EE0u;
        // 0x2f2ee4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ee0) {
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2EE8u;
label_2f2ee8:
    // 0x2f2ee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f2eec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2ef0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2f2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2f2ef4: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x2f2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x2f2ef8: 0xaec60008  sw          $a2, 0x8($s6)
    ctx->pc = 0x2f2ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 6));
label_2f2efc:
    // 0x2f2efc: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2f00: 0x27c2b748  addiu       $v0, $fp, -0x48B8
    ctx->pc = 0x2f2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948680));
    // 0x2f2f04: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2f2f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f2f08: 0x24420888  addiu       $v0, $v0, 0x888
    ctx->pc = 0x2f2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2184));
    // 0x2f2f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2f10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2f14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2F14u;
    {
        const bool branch_taken_0x2f2f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f14) {
            ctx->pc = 0x2F2F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2F14u;
            // 0x2f2f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F28u;
            goto label_2f2f28;
        }
    }
    ctx->pc = 0x2F2F1Cu;
    // 0x2f2f1c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2f20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2f2f24: 0x34429003  ori         $v0, $v0, 0x9003
    ctx->pc = 0x2f2f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36867);
label_2f2f28:
    // 0x2f2f28: 0xdfbf02b0  ld          $ra, 0x2B0($sp)
    ctx->pc = 0x2f2f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f2f2c: 0xdfbe02a0  ld          $fp, 0x2A0($sp)
    ctx->pc = 0x2f2f2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f2f30: 0xdfb70290  ld          $s7, 0x290($sp)
    ctx->pc = 0x2f2f30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f2f34: 0xdfb60280  ld          $s6, 0x280($sp)
    ctx->pc = 0x2f2f34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2f2f38: 0xdfb50270  ld          $s5, 0x270($sp)
    ctx->pc = 0x2f2f38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2f2f3c: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x2f2f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2f2f40: 0xdfb30250  ld          $s3, 0x250($sp)
    ctx->pc = 0x2f2f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2f2f44: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x2f2f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2f2f48: 0xdfb10230  ld          $s1, 0x230($sp)
    ctx->pc = 0x2f2f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2f2f4c: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x2f2f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2f2f50: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F50u;
        // 0x2f2f54: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2F58u;
}
