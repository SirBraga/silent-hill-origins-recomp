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

// Function: sub_00281DF8
// Address: 0x281df8 - 0x281f80
void sub_00281DF8_0x281df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281DF8_0x281df8");
#endif

    switch (ctx->pc) {
        case 0x281e38u: goto label_281e38;
        case 0x281f18u: goto label_281f18;
        case 0x281f20u: goto label_281f20;
        case 0x281f28u: goto label_281f28;
        case 0x281f30u: goto label_281f30;
        case 0x281f38u: goto label_281f38;
        case 0x281f40u: goto label_281f40;
        case 0x281f48u: goto label_281f48;
        case 0x281f50u: goto label_281f50;
        case 0x281f58u: goto label_281f58;
        case 0x281f60u: goto label_281f60;
        case 0x281f68u: goto label_281f68;
        default: break;
    }

    ctx->pc = 0x281df8u;

    // 0x281df8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x281df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x281dfc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281e00: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x281e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281e04: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x281e04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281e0c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x281e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x281e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281e18: 0x3c0941c6  lui         $t1, 0x41C6
    ctx->pc = 0x281e18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16838 << 16));
    // 0x281e1c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x281e1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281e24: 0x35294e6d  ori         $t1, $t1, 0x4E6D
    ctx->pc = 0x281e24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20077);
    // 0x281e28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x281e28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281e2c: 0x2410001d  addiu       $s0, $zero, 0x1D
    ctx->pc = 0x281e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x281e30: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x281e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x281e34: 0x0  nop
    ctx->pc = 0x281e34u;
    // NOP
label_281e38:
    // 0x281e38: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x281e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281e3c: 0x25450004  addiu       $a1, $t2, 0x4
    ctx->pc = 0x281e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x281e40: 0x25460008  addiu       $a2, $t2, 0x8
    ctx->pc = 0x281e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x281e44: 0x2547000c  addiu       $a3, $t2, 0xC
    ctx->pc = 0x281e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x281e48: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x281e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x281e4c: 0x25480010  addiu       $t0, $t2, 0x10
    ctx->pc = 0x281e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x281e50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281e54: 0x2610fffb  addiu       $s0, $s0, -0x5
    ctx->pc = 0x281e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x281e58: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x281e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x281e5c: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x281e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x281e60: 0x254a0014  addiu       $t2, $t2, 0x14
    ctx->pc = 0x281e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x281e64: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x281e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x281e68: 0x24633039  addiu       $v1, $v1, 0x3039
    ctx->pc = 0x281e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
    // 0x281e6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x281e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x281e70: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x281e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281e74: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x281e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x281e78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281e7c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x281e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x281e80: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x281e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x281e84: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x281e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281e88: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x281e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x281e8c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x281e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x281e90: 0x8f838840  lw          $v1, -0x77C0($gp)
    ctx->pc = 0x281e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281e94: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x281e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x281e98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281e9c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x281e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x281ea0: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x281ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
    // 0x281ea4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x281ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281ea8: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x281ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x281eac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x281eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x281eb0: 0x8f838840  lw          $v1, -0x77C0($gp)
    ctx->pc = 0x281eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281eb4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x281eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x281eb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281ebc: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x281ec0: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x281ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x281ec4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x281ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281ec8: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x281ecc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x281eccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x281ed0: 0x8f838840  lw          $v1, -0x77C0($gp)
    ctx->pc = 0x281ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281ed4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x281ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x281ed8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281edc: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x281edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x281ee0: 0x8d02fffc  lw          $v0, -0x4($t0)
    ctx->pc = 0x281ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x281ee4: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x281ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281ee8: 0x24423039  addiu       $v0, $v0, 0x3039
    ctx->pc = 0x281ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12345));
    // 0x281eec: 0x601ffd2  bgez        $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x281EECu;
    {
        const bool branch_taken_0x281eec = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x281EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EECu;
        // 0x281ef0: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281eec) {
            ctx->pc = 0x281E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281e38;
        }
    }
    ctx->pc = 0x281EF4u;
    // 0x281ef4: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x281ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
    // 0x281ef8: 0x25840fc8  addiu       $a0, $t4, 0xFC8
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4040));
    // 0x281efc: 0x24100135  addiu       $s0, $zero, 0x135
    ctx->pc = 0x281efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x281f00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x281f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x281f04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281f08: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x281f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x281f0c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x281f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x281f10: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x281f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x281f14: 0x0  nop
    ctx->pc = 0x281f14u;
    // NOP
label_281f18:
    // 0x281f18: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F18u;
    SET_GPR_U32(ctx, 31, 0x281F20u);
    ctx->pc = 0x281F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F18u;
    // 0x281f1c: 0x2610fff6  addiu       $s0, $s0, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F18u, 0x281F20u)) {
        return;
    }
    ctx->pc = 0x281F20u;
label_281f20:
    // 0x281f20: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F20u;
    SET_GPR_U32(ctx, 31, 0x281F28u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F20u, 0x281F28u)) {
        return;
    }
    ctx->pc = 0x281F28u;
label_281f28:
    // 0x281f28: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F28u;
    SET_GPR_U32(ctx, 31, 0x281F30u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F28u, 0x281F30u)) {
        return;
    }
    ctx->pc = 0x281F30u;
label_281f30:
    // 0x281f30: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F30u;
    SET_GPR_U32(ctx, 31, 0x281F38u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F30u, 0x281F38u)) {
        return;
    }
    ctx->pc = 0x281F38u;
label_281f38:
    // 0x281f38: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F38u;
    SET_GPR_U32(ctx, 31, 0x281F40u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F38u, 0x281F40u)) {
        return;
    }
    ctx->pc = 0x281F40u;
label_281f40:
    // 0x281f40: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F40u;
    SET_GPR_U32(ctx, 31, 0x281F48u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F40u, 0x281F48u)) {
        return;
    }
    ctx->pc = 0x281F48u;
label_281f48:
    // 0x281f48: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F48u;
    SET_GPR_U32(ctx, 31, 0x281F50u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F48u, 0x281F50u)) {
        return;
    }
    ctx->pc = 0x281F50u;
label_281f50:
    // 0x281f50: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F50u;
    SET_GPR_U32(ctx, 31, 0x281F58u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F50u, 0x281F58u)) {
        return;
    }
    ctx->pc = 0x281F58u;
label_281f58:
    // 0x281f58: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F58u;
    SET_GPR_U32(ctx, 31, 0x281F60u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F58u, 0x281F60u)) {
        return;
    }
    ctx->pc = 0x281F60u;
label_281f60:
    // 0x281f60: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x281F60u;
    SET_GPR_U32(ctx, 31, 0x281F68u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x281F60u, 0x281F68u)) {
        return;
    }
    ctx->pc = 0x281F68u;
label_281f68:
    // 0x281f68: 0x601ffeb  bgez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x281F68u;
    {
        const bool branch_taken_0x281f68 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x281F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F68u;
        // 0x281f6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f68) {
            ctx->pc = 0x281F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281f18;
        }
    }
    ctx->pc = 0x281F70u;
    // 0x281f70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281f74: 0x3e00008  jr          $ra
    ctx->pc = 0x281F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F74u;
        // 0x281f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281F7Cu;
    // 0x281f7c: 0x0  nop
    ctx->pc = 0x281f7cu;
    // NOP
    ctx->pc = 0x281f80u;
}
