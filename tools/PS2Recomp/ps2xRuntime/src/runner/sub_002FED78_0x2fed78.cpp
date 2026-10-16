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

// Function: sub_002FED78
// Address: 0x2fed78 - 0x2fef98
void sub_002FED78_0x2fed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FED78_0x2fed78");
#endif

    switch (ctx->pc) {
        case 0x2fed78u: goto label_2fed78;
        case 0x2fed7cu: goto label_2fed7c;
        case 0x2fed80u: goto label_2fed80;
        case 0x2fed84u: goto label_2fed84;
        case 0x2fed88u: goto label_2fed88;
        case 0x2fed8cu: goto label_2fed8c;
        case 0x2fed90u: goto label_2fed90;
        case 0x2fed94u: goto label_2fed94;
        case 0x2fed98u: goto label_2fed98;
        case 0x2fed9cu: goto label_2fed9c;
        case 0x2feda0u: goto label_2feda0;
        case 0x2feda4u: goto label_2feda4;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedacu: goto label_2fedac;
        case 0x2fedb0u: goto label_2fedb0;
        case 0x2fedb4u: goto label_2fedb4;
        case 0x2fedb8u: goto label_2fedb8;
        case 0x2fedbcu: goto label_2fedbc;
        case 0x2fedc0u: goto label_2fedc0;
        case 0x2fedc4u: goto label_2fedc4;
        case 0x2fedc8u: goto label_2fedc8;
        case 0x2fedccu: goto label_2fedcc;
        case 0x2fedd0u: goto label_2fedd0;
        case 0x2fedd4u: goto label_2fedd4;
        case 0x2fedd8u: goto label_2fedd8;
        case 0x2feddcu: goto label_2feddc;
        case 0x2fede0u: goto label_2fede0;
        case 0x2fede4u: goto label_2fede4;
        case 0x2fede8u: goto label_2fede8;
        case 0x2fedecu: goto label_2fedec;
        case 0x2fedf0u: goto label_2fedf0;
        case 0x2fedf4u: goto label_2fedf4;
        case 0x2fedf8u: goto label_2fedf8;
        case 0x2fedfcu: goto label_2fedfc;
        case 0x2fee00u: goto label_2fee00;
        case 0x2fee04u: goto label_2fee04;
        case 0x2fee08u: goto label_2fee08;
        case 0x2fee0cu: goto label_2fee0c;
        case 0x2fee10u: goto label_2fee10;
        case 0x2fee14u: goto label_2fee14;
        case 0x2fee18u: goto label_2fee18;
        case 0x2fee1cu: goto label_2fee1c;
        case 0x2fee20u: goto label_2fee20;
        case 0x2fee24u: goto label_2fee24;
        case 0x2fee28u: goto label_2fee28;
        case 0x2fee2cu: goto label_2fee2c;
        case 0x2fee30u: goto label_2fee30;
        case 0x2fee34u: goto label_2fee34;
        case 0x2fee38u: goto label_2fee38;
        case 0x2fee3cu: goto label_2fee3c;
        case 0x2fee40u: goto label_2fee40;
        case 0x2fee44u: goto label_2fee44;
        case 0x2fee48u: goto label_2fee48;
        case 0x2fee4cu: goto label_2fee4c;
        case 0x2fee50u: goto label_2fee50;
        case 0x2fee54u: goto label_2fee54;
        case 0x2fee58u: goto label_2fee58;
        case 0x2fee5cu: goto label_2fee5c;
        case 0x2fee60u: goto label_2fee60;
        case 0x2fee64u: goto label_2fee64;
        case 0x2fee68u: goto label_2fee68;
        case 0x2fee6cu: goto label_2fee6c;
        case 0x2fee70u: goto label_2fee70;
        case 0x2fee74u: goto label_2fee74;
        case 0x2fee78u: goto label_2fee78;
        case 0x2fee7cu: goto label_2fee7c;
        case 0x2fee80u: goto label_2fee80;
        case 0x2fee84u: goto label_2fee84;
        case 0x2fee88u: goto label_2fee88;
        case 0x2fee8cu: goto label_2fee8c;
        case 0x2fee90u: goto label_2fee90;
        case 0x2fee94u: goto label_2fee94;
        case 0x2fee98u: goto label_2fee98;
        case 0x2fee9cu: goto label_2fee9c;
        case 0x2feea0u: goto label_2feea0;
        case 0x2feea4u: goto label_2feea4;
        case 0x2feea8u: goto label_2feea8;
        case 0x2feeacu: goto label_2feeac;
        case 0x2feeb0u: goto label_2feeb0;
        case 0x2feeb4u: goto label_2feeb4;
        case 0x2feeb8u: goto label_2feeb8;
        case 0x2feebcu: goto label_2feebc;
        case 0x2feec0u: goto label_2feec0;
        case 0x2feec4u: goto label_2feec4;
        case 0x2feec8u: goto label_2feec8;
        case 0x2feeccu: goto label_2feecc;
        case 0x2feed0u: goto label_2feed0;
        case 0x2feed4u: goto label_2feed4;
        case 0x2feed8u: goto label_2feed8;
        case 0x2feedcu: goto label_2feedc;
        case 0x2feee0u: goto label_2feee0;
        case 0x2feee4u: goto label_2feee4;
        case 0x2feee8u: goto label_2feee8;
        case 0x2feeecu: goto label_2feeec;
        case 0x2feef0u: goto label_2feef0;
        case 0x2feef4u: goto label_2feef4;
        case 0x2feef8u: goto label_2feef8;
        case 0x2feefcu: goto label_2feefc;
        case 0x2fef00u: goto label_2fef00;
        case 0x2fef04u: goto label_2fef04;
        case 0x2fef08u: goto label_2fef08;
        case 0x2fef0cu: goto label_2fef0c;
        case 0x2fef10u: goto label_2fef10;
        case 0x2fef14u: goto label_2fef14;
        case 0x2fef18u: goto label_2fef18;
        case 0x2fef1cu: goto label_2fef1c;
        case 0x2fef20u: goto label_2fef20;
        case 0x2fef24u: goto label_2fef24;
        case 0x2fef28u: goto label_2fef28;
        case 0x2fef2cu: goto label_2fef2c;
        case 0x2fef30u: goto label_2fef30;
        case 0x2fef34u: goto label_2fef34;
        case 0x2fef38u: goto label_2fef38;
        case 0x2fef3cu: goto label_2fef3c;
        case 0x2fef40u: goto label_2fef40;
        case 0x2fef44u: goto label_2fef44;
        case 0x2fef48u: goto label_2fef48;
        case 0x2fef4cu: goto label_2fef4c;
        case 0x2fef50u: goto label_2fef50;
        case 0x2fef54u: goto label_2fef54;
        case 0x2fef58u: goto label_2fef58;
        case 0x2fef5cu: goto label_2fef5c;
        case 0x2fef60u: goto label_2fef60;
        case 0x2fef64u: goto label_2fef64;
        case 0x2fef68u: goto label_2fef68;
        case 0x2fef6cu: goto label_2fef6c;
        case 0x2fef70u: goto label_2fef70;
        case 0x2fef74u: goto label_2fef74;
        case 0x2fef78u: goto label_2fef78;
        case 0x2fef7cu: goto label_2fef7c;
        case 0x2fef80u: goto label_2fef80;
        case 0x2fef84u: goto label_2fef84;
        case 0x2fef88u: goto label_2fef88;
        case 0x2fef8cu: goto label_2fef8c;
        case 0x2fef90u: goto label_2fef90;
        case 0x2fef94u: goto label_2fef94;
        default: break;
    }

    ctx->pc = 0x2fed78u;

label_2fed78:
    // 0x2fed78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2fed7c:
    // 0x2fed7c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2fed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2fed80:
    // 0x2fed80: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2fed80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2fed84:
    // 0x2fed84: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2fed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2fed88:
    // 0x2fed88: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2fed88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2fed8c:
    // 0x2fed8c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2fed8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2fed90:
    // 0x2fed90: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2fed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2fed94:
    // 0x2fed94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fed94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fed98:
    // 0x2fed98: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2fed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2fed9c:
    // 0x2fed9c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2fed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2feda0:
    // 0x2feda0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2feda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2feda4:
    // 0x2feda4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x2feda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2feda8:
    // 0x2feda8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2feda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2fedac:
    // 0x2fedac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2fedacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2fedb0:
    // 0x2fedb0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2fedb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2fedb4:
    // 0x2fedb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2fedb8:
    // 0x2fedb8: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x2fedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_2fedbc:
    // 0x2fedbc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_2fedc0:
    if (ctx->pc == 0x2FEDC0u) {
        ctx->pc = 0x2FEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDBCu;
        // 0x2fedc0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDC4u;
        goto label_2fedc4;
    }
    ctx->pc = 0x2FEDBCu;
    {
        const bool branch_taken_0x2fedbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDBCu;
        // 0x2fedc0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedbc) {
            ctx->pc = 0x2FEE5Cu;
            goto label_2fee5c;
        }
    }
    ctx->pc = 0x2FEDC4u;
label_2fedc4:
    // 0x2fedc4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2fedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2fedc8:
    // 0x2fedc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fedcc:
    // 0x2fedcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fedd0:
    // 0x2fedd0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_2fedd4:
    if (ctx->pc == 0x2FEDD4u) {
        ctx->pc = 0x2FEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDD0u;
        // 0x2fedd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDD8u;
        goto label_2fedd8;
    }
    ctx->pc = 0x2FEDD0u;
    {
        const bool branch_taken_0x2fedd0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2FEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDD0u;
        // 0x2fedd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedd0) {
            ctx->pc = 0x2FEE6Cu;
            goto label_2fee6c;
        }
    }
    ctx->pc = 0x2FEDD8u;
label_2fedd8:
    // 0x2fedd8: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x2fedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_2feddc:
    // 0x2feddc: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_2fede0:
    // 0x2fede0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2fede4:
    // 0x2fede4: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x2fede4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_2fede8:
    // 0x2fede8: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x2fede8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_2fedec:
    // 0x2fedec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fedecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fedf0:
    // 0x2fedf0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x2fedf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2fedf4:
    // 0x2fedf4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x2fedf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2fedf8:
    // 0x2fedf8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x2fedf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_2fedfc:
    // 0x2fedfc: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x2fedfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2fee00:
    // 0x2fee00: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x2fee00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2fee04:
    // 0x2fee04: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2fee04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2fee08:
    // 0x2fee08: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2fee08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2fee0c:
    // 0x2fee0c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x2fee0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_2fee10:
    // 0x2fee10: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x2fee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_2fee14:
    // 0x2fee14: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x2fee14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2fee18:
    // 0x2fee18: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x2fee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_2fee1c:
    // 0x2fee1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fee20:
    // 0x2fee20: 0x60f809  jalr        $v1
label_2fee24:
    if (ctx->pc == 0x2FEE24u) {
        ctx->pc = 0x2FEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE20u;
        // 0x2fee24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE28u;
        goto label_2fee28;
    }
    ctx->pc = 0x2FEE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FEE28u);
        ctx->pc = 0x2FEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE20u;
        // 0x2fee24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE20u, 0x2FEE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEE28u;
label_2fee28:
    // 0x2fee28: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x2fee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2fee2c:
    // 0x2fee2c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x2fee2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_2fee30:
    // 0x2fee30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fee34:
    // 0x2fee34: 0x40f809  jalr        $v0
label_2fee38:
    if (ctx->pc == 0x2FEE38u) {
        ctx->pc = 0x2FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE34u;
        // 0x2fee38: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE3Cu;
        goto label_2fee3c;
    }
    ctx->pc = 0x2FEE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEE3Cu);
        ctx->pc = 0x2FEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE34u;
        // 0x2fee38: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE34u, 0x2FEE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEE3Cu;
label_2fee3c:
    // 0x2fee3c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2fee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2fee40:
    // 0x2fee40: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x2fee40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2fee44:
    // 0x2fee44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fee48:
    // 0x2fee48: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2fee48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fee4c:
    // 0x2fee4c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2fee50:
    if (ctx->pc == 0x2FEE50u) {
        ctx->pc = 0x2FEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE4Cu;
        // 0x2fee50: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE54u;
        goto label_2fee54;
    }
    ctx->pc = 0x2FEE4Cu;
    {
        const bool branch_taken_0x2fee4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE4Cu;
        // 0x2fee50: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee4c) {
            ctx->pc = 0x2FEDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fedf0;
        }
    }
    ctx->pc = 0x2FEE54u;
label_2fee54:
    // 0x2fee54: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fee58:
    if (ctx->pc == 0x2FEE58u) {
        ctx->pc = 0x2FEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE54u;
        // 0x2fee58: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE5Cu;
        goto label_2fee5c;
    }
    ctx->pc = 0x2FEE54u;
    {
        const bool branch_taken_0x2fee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE54u;
        // 0x2fee58: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee54) {
            ctx->pc = 0x2FEE7Cu;
            goto label_2fee7c;
        }
    }
    ctx->pc = 0x2FEE5Cu;
label_2fee5c:
    // 0x2fee5c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x2fee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_2fee60:
    // 0x2fee60: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x2fee60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_2fee64:
    // 0x2fee64: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fee68:
    if (ctx->pc == 0x2FEE68u) {
        ctx->pc = 0x2FEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE64u;
        // 0x2fee68: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE6Cu;
        goto label_2fee6c;
    }
    ctx->pc = 0x2FEE64u;
    {
        const bool branch_taken_0x2fee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE64u;
        // 0x2fee68: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee64) {
            ctx->pc = 0x2FEE78u;
            goto label_2fee78;
        }
    }
    ctx->pc = 0x2FEE6Cu;
label_2fee6c:
    // 0x2fee6c: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x2fee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_2fee70:
    // 0x2fee70: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x2fee70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_2fee74:
    // 0x2fee74: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fee74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2fee78:
    // 0x2fee78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2fee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fee7c:
    // 0x2fee7c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2fee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2fee80:
    // 0x2fee80: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2fee80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2fee84:
    // 0x2fee84: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2fee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2fee88:
    // 0x2fee88: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2fee88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2fee8c:
    // 0x2fee8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fee90:
    // 0x2fee90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2fee94:
    if (ctx->pc == 0x2FEE94u) {
        ctx->pc = 0x2FEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE90u;
        // 0x2fee94: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE98u;
        goto label_2fee98;
    }
    ctx->pc = 0x2FEE90u;
    {
        const bool branch_taken_0x2fee90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE90u;
        // 0x2fee94: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee90) {
            ctx->pc = 0x2FEEB0u;
            goto label_2feeb0;
        }
    }
    ctx->pc = 0x2FEE98u;
label_2fee98:
    // 0x2fee98: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x2fee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_2fee9c:
    // 0x2fee9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2feea0:
    if (ctx->pc == 0x2FEEA0u) {
        ctx->pc = 0x2FEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE9Cu;
        // 0x2feea0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEA4u;
        goto label_2feea4;
    }
    ctx->pc = 0x2FEE9Cu;
    {
        const bool branch_taken_0x2fee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE9Cu;
        // 0x2feea0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee9c) {
            ctx->pc = 0x2FEEB0u;
            goto label_2feeb0;
        }
    }
    ctx->pc = 0x2FEEA4u;
label_2feea4:
    // 0x2feea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2feea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2feea8:
    // 0x2feea8: 0xc0bf75c  jal         func_2FDD70
label_2feeac:
    if (ctx->pc == 0x2FEEACu) {
        ctx->pc = 0x2FEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEA8u;
        // 0x2feeac: 0x24a50838  addiu       $a1, $a1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEB0u;
        goto label_2feeb0;
    }
    ctx->pc = 0x2FEEA8u;
    SET_GPR_U32(ctx, 31, 0x2FEEB0u);
    ctx->pc = 0x2FEEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEA8u;
    // 0x2feeac: 0x24a50838  addiu       $a1, $a1, 0x838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FEEA8u, 0x2FEEB0u)) {
        return;
    }
    ctx->pc = 0x2FEEB0u;
label_2feeb0:
    // 0x2feeb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2feeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2feeb4:
    // 0x2feeb4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2feeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2feeb8:
    // 0x2feeb8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2feeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2feebc:
    // 0x2feebc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2feebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2feec0:
    // 0x2feec0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2feec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2feec4:
    // 0x2feec4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2feec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2feec8:
    // 0x2feec8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2feecc:
    if (ctx->pc == 0x2FEECCu) {
        ctx->pc = 0x2FEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEC8u;
        // 0x2feecc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEED0u;
        goto label_2feed0;
    }
    ctx->pc = 0x2FEEC8u;
    {
        const bool branch_taken_0x2feec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEC8u;
        // 0x2feecc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feec8) {
            ctx->pc = 0x2FEF10u;
            goto label_2fef10;
        }
    }
    ctx->pc = 0x2FEED0u;
label_2feed0:
    // 0x2feed0: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x2feed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_2feed4:
    // 0x2feed4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2feed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2feed8:
    // 0x2feed8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2feed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2feedc:
    // 0x2feedc: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x2feedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_2feee0:
    // 0x2feee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2feee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2feee4:
    // 0x2feee4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2feee4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2feee8:
    // 0x2feee8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2feee8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2feeec:
    // 0x2feeec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2feeecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2feef0:
    // 0x2feef0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2feef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2feef4:
    // 0x2feef4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2feef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2feef8:
    // 0x2feef8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2feef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2feefc:
    // 0x2feefc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2feefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fef00:
    // 0x2fef00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fef00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fef04:
    // 0x2fef04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fef04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fef08:
    // 0x2fef08: 0x80c0222  j           func_300888
label_2fef0c:
    if (ctx->pc == 0x2FEF0Cu) {
        ctx->pc = 0x2FEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF08u;
        // 0x2fef0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF10u;
        goto label_2fef10;
    }
    ctx->pc = 0x2FEF08u;
    ctx->pc = 0x2FEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF08u;
    // 0x2fef0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300888u, 0x2FEF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FEF10u;
label_2fef10:
    // 0x2fef10: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x2fef10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_2fef14:
    // 0x2fef14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2fef18:
    if (ctx->pc == 0x2FEF18u) {
        ctx->pc = 0x2FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF14u;
        // 0x2fef18: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF1Cu;
        goto label_2fef1c;
    }
    ctx->pc = 0x2FEF14u;
    {
        const bool branch_taken_0x2fef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF14u;
        // 0x2fef18: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef14) {
            ctx->pc = 0x2FEF54u;
            goto label_2fef54;
        }
    }
    ctx->pc = 0x2FEF1Cu;
label_2fef1c:
    // 0x2fef1c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2fef20:
    // 0x2fef20: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x2fef20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_2fef24:
    // 0x2fef24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fef28:
    // 0x2fef28: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2fef28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2fef2c:
    // 0x2fef2c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2fef2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fef30:
    // 0x2fef30: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2fef30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fef34:
    // 0x2fef34: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2fef34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2fef38:
    // 0x2fef38: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2fef38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fef3c:
    // 0x2fef3c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2fef3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fef40:
    // 0x2fef40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fef40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fef44:
    // 0x2fef44: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fef44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fef48:
    // 0x2fef48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fef48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fef4c:
    // 0x2fef4c: 0x80c0222  j           func_300888
label_2fef50:
    if (ctx->pc == 0x2FEF50u) {
        ctx->pc = 0x2FEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF4Cu;
        // 0x2fef50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF54u;
        goto label_2fef54;
    }
    ctx->pc = 0x2FEF4Cu;
    ctx->pc = 0x2FEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF4Cu;
    // 0x2fef50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300888u, 0x2FEF4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FEF54u;
label_2fef54:
    // 0x2fef54: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2fef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2fef58:
    // 0x2fef58: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x2fef58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_2fef5c:
    // 0x2fef5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fef60:
    // 0x2fef60: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x2fef60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_2fef64:
    // 0x2fef64: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fef64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2fef68:
    // 0x2fef68: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2fef68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2fef6c:
    // 0x2fef6c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2fef6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fef70:
    // 0x2fef70: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2fef70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fef74:
    // 0x2fef74: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2fef74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2fef78:
    // 0x2fef78: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2fef78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fef7c:
    // 0x2fef7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2fef7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fef80:
    // 0x2fef80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fef80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fef84:
    // 0x2fef84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fef84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fef88:
    // 0x2fef88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fef88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fef8c:
    // 0x2fef8c: 0x80c01e6  j           func_300798
label_2fef90:
    if (ctx->pc == 0x2FEF90u) {
        ctx->pc = 0x2FEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF8Cu;
        // 0x2fef90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEF94u;
        goto label_2fef94;
    }
    ctx->pc = 0x2FEF8Cu;
    ctx->pc = 0x2FEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF8Cu;
    // 0x2fef90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300798u, 0x2FEF8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FEF94u;
label_2fef94:
    // 0x2fef94: 0x0  nop
    ctx->pc = 0x2fef94u;
    // NOP
    ctx->pc = 0x2fef98u;
}
