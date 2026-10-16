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

// Function: sub_0012C100
// Address: 0x12c100 - 0x12c250
void sub_0012C100_0x12c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C100_0x12c100");
#endif

    switch (ctx->pc) {
        case 0x12c160u: goto label_12c160;
        case 0x12c180u: goto label_12c180;
        case 0x12c1b0u: goto label_12c1b0;
        case 0x12c1c4u: goto label_12c1c4;
        case 0x12c1e8u: goto label_12c1e8;
        case 0x12c204u: goto label_12c204;
        case 0x12c21cu: goto label_12c21c;
        default: break;
    }

    ctx->pc = 0x12c100u;

    // 0x12c100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12c104: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x12c104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x12c108: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x12c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x12c10c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x12c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x12c110: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x12c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x12c114: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12c114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12c118: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x12c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x12c11c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x12c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x12c120: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x12c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x12c124: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x12c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x12c128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c12c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x12c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x12c130: 0x8c930018  lw          $s3, 0x18($a0)
    ctx->pc = 0x12c130u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x12c134: 0x8c623860  lw          $v0, 0x3860($v1)
    ctx->pc = 0x12c134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3860u));
    // 0x12c138: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x12c13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c140: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x12C140u;
    {
        const bool branch_taken_0x12c140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c140) {
            ctx->pc = 0x12C144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C140u;
            // 0x12c144: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C148u;
    // 0x12c148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c14c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x12C14Cu;
    {
        const bool branch_taken_0x12c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C14Cu;
        // 0x12c150: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c14c) {
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C154u;
    // 0x12c154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c158: 0xc095988  jal         func_256620
    ctx->pc = 0x12C158u;
    SET_GPR_U32(ctx, 31, 0x12C160u);
    ctx->pc = 0x12C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C158u;
    // 0x12c15c: 0x24050fff  addiu       $a1, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x12C158u, 0x12C160u)) {
        return;
    }
    ctx->pc = 0x12C160u;
label_12c160:
    // 0x12c160: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12C160u;
    {
        const bool branch_taken_0x12c160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C160u;
        // 0x12c164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c160) {
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C168u;
    // 0x12c168: 0x8e770018  lw          $s7, 0x18($s3)
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x12c16c: 0x12e00029  beqz        $s7, . + 4 + (0x29 << 2)
    ctx->pc = 0x12C16Cu;
    {
        const bool branch_taken_0x12c16c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C16Cu;
        // 0x12c170: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c16c) {
            ctx->pc = 0x12C214u;
            goto label_12c214;
        }
    }
    ctx->pc = 0x12C174u;
    // 0x12c174: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x12c174u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x12c178: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x12c178u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12c17c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12c17cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c180:
    // 0x12c180: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x12c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x12c184: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x12c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x12c188: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x12C188u;
    {
        const bool branch_taken_0x12c188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c188) {
            ctx->pc = 0x12C18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C188u;
            // 0x12c18c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C208u;
            goto label_12c208;
        }
    }
    ctx->pc = 0x12C190u;
    // 0x12c190: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x12c194: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c198: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x12c198u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12c19c: 0x568018  mult        $s0, $v0, $s6
    ctx->pc = 0x12c19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x12c1a0: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x12c1a4: 0xafc28374  sw          $v0, -0x7C8C($fp)
    ctx->pc = 0x12c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935412), GPR_U32(ctx, 2));
    // 0x12c1a8: 0xc080924  jal         func_202490
    ctx->pc = 0x12C1A8u;
    SET_GPR_U32(ctx, 31, 0x12C1B0u);
    ctx->pc = 0x12C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1A8u;
    // 0x12c1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x12C1A8u, 0x12C1B0u)) {
        return;
    }
    ctx->pc = 0x12C1B0u;
label_12c1b0:
    // 0x12c1b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x12c1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1b8: 0xac628378  sw          $v0, -0x7C88($v1)
    ctx->pc = 0x12c1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338378u, _value); } while (0);
    // 0x12c1bc: 0xc080924  jal         func_202490
    ctx->pc = 0x12C1BCu;
    SET_GPR_U32(ctx, 31, 0x12C1C4u);
    ctx->pc = 0x12C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1BCu;
    // 0x12c1c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x12C1BCu, 0x12C1C4u)) {
        return;
    }
    ctx->pc = 0x12C1C4u;
label_12c1c4:
    // 0x12c1c4: 0x8fc68374  lw          $a2, -0x7C8C($fp)
    ctx->pc = 0x12c1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935412)));
    // 0x12c1c8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x12c1cc: 0x8c648378  lw          $a0, -0x7C88($v1)
    ctx->pc = 0x12c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338378u));
    // 0x12c1d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1d4: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x12c1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c1d8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x12c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x12c1dc: 0x3012  mflo        $a2
    ctx->pc = 0x12c1dcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12c1e0: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x12C1E0u;
    SET_GPR_U32(ctx, 31, 0x12C1E8u);
    ctx->pc = 0x12C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1E0u;
    // 0x12c1e4: 0xac62837c  sw          $v0, -0x7C84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935420), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x12C1E0u, 0x12C1E8u)) {
        return;
    }
    ctx->pc = 0x12C1E8u;
label_12c1e8:
    // 0x12c1e8: 0x8fc68374  lw          $a2, -0x7C8C($fp)
    ctx->pc = 0x12c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935412)));
    // 0x12c1ec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x12c1f0: 0x8c44837c  lw          $a0, -0x7C84($v0)
    ctx->pc = 0x12c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33837Cu));
    // 0x12c1f4: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x12c1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c1f8: 0x3012  mflo        $a2
    ctx->pc = 0x12c1f8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12c1fc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x12C1FCu;
    SET_GPR_U32(ctx, 31, 0x12C204u);
    ctx->pc = 0x12C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1FCu;
    // 0x12c200: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x12C1FCu, 0x12C204u)) {
        return;
    }
    ctx->pc = 0x12C204u;
label_12c204:
    // 0x12c204: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12c204u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_12c208:
    // 0x12c208: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x12c208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x12c20c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x12C20Cu;
    {
        const bool branch_taken_0x12c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C20Cu;
        // 0x12c210: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c20c) {
            ctx->pc = 0x12C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c180;
        }
    }
    ctx->pc = 0x12C214u;
label_12c214:
    // 0x12c214: 0xc09599c  jal         func_256670
    ctx->pc = 0x12C214u;
    SET_GPR_U32(ctx, 31, 0x12C21Cu);
    ctx->pc = 0x12C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C214u;
    // 0x12c218: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x12C214u, 0x12C21Cu)) {
        return;
    }
    ctx->pc = 0x12C21Cu;
label_12c21c:
    // 0x12c21c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c21cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c220:
    // 0x12c220: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x12c220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c224: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x12c224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c228: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x12c228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c22c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x12c22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c230: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12c230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c234: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x12c234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c238: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x12c238u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c23c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x12c23cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c240: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x12c240u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c248: 0x3e00008  jr          $ra
    ctx->pc = 0x12C248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C248u;
        // 0x12c24c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C250u;
}
