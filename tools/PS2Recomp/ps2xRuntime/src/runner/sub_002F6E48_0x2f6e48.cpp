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

// Function: sub_002F6E48
// Address: 0x2f6e48 - 0x2f6fc0
void sub_002F6E48_0x2f6e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6E48_0x2f6e48");
#endif

    switch (ctx->pc) {
        case 0x2f6ec0u: goto label_2f6ec0;
        case 0x2f6f04u: goto label_2f6f04;
        case 0x2f6f34u: goto label_2f6f34;
        default: break;
    }

    ctx->pc = 0x2f6e48u;

    // 0x2f6e48: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f6e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f6e4c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f6e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f6e50: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2f6e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2f6e54: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2f6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2f6e58: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f6e58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e5c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2f6e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f6e60: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2f6e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2f6e64: 0x24760cc0  addiu       $s6, $v1, 0xCC0
    ctx->pc = 0x2f6e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3264));
    // 0x2f6e68: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f6e6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f6e6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e70: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f6e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f6e74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f6e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e78: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f6e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f6e7c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f6e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6e80: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f6e84: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f6e88: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f6e8c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2f6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2f6e90: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2f6e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2f6e94: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6E94u;
    {
        const bool branch_taken_0x2f6e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e94) {
            ctx->pc = 0x2F6E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6E94u;
            // 0x2f6e98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E9Cu;
            goto label_2f6e9c;
        }
    }
    ctx->pc = 0x2F6E9Cu;
label_2f6e9c:
    // 0x2f6e9c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2f6e9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f6ea0: 0xb812  mflo        $s7
    ctx->pc = 0x2f6ea0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x2f6ea4: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x2f6ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2f6ea8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F6EA8u;
    {
        const bool branch_taken_0x2f6ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EA8u;
        // 0x2f6eac: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ea8) {
            ctx->pc = 0x2F6F88u;
            goto label_2f6f88;
        }
    }
    ctx->pc = 0x2F6EB0u;
    // 0x2f6eb0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2f6eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2f6eb4: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x2f6eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f6eb8: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2f6eb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2f6ebc: 0x2bc20010  slti        $v0, $fp, 0x10
    ctx->pc = 0x2f6ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)16) ? 1 : 0);
label_2f6ec0:
    // 0x2f6ec0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F6EC0u;
    {
        const bool branch_taken_0x2f6ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EC0u;
        // 0x2f6ec4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ec0) {
            ctx->pc = 0x2F6F88u;
            goto label_2f6f88;
        }
    }
    ctx->pc = 0x2F6EC8u;
    // 0x2f6ec8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f6ecc: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2f6eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2f6ed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ed4: 0x122001b  divu        $zero, $t1, $v0
    ctx->pc = 0x2f6ed4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x2f6ed8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6ED8u;
    {
        const bool branch_taken_0x2f6ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ed8) {
            ctx->pc = 0x2F6EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6ED8u;
            // 0x2f6edc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6EE0u;
            goto label_2f6ee0;
        }
    }
    ctx->pc = 0x2F6EE0u;
label_2f6ee0:
    // 0x2f6ee0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6ee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f6ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ee8: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x2f6ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x2f6eec: 0x1812  mflo        $v1
    ctx->pc = 0x2f6eecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2f6ef0: 0x2460018  mult        $zero, $s2, $a2
    ctx->pc = 0x2f6ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f6ef4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2f6ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ef8: 0x3012  mflo        $a2
    ctx->pc = 0x2f6ef8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2f6efc: 0xc0bde5a  jal         func_2F7968
    ctx->pc = 0x2F6EFCu;
    SET_GPR_U32(ctx, 31, 0x2F6F04u);
    ctx->pc = 0x2F6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EFCu;
    // 0x2f6f00: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7968u, 0x2F6EFCu, 0x2F6F04u)) {
        return;
    }
    ctx->pc = 0x2F6F04u;
label_2f6f04:
    // 0x2f6f04: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2f6f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f6f08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f0c: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x2f6f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f6f10: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2f6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2f6f14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F6F14u;
    {
        const bool branch_taken_0x2f6f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F14u;
        // 0x2f6f18: 0x7ba90010  lq          $t1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f14) {
            ctx->pc = 0x2F6F60u;
            goto label_2f6f60;
        }
    }
    ctx->pc = 0x2F6F1Cu;
    // 0x2f6f1c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2f6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f6f20: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6F20u;
    {
        const bool branch_taken_0x2f6f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F20u;
        // 0x2f6f24: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f20) {
            ctx->pc = 0x2F6F30u;
            goto label_2f6f30;
        }
    }
    ctx->pc = 0x2F6F28u;
    // 0x2f6f28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F6F28u;
    {
        const bool branch_taken_0x2f6f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F28u;
        // 0x2f6f2c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f28) {
            ctx->pc = 0x2F6F64u;
            goto label_2f6f64;
        }
    }
    ctx->pc = 0x2F6F30u;
label_2f6f30:
    // 0x2f6f30: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x2f6f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2f6f34:
    // 0x2f6f34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f6f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f6f38: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2f6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2f6f3c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2f6f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f6f40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6F40u;
    {
        const bool branch_taken_0x2f6f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F40u;
        // 0x2f6f44: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f40) {
            ctx->pc = 0x2F6F64u;
            goto label_2f6f64;
        }
    }
    ctx->pc = 0x2F6F48u;
    // 0x2f6f48: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2f6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2f6f4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6f50: 0x1073fff8  beq         $v1, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F6F50u;
    {
        const bool branch_taken_0x2f6f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F50u;
        // 0x2f6f54: 0xd01018  mult        $v0, $a2, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f50) {
            ctx->pc = 0x2F6F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6f34;
        }
    }
    ctx->pc = 0x2F6F58u;
    // 0x2f6f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6F58u;
    {
        const bool branch_taken_0x2f6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F58u;
        // 0x2f6f5c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f58) {
            ctx->pc = 0x2F6F64u;
            goto label_2f6f64;
        }
    }
    ctx->pc = 0x2F6F60u;
label_2f6f60:
    // 0x2f6f60: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2f6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f6f64:
    // 0x2f6f64: 0x5a200005  blezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F64u;
    {
        const bool branch_taken_0x2f6f64 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x2f6f64) {
            ctx->pc = 0x2F6F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6F64u;
            // 0x2f6f68: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6F7Cu;
            goto label_2f6f7c;
        }
    }
    ctx->pc = 0x2F6F6Cu;
    // 0x2f6f6c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x2f6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x2f6f70: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2f6f70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2f6f74: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2f6f74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2f6f78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f6f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f6f7c:
    // 0x2f6f7c: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x2f6f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2f6f80: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2F6F80u;
    {
        const bool branch_taken_0x2f6f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F80u;
        // 0x2f6f84: 0x2bc20010  slti        $v0, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f80) {
            ctx->pc = 0x2F6EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6ec0;
        }
    }
    ctx->pc = 0x2F6F88u;
label_2f6f88:
    // 0x2f6f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6f8c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f6f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f6f90: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2f6f90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f6f94: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2f6f94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f6f98: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2f6f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f6f9c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2f6f9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f6fa0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f6fa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6fa4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f6fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6fa8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f6fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6fac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f6facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6fb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f6fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FB4u;
        // 0x2f6fb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6FBCu;
    // 0x2f6fbc: 0x0  nop
    ctx->pc = 0x2f6fbcu;
    // NOP
    ctx->pc = 0x2f6fc0u;
}
