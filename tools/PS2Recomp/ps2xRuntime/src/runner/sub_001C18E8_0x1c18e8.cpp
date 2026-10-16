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

// Function: sub_001C18E8
// Address: 0x1c18e8 - 0x1c1940
void sub_001C18E8_0x1c18e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C18E8_0x1c18e8");
#endif

    switch (ctx->pc) {
        case 0x1c1910u: goto label_1c1910;
        case 0x1c191cu: goto label_1c191c;
        default: break;
    }

    ctx->pc = 0x1c18e8u;

    // 0x1c18e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c18e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c18ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c18ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c18f0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1c18f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c18f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c18f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c18fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c18fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c1900: 0x8e300318  lw          $s0, 0x318($s1)
    ctx->pc = 0x1c1900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x1c1904: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1904u;
    {
        const bool branch_taken_0x1c1904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1904u;
        // 0x1c1908: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1904) {
            ctx->pc = 0x1C1928u;
            goto label_1c1928;
        }
    }
    ctx->pc = 0x1C190Cu;
    // 0x1c190c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1910:
    // 0x1c1910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1914: 0xc0701ce  jal         func_1C0738
    ctx->pc = 0x1C1914u;
    SET_GPR_U32(ctx, 31, 0x1C191Cu);
    ctx->pc = 0x1C1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1914u;
    // 0x1c1918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0738u, 0x1C1914u, 0x1C191Cu)) {
        return;
    }
    ctx->pc = 0x1C191Cu;
label_1c191c:
    // 0x1c191c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1c191cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1920: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C1920u;
    {
        const bool branch_taken_0x1c1920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1920) {
            ctx->pc = 0x1C1924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1920u;
            // 0x1c1924: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1910;
        }
    }
    ctx->pc = 0x1C1928u;
label_1c1928:
    // 0x1c1928: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c1928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c192c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c192cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1934: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1c1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1938: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1938u;
        // 0x1c193c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1940u;
}
